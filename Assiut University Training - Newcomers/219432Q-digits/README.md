# [219432Q] Digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387884771](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387884771)
- **Rating:** 2500
- **Tags:** brute force, implementation, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)

## Description

# Q. Digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print the digits of that number from right to left separated by space.

## Input

First line contains a number *T* (1 ≤ *T* ≤ 10) number of test cases.

Next *T* lines will contain a number *N* (0 ≤ *N* ≤ 109)

## Output

For each test case print a single line contains the digits of the number separated by space.

## Examples

### Example 1
**Input:**
```
4
121
39
123456
1200
```

**Output:**
```
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1
```

## Examples

### Example 1
**Input:**
```
4
121
39
123456
1200
```

**Output:**
```
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1
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
typedef vector<long long> vi;

int main()
{
    fast;

    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 0)
            cout << 0 << ' ';
        long long x = n;
        while (x > 0)
        {
            long long m = x % 10;
            cout << m << ' ';
            x /= 10;
        }
        cout << endl;
    }
}
```
