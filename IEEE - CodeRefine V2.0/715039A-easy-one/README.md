# [715039A] Easy One

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/A](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/A)
- **Submission ID:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390182007](https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390182007)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Easy One

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/A](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A computational geometry system is responsible for generating and validating polygonal structures on a two-dimensional integer lattice.

During the construction process, two consecutive edges of a structure have integer lengths (A) and (B). The verification module combines these measurements into a single value:

[ S = A + B ]

The parity of (S) is used as a validation property for the constructed structure. A structure is classified according to the following rule:

If (S) is even, the structure passes the even-parity validation. If (S) is odd, the structure passes the odd-parity validation.

The validation module must determine the correct classification for every pair of edge lengths.

Given two integers (A) and (B), Determine whether their sum is even or odd.

## Input

One line contains two numbers $A$ and $B$ ($0 \le A, B \le 10^{20}$).

## Output

Print "Even." if their summation is even, else print "Odd." without quotes.

## Examples

### Example 1
**Input:**
```
1 1
```

**Output:**
```
Even.
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

    unsigned long long a, b;
    cin >> a >> b;

    if ((a + b) % 2 == 0)
        cout << "Even.";
    else
        cout << "Odd.";

    return 0;
}
```
