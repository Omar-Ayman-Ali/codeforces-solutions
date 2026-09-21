# [219158W] Mathematical Expression

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386145554](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386145554)
- **Rating:** 2700
- **Tags:** constructive algorithms, dp, greedy
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Mathematical Expression

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W)

## Description

# W. Mathematical Expression

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 MB

## Description

Given a mathematical expression. The expression will be one of the following expressions:

*A* + *B* = *C*, *A* - *B* = *C* and *A* * *B* = *C*

where *A*, *B*, *C* are three numbers, *S* is the sign between *A* and *B*, and *Q* the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

## Input

Only one line containing the expression: *A*, *S*, *B*, *Q*, *C* respectively (0 ≤ *A*, *B* ≤ 100,  - 105 ≤ *C* ≤ 105) and *S* can be ('+', '-', '*') without the quotation.

## Output

Output either "Yes" (without the quotation) or the right answer depending on the statement.

## Examples

### Example 1
**Input:**
```
5 + 10 = 15
```

**Output:**
```
Yes
```

## Examples

### Example 1
**Input:**
```
5 + 10 = 15
```

**Output:**
```
Yes
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

    long long x, y, z, o;
    char s, q;
    bool cas = false;
    cin >> x >> s >> y >> q >> z;

    if (s == '+')
        o = 1;
    else if (s == '-')
        o = 2;
    else if (s == '*')
        o = 3;
    if (s == '+' && (x + y) == z)
        cout << "Yes";

    else if (s == '*' && (x * y) == z)
        cout << "Yes";
    else if (s == '-' && (x - y) == z)
        cout << "Yes";
    else if (o == 1)
        cout << x + y;
    else if (o == 2)
        cout << x - y;
    else
        cout << x * y;
}
```
