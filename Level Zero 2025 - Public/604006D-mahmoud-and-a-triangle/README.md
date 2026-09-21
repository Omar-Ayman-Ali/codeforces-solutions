# [604006D] Mahmoud and a Triangle

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389110769](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389110769)
- **Rating:** 1000
- **Tags:** constructive algorithms, geometry, greedy, math, number theory, sortings
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Mahmoud and a Triangle

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/D)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

Mahmoud has *n* line segments, the *i*-th of them has length *a**i*. Ehab challenged him to use exactly 3 line segments to form a non-degenerate triangle. Mahmoud doesn't accept challenges unless he is sure he can win, so he asked you to tell him if he should accept the challenge. Given the lengths of the line segments, check if he can choose exactly 3 of them to form a non-degenerate triangle.

Mahmoud should use exactly 3 line segments, he can't concatenate two line segments or change any length. A non-degenerate triangle is a triangle with positive area.

## Input

The first line contains single integer *n* (3 ≤ *n* ≤ 105) — the number of line segments Mahmoud has.

The second line contains *n* integers *a*1, *a*2, ..., *a**n* (1 ≤ *a**i* ≤ 109) — the lengths of line segments Mahmoud has.

## Output

In the only line print "YES" if he can choose exactly three line segments and form a non-degenerate triangle with them, and "NO" otherwise.

## Examples

### Example 1
**Input:**
```
5
1 5 3 2 4
```

**Output:**
```
YES
```

## Note

For the first example, he can use line segments with lengths 2, 4 and 5 to form a non-degenerate triangle.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

void solve()
{
    int n;
    bool x = false;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    for (int i = 0; i + 2 < n; i++)
    {
        if (arr[i] + arr[i + 1] > arr[i + 2])
            x = true;
    }
    if (x)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    fast;
    solve();
    return 0;
}
```
