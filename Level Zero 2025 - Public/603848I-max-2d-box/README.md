# [603848I] Max 2D Box

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/I](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/I)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389387781](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389387781)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 171 ms
- **Memory Consumed:** 12000 KB

## Problem Statement

# I. Max 2D Box

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/I](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/I)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given a 2D array $a$ of $n$ rows and $m$ columns and you are asked to find the maximum sum of a box consists of $x$ rows and $y$ columns.

## Input

The first line of input consists of four integers $n$, $m$, $x$, $y$ $(1 \le n, m \le 10^3)$ $(1 \le x \le n)$ $(1 \le y \le m)$ . the size of the given array and the size of the box.

The next $n$ lines each consists of $m$ integers $(-10^9 \le a_i \le 10^9)$ . elements of each row.

## Output

Print the maximum sum of a box of $x$ rows and $y$ columns.

## Examples

### Example 1
**Input:**
```
4 4 2 3
6 7 8 9
5 4 2 3
4 7 8 3
5 3 3 3
```

**Output:**
```
33
```

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

int main()
{
    fast;
    
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    ll arr[n + 1][m + 1] = {}, frq[n + 1][m + 1] = {};

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
            frq[i][j] = arr[i][j] + frq[i - 1][j] + frq[i][j - 1] - frq[i - 1][j - 1];
        }
    ll mx = LLONG_MIN;
    for (int i = 1; i <= n - x + 1; i++)
        for (int j = 1; j <= m - y + 1; j++)
        {
            int i2 = i + x - 1, j2 = j + y - 1;
            ll crnt = 0;
            crnt = frq[i2][j2] - frq[i - 1][j2] - frq[i2][j - 1] + frq[i - 1][j - 1];
            mx = max(mx, crnt);
        }
    cout << mx;
    return 0;
}
```
