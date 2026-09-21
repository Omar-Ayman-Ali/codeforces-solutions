# [593212E] Maaaaaaaaaaaaaaaaaath

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388766276](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388766276)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Maaaaaaaaaaaaaaaaaath

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/E)
- **Time Limit:** 0.5 s
- **Memory Limit:** 256 MB

## Description

Elgoker loves the summations too much, so he will give you a number $n$.

Lets define: $S1$ = $1^2$ + $2^2$ + $3^2$ + $4^2$ +......+ $n^2$ , $S2$ = $(1 + 2 + 3 + 4 + ... + n) ^ 2$.

You should calculate $F(n)$ = $S2$ − $S1$.

## Input

The first line contains an integer $t$ $(1 \leq t\leq 10 ^ 6)$ , the number of test cases.

Each test case has only one number $n$ $(1 \leq n \leq 10^4)$.

## Output

Output one integer $F(n)$ for each test case.

## Examples

### Example 1
**Input:**
```
2
3
5
```

**Output:**
```
22
170
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, s1 = 0, s2;
        cin >> a;
        s2 = (a * (a + 1) / 2) * (a * (a + 1) / 2);
        s1 = ((a * (a + 1) * (2 * a + 1)) / 6);
        cout
            << s2 - s1 << endl;
    }

    return 0;
}
```
