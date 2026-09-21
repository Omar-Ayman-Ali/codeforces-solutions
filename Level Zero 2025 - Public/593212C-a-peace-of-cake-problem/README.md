# [593212C] A Peace Of Cake Problem

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764459](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764459)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# C. A Peace Of Cake Problem

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/C)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Adham has $a$ candies and his friend, Samer, has $b$ candies, so Samer asked Adham to tell him the value of $a − b$ . However, Adhem will tell him the value of $a − b$ if the value is $\ge 0$ ; otherwise, he will lie and say 0.

Since it was a hard task for Adham, he's asking for your help.

## Input

The input is two integers a and b. $(1 \leq a , b \leq 100)$.

## Output

Print a single line contains the value of $a − b$ if positive , otherwise print 0.

## Examples

### Example 1
**Input:**
```
5 2
```

**Output:**
```
3
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

    int a, b;
    cin >> a >> b;
    if (a - b <= 0)
        cout << 0;
    else
        cout << a - b;

    return 0;
}
```
