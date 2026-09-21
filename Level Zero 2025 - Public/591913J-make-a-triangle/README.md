# [591913J] Make a triangle!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/J](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/J)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678399](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678399)
- **Rating:** 800
- **Tags:** brute force, geometry, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# J. Make a triangle!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/J](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/J)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

Masha has three sticks of length $a$, $b$ and $c$ centimeters respectively. In one minute Masha can pick one arbitrary stick and increase its length by one centimeter. She is not allowed to break sticks.

What is the minimum number of minutes she needs to spend increasing the stick's length in order to be able to assemble a triangle of positive area. Sticks should be used as triangle's sides (one stick for one side) and their endpoints should be located at triangle's vertices.

## Input

The only line contains tree integers $a$, $b$ and $c$ ($1 \leq a, b, c \leq 100$) — the lengths of sticks Masha possesses.

## Output

Print a single integer — the minimum number of minutes that Masha needs to spend in order to be able to make the triangle of positive area from her sticks.

## Examples

### Example 1
**Input:**
```
3 4 5
```

**Output:**
```
0
```

## Note

In the first example, Masha can make a triangle from the sticks without increasing the length of any of them.

In the second example, Masha can't make a triangle of positive area from the sticks she has at the beginning, but she can spend one minute to increase the length $2$ centimeter stick by one and after that form a triangle with sides $3$, $3$ and $5$ centimeters.

In the third example, Masha can take $33$ minutes to increase one of the $10$ centimeters sticks by $33$ centimeters, and after that take $48$ minutes to increase another $10$ centimeters stick by $48$ centimeters. This way she can form a triangle with lengths $43$, $58$ and $100$ centimeters in $81$ minutes. One can show that it is impossible to get a valid triangle faster.

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

    ll a, b, c;
    cin >> a >> b >> c;
    ll x, y, z;
    x = max({a, b, c});
    z = min({a, b, c});
    y = a + b + c - x - z;
    if (y + z > x)
        cout << 0;
    else
        cout << x - (z + y) + 1;

    return 0;
}
```
