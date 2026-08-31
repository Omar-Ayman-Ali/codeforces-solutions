#!/usr/bin/env bash
set -e

echo "=========================================="
echo "   Codeforces to GitHub Sync Setup Tool   "
echo "=========================================="
echo ""

# Ask for Codeforces handle if not provided
if [ -z "$1" ]; then
    read -p "Enter your Codeforces handle (username): " CF_HANDLE
else
    CF_HANDLE="$1"
fi

if [ -z "$CF_HANDLE" ]; then
    echo "Error: Codeforces handle cannot be empty."
    exit 1
fi

echo ""
echo "[1/3] Downloading solutions for handle: $CF_HANDLE..."
python3 cf_sync.py --handle "$CF_HANDLE" --output . --group-by rating

echo ""
echo "[2/3] Preparing Git repository..."
if [ ! -d ".git" ]; then
    git init
    git branch -M main
fi

git add .
git commit -m "feat: initial sync of Codeforces solutions for $CF_HANDLE" || echo "No new changes to commit."

echo ""
echo "[3/3] Ready to push to GitHub!"
echo "------------------------------------------------------"
echo "To publish this to your GitHub account, run:"
echo ""
echo "  Option A (Using GitHub CLI):"
echo "    gh repo create codeforces-solutions --public --source=. --remote=origin --push"
echo ""
echo "  Option B (Using Git Remote URL):"
echo "    git remote add origin https://github.com/<YOUR_USERNAME>/<YOUR_REPO_NAME>.git"
echo "    git push -u origin main"
echo "------------------------------------------------------"
echo "[✔] All set up successfully!"
