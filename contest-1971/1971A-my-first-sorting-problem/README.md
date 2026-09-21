# [1971A] My First Sorting Problem

- **Problem Link:** [https://codeforces.com/contest/1971/problem/A](https://codeforces.com/contest/1971/problem/A)
- **Submission ID:** [https://codeforces.com/contest/1971/submission/389369107](https://codeforces.com/contest/1971/submission/389369107)
- **Rating:** 800
- **Tags:** implementation, sortings
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. My First Sorting Problem

- **Problem Link:** [https://codeforces.com/contest/1971/problem/A](https://codeforces.com/contest/1971/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given two integers $x$ and $y$.

Output two integers: the minimum of $x$ and $y$, followed by the maximum of $x$ and $y$.

## Input

The first line contains a single integer $t$ ($1 \leq t \leq 100$) — the number of test cases.

The only line of each test case contains two space-separated integers $x$ and $y$ ($0 \leq x, y \leq 9$).

## Output

For each test case, output two integers: the minimum of $x$ and $y$, followed by the maximum of $x$ and $y$.

## Examples

### Example 1
**Input:**
```
10
1 9
8 4
1 4
3 4
2 0
2 4
6 9
3 3
0 0
9 9
```

**Output:**
```
1 9
4 8
1 4
3 4
0 2
2 4
6 9
3 3
0 0
9 9
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
void ans()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        cout << min(x, y) << ' ' << max(x, y) << endl;
    }
}

int main()
{
    fast;
    ans();
    return 0;
}
```
