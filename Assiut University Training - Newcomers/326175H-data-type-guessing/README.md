# [326175H] Data Type Guessing

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387683129](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387683129)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# Data Type Guessing

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H)

## Description

# H. Data Type Guessing

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given three numbers $n$, $k$ and $a$. Identify whether the data type of $\frac{n \times k}{a}$ is int, long long or double.

## Input

Only one line containing three numbers $n$, $k$ and $a$ ($1 \leq a,k,n \leq 2147483647$).

## Output

Print "int", "long long" or "double" (without quotes) as described in the statement.

## Examples

### Example 1
**Input:**
```
3 6 9
```

**Output:**
```
int
```

## Note

double is when a number has a floating-point.

int Range: [$-2147483648,2147483647$].

long long can hold values of a bigger range than that of int.

## Examples

### Example 1
**Input:**
```
3 6 9
```

**Output:**
```
int
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

    long long a, k, n, c;
    cin >> a >> k >> n;

    if (((a * k) % n) != 0)
        cout << "double";
    else if (((a * k) / n) > INT_MAX)
        cout << "long long";
    else
        cout << "int";
    return 0;
}
```
