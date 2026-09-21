# [591913S] Tricky Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/S](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/S)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388684207](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388684207)
- **Rating:** 900
- **Tags:** math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# S. Tricky Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/S](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/S)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

In this problem you are to calculate the sum of all integers from 1 to *n*, but you should take all powers of two with minus in the sum.

For example, for *n* = 4 the sum is equal to  - 1 - 2 + 3 - 4 =  - 4, because 1, 2 and 4 are 20, 21 and 22 respectively.

Calculate the answer for *t* values of *n*.

## Input

The first line of the input contains a single integer *t* (1 ≤ *t* ≤ 100) — the number of values of *n* to be processed.

Each of next *t* lines contains a single integer *n* (1 ≤ *n* ≤ 109).

## Output

Print the requested sum for each of *t* integers *n* given in the input.

## Examples

### Example 1
**Input:**
```
2
4
1000000000
```

**Output:**
```
-4
499999998352516354
```

## Note

The answer for the first sample is explained in the statement.

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

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll total_sum = n *(n + 1) / 2;
        ll pSum = 0;
        for (ll i = 1; i <= n; i *= 2)
            pSum += i;
        ll ans = total_sum - 2*pSum;
        cout << ans << endl;
    }
}
```
