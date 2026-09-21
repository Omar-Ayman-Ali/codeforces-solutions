# [219158O] Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385984419](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385984419)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O)

## Description

# O. Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a mathematical expression. The expression will be one of the following expressions: $A+B$, $A-B$, $A*B$ and $A/B$.

Print the result of the mathematical expression.

## Input

Only one line contains $A, S$ and $B$ $(1 \leq A, B \leq 10^4)$, $S$ is either $(+,-,* , /)$.

## Output

Print the result of the mathematical expression.

## Examples

### Example 1
**Input:**
```
7+54
```

**Output:**
```
61
```

## Note

For the dividing operation you should print the division without any fractions.

## Examples

### Example 1
**Input:**
```
7+54
```

**Output:**
```
61
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

    char x;
    int c, z;
    cin >> c >> x >> z;

    if (x == '*')
        cout << c * z;
    else if (x == '+')
        cout << c + z;
    else if (x == '-')
        cout << c - z;
    else
        cout << c / z;

    return 0;
}
```
