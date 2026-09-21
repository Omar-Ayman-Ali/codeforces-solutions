# [643344N] Again Twenty Five!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/N](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/N)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355225765](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355225765)
- **Rating:** 800
- **Tags:** number theory
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# N. Again Twenty Five!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/N](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/N)
- **Time Limit:** 0.5 seconds
- **Memory Limit:** 64 megabytes

## Description

The HR manager was disappointed again. The last applicant failed the interview the same way as 24 previous ones. "Do I give such a hard task?" — the HR manager thought. "Just raise number 5 to the power of *n* and get last two digits of the number. Yes, of course, *n* can be rather big, and one cannot find the power using a calculator, but we need people who are able to think, not just follow the instructions."

Could you pass the interview in the machine vision company in IT City?

## Input

The only line of the input contains a single integer *n* (2 ≤ *n* ≤ 2·1018) — the power in which you need to raise number 5.

## Output

Output the last two digits of 5*n* without spaces between them.

## Examples

### Example 1
**Input:**
```
2
```

**Output:**
```
25
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

#define int unsigned long long

signed main()
{
    int n;
    cin >> n;
    cout << 25;
}
```
