# [650565A] 1st Digit of the Factorial

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/357012864](https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/357012864)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. 1st Digit of the Factorial

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/A)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

A factorial of a number n (denoted as n!) is equal to: n  ×  (n – 1)  ×  (n – 2)  ×  (n – 3)  ×  ...  ×  2  ×  1. Here’s a very simple problem you’re given a number n and you’re asked to find out the units digit of n!. For example, if n = 4, then n! = 4  ×  3  ×  2  ×  1 = 24 the units digit of 24 is 4 (the rightmost digit of 24).

## Input

The input consists of one line containing an integer n (0 ≤ *n* ≤ 109) the number of which you’re required to find the units digit of its factorial.

## Output

Print one line containing the answer.

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
4
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
    int n, f1;
    cin >> n;
    if (n == 1 || n == 0)
        cout << 1;
    else if (n == 2)
        cout << 2;
    else if (n == 3)
        cout << 6;
    else if (n == 4)
        cout << 4;
    else
        cout << 0;
}
```
