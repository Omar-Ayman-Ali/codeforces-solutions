# [643344P] GG EZ

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/P)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355227921](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355227921)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# P. GG EZ

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/P)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Peter is given an integer $n$. He wants to know how many ordered pairs of positive integers $(a,b)$ there are such that $a=n-b$. Since Peter is not very good at math, please help him!

## Input

The first and only line contains an integer $n$ ($2 \leq n \leq 10^{18}$).

## Output

A single line — the number of ordered pairs $(a, b)$.

## Examples

### Example 1
**Input:**
```
2
```

**Output:**
```
1
```

## Note

In the first test case, the only ordered pair that works is $(a,b)=(1,1)$.

In the second test case, the three ordered pairs of $(a,b)$ that work are $(3,1), (2,2), (1,3)$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int unsigned long long

signed main ()
{
    int n;
    cin >>n;
    cout << n-1;
}
```
