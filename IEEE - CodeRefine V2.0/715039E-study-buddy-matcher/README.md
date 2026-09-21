# [715039E] Study Buddy Matcher

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/E](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/E)
- **Submission ID:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390183775](https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390183775)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 156 ms
- **Memory Consumed:** 10300 KB

## Problem Statement

# E. Study Buddy Matcher

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/E](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

IEEE-Pulse is organizing a pair-programming session for students. To make the pairs as balanced as possible, the organizers want to find two students whose combined skill ratings match a given target score.

You are given the skill ratings of N students, already sorted. Your task is to find two different students whose ratings add up exactly to the target score. If such a pair exists, print their positions in the list. Otherwise, print -1 -1.

## Input

The first line contains two integers $N$ and $target$ ($2 \le N \le 2 \cdot 10^5$, $0 \le target \le 2 \cdot 10^6$) — the number of students and the mentor's target combined score.

The second line contains $N$ integers $rating_1, rating_2, \ldots, rating_N$ ($0 \le rating_i \le 10^6$) — the skill ratings of the students, given in non-decreasing order.

## Output

Print two integers — the $1$-indexed positions of the pair of students whose ratings sum to exactly $target$, with the smaller index printed first.

If no such pair exists, print -1 -1

## Examples

### Example 1
**Input:**
```
5 9
1 2 4 6 8
```

**Output:**
```
1 5
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, t;
    cin >> n >> t;

    ll arr[n];

    map<ll, ll> mp; // value -> position

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;

        arr[i] = t - x; // complement

        mp[x] = i + 1;  // position
    }

    for (ll i = 0; i < n; i++) {
        if (mp[arr[i]]) {
            ll pos = mp[arr[i]];

            if (pos != i + 1) {
                cout << min(i + 1, pos) << " "
                     << max(i + 1, pos) << "\n";
                return 0;
            }
        }
    }

    cout << -1 << " " << -1 << "\n";

    return 0;
}
```
