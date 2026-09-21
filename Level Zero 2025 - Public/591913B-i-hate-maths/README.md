# [591913B] I Hate Maths

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/B)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388675804](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388675804)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. I Hate Maths

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Sherbiny is dumb, that's why he hates maths so much.

One day Samer challenged Sherbiny to solve the following problem:

Given two numbers $a$ and $b$ Sherbiny should calculate the product of the $2$ numbers $a * b$.

Can you help Sherbiny solve this problem before he loses his last brain cell?

## Input

The first and only line of the input contains 2 numbers $a$, $b$ $(1 \le a, b \le 10^9)$

## Output

You should output one integer $a * b$.

## Examples

### Example 1
**Input:**
```
4 7
```

**Output:**
```
28
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

    ll x, y;
    cin >> x >> y;
    cout << x * y;

    return 0;
}
```
