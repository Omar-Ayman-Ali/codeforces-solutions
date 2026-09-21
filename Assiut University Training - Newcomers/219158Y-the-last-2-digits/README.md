# [219158Y] The last 2 digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386043429](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386043429)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# The last 2 digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y)

## Description

# Y. The last 2 digits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Y)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 4 numbers $A$, $B$, $C$ and $D$. Print the last 2 digits from their Multiplication.

## Input

Only one line containing four numbers $A$, $B$, $C$ and $D$ $(2 \le A, B, C, D \le 10^9)$.

## Output

Print the last 2 digits from their Multiplication.

## Examples

### Example 1
**Input:**
```
5 7 2 4
```

**Output:**
```
80
```

## Note

First Example :

the Multiplication of 4 numbers is 5 * 7 * 2 * 4 = 280 so the answer will be the last 2 digits which are 80.

Second Example :

the Multiplication of 4 numbers is 3 * 9 * 9 * 9 = 2187 so the answer will be the last 2 digits which are 87.

## Examples

### Example 1
**Input:**
```
5 7 2 4
```

**Output:**
```
80
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

    unsigned long long x, y, z, i, sum = 0;
    cin >> x >> y >> z >> i;
    sum = x % 100 * y % 100 * z % 100 * i % 100;
    if(sum < 10)
        cout << 0;
    cout << sum;
}
```
