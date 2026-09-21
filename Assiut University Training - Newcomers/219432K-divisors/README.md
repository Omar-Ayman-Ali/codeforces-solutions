# [219432K] Divisors

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721448](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721448)
- **Rating:** 2200
- **Tags:** brute force, dfs and similar, implementation, number theory
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# Divisors

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K)

## Description

# K. Divisors

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print all the divisors of *N* in ascending order.

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 104).

## Output

Print all positive divisors of *N*, one number per line.

## Examples

### Example 1
**Input:**
```
6
```

**Output:**
```
1
2
3
6
```

## Note

Divisor of Number is  A number that divides the integer exactly (no remainder).

In other words the division works perfectly with no fractions or remainders involved.

Examples:

- 3 is a divisor of 12, because 12 ÷ 3 = 4 exactly
- 4 is a divisor of 12, because 12 ÷ 4 = 3 exactly.
- 5 is not a divisor of 12, because 12 ÷ 5 = 2 with a remainder of 2.

a divisor is also a factor of the original integer.

## Examples

### Example 1
**Input:**
```
6
```

**Output:**
```
1
2
3
6
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
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << endl;
    }

}
```
