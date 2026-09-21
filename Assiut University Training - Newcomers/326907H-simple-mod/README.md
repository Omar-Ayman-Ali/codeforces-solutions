# [326907H] Simple Mod

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390860935](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390860935)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# Simple Mod

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H)

## Description

# H. Simple Mod

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Hady has a positive number $N$ and a simple equation:

$(X^2+Y^2)$ MOD $N=0$

Your task is to find any values for $X, Y$ that satisfy the equation, such that $X$ and $Y$ are non-negative integers.

## Input

Only one integer $N$ ($1 \leq N \leq 10^{100}$).

## Output

If you can find any two non-negative integers such that $(X, Y \leq 10^9$), print them. Otherwise, print "No solutions".

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
4 3
```

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
4 3
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

    int n;
    cin >> n;
    cout << "0 0";

    return 0;
}
```
