#!/usr/bin/env python3
"""
Codeforces to GitHub Sync
Fetches all accepted submissions for a given Codeforces handle,
extracts authentic source code and metadata, organizes them neatly,
and generates an interactive README.md with detailed statistics.
"""

import os
import sys
import re
import time
import json
import argparse
import html
from datetime import datetime, timezone
from collections import defaultdict
import requests
from bs4 import BeautifulSoup

COOKIE_FILE = os.path.expanduser("~/.codeforces_cookies.json")

# Extension map for Codeforces programming languages
LANG_EXTENSIONS = {
    "GNU C++": ".cpp",
    "MS C++": ".cpp",
    "Clang++": ".cpp",
    "C++": ".cpp",
    "GNU C": ".c",
    "Clang": ".c",
    "Python": ".py",
    "PyPy": ".py",
    "Java": ".java",
    "Kotlin": ".kt",
    "Rust": ".rs",
    "Go": ".go",
    "C#": ".cs",
    ".NET": ".cs",
    "JavaScript": ".js",
    "Node.js": ".js",
    "TypeScript": ".ts",
    "Haskell": ".hs",
    "Pascal": ".pas",
    "Ruby": ".rb",
    "PHP": ".php",
    "Scala": ".scala",
    "OCaml": ".ml",
    "D": ".d",
    "Perl": ".pl",
}

def get_extension(language_str):
    for key, ext in LANG_EXTENSIONS.items():
        if key.lower() in language_str.lower():
            return ext
    return ".txt"


def sanitize_filename(name):
    """Removes invalid filename characters."""
    return re.sub(r'[\/\\:\*\?"<>\|\s]+', '_', name).strip('_')


def load_saved_cookies():
    """Loads saved cookies from local file if available."""
    if os.path.exists(COOKIE_FILE):
        try:
            with open(COOKIE_FILE, "r", encoding="utf-8") as f:
                return json.load(f)
        except Exception:
            pass
    return None


def save_cookies(cookies_dict):
    """Saves cookies to local file for future runs."""
    try:
        with open(COOKIE_FILE, "w", encoding="utf-8") as f:
            json.dump(cookies_dict, f)
        print(f"[*] Saved session cookies to {COOKIE_FILE}")
    except Exception as e:
        print(f"[!] Warning: Could not save cookies: {e}")


def interactive_browser_login():
    """Opens a browser window for the user to log in to Codeforces once."""
    print("\n" + "=" * 60)
    print("🔑 Codeforces Login Required to Access Source Code")
    print("Codeforces requires authentication to view submission code.")
    print("Opening a browser window for you to log in...")
    print("=" * 60 + "\n")

    try:
        from playwright.sync_api import sync_playwright
    except ImportError:
        print("[!] Playwright is required for browser login. Installing...")
        import subprocess
        subprocess.check_call([sys.executable, "-m", "pip", "install", "playwright"])
        from playwright.sync_api import sync_playwright

    cookies_dict = {}
    with sync_playwright() as p:
        browser = p.chromium.launch(
            executable_path="/usr/bin/chromium" if os.path.exists("/usr/bin/chromium") else None,
            headless=False,
            args=["--no-sandbox", "--disable-setuid-sandbox"]
        )
        context = browser.new_context(
            user_agent="Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36"
        )
        page = context.new_page()
        page.goto("https://codeforces.com/enter", timeout=60000)

        print("[*] Please log in to your Codeforces account in the opened browser window.")
        print("[*] Waiting for login to complete...")

        # Wait until user logs in (URL changes or profile header appears)
        start_time = time.time()
        while time.time() - start_time < 300:  # 5 minute timeout
            time.sleep(1.5)
            url = page.url
            if "/enter" not in url:
                # Login completed!
                print("[✔] Login detected successfully!")
                time.sleep(2)
                for c in context.cookies():
                    cookies_dict[c["name"]] = c["value"]
                break

        browser.close()

    if cookies_dict:
        save_cookies(cookies_dict)
        return cookies_dict
    else:
        print("[!] Login timed out or was cancelled.")
        return None


def get_authenticated_session(provided_cookie_str=None):
    """Initializes a requests session with valid Codeforces authentication."""
    session = requests.Session()
    session.headers.update({
        "User-Agent": "Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36",
        "Accept-Language": "en-US,en;q=0.9",
        "Referer": "https://codeforces.com/",
    })

    cookies = {}
    if provided_cookie_str:
        # Parse user provided raw cookie string
        for part in provided_cookie_str.split(";"):
            if "=" in part:
                k, v = part.strip().split("=", 1)
                cookies[k.strip()] = v.strip()
        save_cookies(cookies)
    else:
        saved = load_saved_cookies()
        if saved:
            cookies = saved

    for k, v in cookies.items():
        session.cookies.set(k, v, domain="codeforces.com")
        session.cookies.set(k, v, domain=".codeforces.com")

    # Test session and extract CSRF token
    try:
        resp = session.get("https://codeforces.com/", timeout=15)
        # Check if user is logged in
        if "Enter" in resp.text and "Register" in resp.text and ("Log out" not in resp.text and "Logout" not in resp.text):
            # Not logged in
            cookies = interactive_browser_login()
            if cookies:
                for k, v in cookies.items():
                    session.cookies.set(k, v, domain="codeforces.com")
                    session.cookies.set(k, v, domain=".codeforces.com")
                resp = session.get("https://codeforces.com/", timeout=15)

        csrf_match = re.search(r'data-csrf=[\"\']([a-f0-9]+)[\"\']', resp.text) or \
                     re.search(r'name=[\"\']X-Csrf-Token[\"\'] content=[\"\']([a-f0-9]+)[\"\']', resp.text) or \
                     re.search(r'csrf_token\s*=\s*[\"\']([a-f0-9]+)[\"\']', resp.text)
        csrf_token = csrf_match.group(1) if csrf_match else None
        return session, csrf_token
    except Exception as e:
        print(f"[!] Error creating authenticated session: {e}")
        return session, None


def fetch_user_submissions(handle):
    """Fetches user status from official Codeforces API."""
    url = f"https://codeforces.com/api/user.status?handle={handle}&from=1&count=100000"
    print(f"[*] Querying Codeforces API for user: {handle}...")
    resp = requests.get(url, timeout=20).json()

    if resp.get("status") != "OK":
        print(f"[!] Codeforces API Error: {resp.get('comment', 'Unknown error')}")
        sys.exit(1)

    submissions = resp.get("result", [])
    print(f"[*] Fetched {len(submissions)} total submissions.")
    return submissions


def filter_accepted_submissions(submissions):
    """Filters accepted submissions and groups by unique problem."""
    accepted = {}
    for sub in reversed(submissions):
        if sub.get("verdict") == "OK" and "problem" in sub:
            prob = sub["problem"]
            contest_id = sub.get("contestId") or prob.get("contestId")
            index = prob.get("index")
            if not contest_id or not index:
                continue

            unique_key = f"{contest_id}_{index}"
            accepted[unique_key] = sub

    return accepted


def extract_source_code_via_api(session, csrf_token, submission_id):
    """Extracts submission source code using Codeforces internal submitSource endpoint."""
    url = "https://codeforces.com/data/submitSource"
    data = {
        "submissionId": str(submission_id),
        "csrf_token": csrf_token or ""
    }
    headers = {
        "X-Csrf-Token": csrf_token or "",
        "X-Requested-With": "XMLHttpRequest",
        "Referer": "https://codeforces.com/submissions"
    }

    try:
        resp = session.post(url, data=data, headers=headers, timeout=15)
        if resp.status_code == 200:
            res_json = resp.json()
            if "source" in res_json:
                return res_json["source"]
    except Exception:
        pass

    return None


def generate_readme(handle, processed_problems, output_dir, group_by):
    """Generates a comprehensive and aesthetic README.md with stats."""
    total_solved = len(processed_problems)
    rating_counts = defaultdict(int)
    tag_counts = defaultdict(int)
    lang_counts = defaultdict(int)

    for item in processed_problems:
        r = item["rating"]
        rating_counts[r] += 1
        for t in item["tags"]:
            tag_counts[t] += 1
        lang_counts[item["language"]] += 1

    sorted_ratings = sorted([r for r in rating_counts.keys() if r != "Unrated"])
    
    readme = []
    readme.append(f"# 🏆 Codeforces Solutions Repository")
    readme.append(f"")
    readme.append(f"> Automated archive of solved Codeforces problems and solutions for **[{handle}](https://codeforces.com/profile/{handle})**.")
    readme.append(f"")
    readme.append(f"![Total Solved](https://img.shields.io/badge/Total%20Solved-{total_solved}-brightgreen?style=for-the-badge&logo=codeforces)")
    readme.append(f"![Profile](https://img.shields.io/badge/Codeforces-{handle}-blue?style=for-the-badge&logo=codeforces)")
    readme.append(f"![Last Updated](https://img.shields.io/badge/Last%20Updated-{datetime.now(timezone.utc).strftime('%Y--%m--%d')}-informational?style=for-the-badge)")
    readme.append(f"")
    readme.append(f"---")
    readme.append(f"")

    # Statistics Section
    readme.append(f"## 📊 Problem Difficulty Breakdown")
    readme.append(f"")
    readme.append(f"| Difficulty Rating | Solved Count |")
    readme.append(f"| :--- | :--- |")
    for r in sorted_ratings:
        readme.append(f"| **{r}** | {rating_counts[r]} |")
    if rating_counts["Unrated"] > 0:
        readme.append(f"| **Unrated / Gym** | {rating_counts['Unrated']} |")
    readme.append(f"")

    if tag_counts:
        readme.append(f"## 🏷️ Top Tags")
        readme.append(f"")
        top_tags = sorted(tag_counts.items(), key=lambda x: x[1], reverse=True)[:15]
        tag_badges = [f"`{tag} ({count})`" for tag, count in top_tags]
        readme.append(" • ".join(tag_badges))
        readme.append(f"")

    # Problems Table
    readme.append(f"## 📝 Solved Problems Index")
    readme.append(f"")
    readme.append(f"| # | Contest | Index | Problem Name | Rating | Tags | Solution | Date Solved |")
    readme.append(f"| :---: | :---: | :---: | :--- | :---: | :--- | :---: | :---: |")

    sorted_problems = sorted(
        processed_problems,
        key=lambda x: (int(x["contest_id"]) if str(x["contest_id"]).isdigit() else 0, str(x["index"])),
        reverse=True
    )

    for i, p in enumerate(sorted_problems, 1):
        c_id = p["contest_id"]
        idx = p["index"]
        name = p["name"]
        cf_prob_url = f"https://codeforces.com/contest/{c_id}/problem/{idx}"
        rating_str = f"**{p['rating']}**" if p['rating'] != "Unrated" else "*Unrated*"
        tags_str = ", ".join(p["tags"]) if p["tags"] else "-"
        sol_link = f"[{p['language']}]({p['rel_path']})"
        date_str = p.get("date", "-")
        readme.append(f"| {i} | `{c_id}` | `{idx}` | [{name}]({cf_prob_url}) | {rating_str} | {tags_str} | {sol_link} | {date_str} |")

    readme.append(f"")
    readme.append(f"---")
    readme.append(f"*Auto-generated and synced with [Codeforces to GitHub Sync](https://github.com).*")

    readme_path = os.path.join(output_dir, "README.md")
    with open(readme_path, "w", encoding="utf-8") as f:
        f.write("\n".join(readme) + "\n")
    print(f"[*] Generated index README.md at: {readme_path}")


def main():
    parser = argparse.ArgumentParser(description="Download and sync Codeforces solved problems to a GitHub repository.")
    parser.add_argument("-u", "--handle", help="Codeforces username / handle", default=None)
    parser.add_argument("-o", "--output", help="Output directory path", default="./solutions")
    parser.add_argument("--cookie", help="Raw Codeforces cookie string (e.g. JSESSIONID=...)", default=None)
    parser.add_argument("--login", action="store_true", help="Force open browser to log in to Codeforces")
    parser.add_argument("--group-by", choices=["rating", "contest", "flat"], default="rating",
                        help="Folder grouping strategy: 'rating' (default), 'contest', or 'flat'")
    parser.add_argument("--delay", type=float, default=0.5, help="Delay between requests in seconds (default: 0.5)")
    parser.add_argument("--force", action="store_true", help="Force re-download existing solutions")

    args = parser.parse_args()

    handle = args.handle
    if not handle:
        handle = input("Enter your Codeforces handle: ").strip()
        if not handle:
            print("[!] Handle cannot be empty.")
            sys.exit(1)

    if args.login:
        interactive_browser_login()

    output_dir = os.path.abspath(args.output)
    os.makedirs(output_dir, exist_ok=True)

    session, csrf_token = get_authenticated_session(args.cookie)

    submissions = fetch_user_submissions(handle)
    accepted_dict = filter_accepted_submissions(submissions)
    print(f"[*] Found {len(accepted_dict)} unique accepted problems.")

    if not accepted_dict:
        print("[!] No accepted submissions found for this user.")
        return

    processed_problems = []
    items = list(accepted_dict.items())

    for idx, (key, sub) in enumerate(items, 1):
        prob = sub["problem"]
        contest_id = sub.get("contestId") or prob.get("contestId")
        index = prob.get("index")
        name = prob.get("name", "Unknown Problem")
        rating = prob.get("rating", "Unrated")
        tags = prob.get("tags", [])
        sub_id = sub["id"]
        lang = sub.get("programmingLanguage", "C++")
        created_time = sub.get("creationTimeSeconds")
        date_str = datetime.fromtimestamp(created_time, timezone.utc).strftime("%Y-%m-%d") if created_time else "-"

        ext = get_extension(lang)
        safe_name = sanitize_filename(name)

        if args.group_by == "rating":
            group_folder = f"Rating-{rating}" if rating != "Unrated" else "Unrated"
            folder_path = os.path.join(output_dir, group_folder, f"{contest_id}{index}-{safe_name}")
        elif args.group_by == "contest":
            folder_path = os.path.join(output_dir, f"Contest-{contest_id}", f"{index}-{safe_name}")
        else:
            folder_path = os.path.join(output_dir, f"{contest_id}{index}-{safe_name}")

        os.makedirs(folder_path, exist_ok=True)

        solution_filename = f"solution{ext}"
        solution_filepath = os.path.join(folder_path, solution_filename)
        problem_md_path = os.path.join(folder_path, "README.md")

        needs_download = args.force or not os.path.exists(solution_filepath)

        if needs_download:
            print(f"[{idx}/{len(items)}] Downloading ({contest_id}{index}) {name} (Sub #{sub_id})...")
            code = extract_source_code_via_api(session, csrf_token, sub_id)
            if code:
                with open(solution_filepath, "w", encoding="utf-8") as f:
                    f.write(code)
            else:
                print(f"[!] Warning: Could not retrieve code for {contest_id}{index}. Ensure you are logged in.")
            
            time.sleep(args.delay)

        if not os.path.exists(problem_md_path) or args.force:
            prob_url = f"https://codeforces.com/contest/{contest_id}/problem/{index}"
            sub_url = f"https://codeforces.com/contest/{contest_id}/submission/{sub_id}"
            with open(problem_md_path, "w", encoding="utf-8") as f:
                f.write(f"# [{contest_id}{index}] {name}\n\n")
                f.write(f"- **Problem Link:** [{prob_url}]({prob_url})\n")
                f.write(f"- **Submission ID:** [{sub_url}]({sub_url})\n")
                f.write(f"- **Rating:** {rating}\n")
                f.write(f"- **Tags:** {', '.join(tags) if tags else 'None'}\n")
                f.write(f"- **Language:** {lang}\n")
                f.write(f"- **Solved Date:** {date_str}\n\n")
                f.write(f"## Solution\n\nSee [{solution_filename}](./{solution_filename})\n")

        rel_path = os.path.relpath(solution_filepath, output_dir)
        processed_problems.append({
            "contest_id": contest_id,
            "index": index,
            "name": name,
            "rating": rating,
            "tags": tags,
            "language": lang,
            "sub_id": sub_id,
            "date": date_str,
            "rel_path": rel_path
        })

    generate_readme(handle, processed_problems, output_dir, args.group_by)
    print(f"\n[✔] Successfully processed {len(processed_problems)} solved problems in {output_dir}!")


if __name__ == "__main__":
    main()
