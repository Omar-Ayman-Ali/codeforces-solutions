# [326907F] Break Number

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390762882](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390762882)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Break Number

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F)

## Description

# F. Break Number

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/F)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Let's define $f(x)$ as the number of times at which the integer $x$ can be divided by $2$.

You are given $N$ numbers, and you should print the maximum $f(x)$ among all these numbers.

## Input

The first line contains one number $N$ ($1 \leq N \leq 10^5$).

The second line contains $N$ space-separated numbers where each number is between $1$ and $10^{18}$ (inclusive).

## Output

Print the maximum $f(x)$ among all numbers.

## Examples

### Example 1
**Input:**
```
3
18 24 7
```

**Output:**
```
3
```

## Note

In the first test case:

1. $f(18)$ is equal to $1$; because we can divide $18$ by $2$ resulting in $9$, but we cannot divide $9$ by $2$ ($9$ is not divisible by $2)$.
2. $f(24)$ is equal to $3$; because we can divide $24$ by $2$ resulting in $12$; again we can divide $12$ by $2$ ($12$ is divisible by $2$) resulting in $6$; again we can divide $6$ by $2$ ($6$ is divisible by $2$) resulting in $3$, but we cannot divide $3$ by $2$ ($3$ is not divisible by $2$); so we could divide $24$ three times.
3. $f(7)$ is equal to $0$; because we cannot divide $7$ by $2$.

## Examples

### Example 1
**Input:**
```
3
18 24 7
```

**Output:**
```
3
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

    ll n;
    cin >> n;
    ll result = 0;
    for (int i = 0; i < n; i++)
    {
        ll value, cntr = 0;

        cin >> value;
        while (value > 0)
        {
            if (value % 2 == 0)
            {
                value /= 2;
                cntr++;
            }
            else
            {
                break;
            }
        }
        if (cntr > result)
        {
            result = cntr;
            cntr = 0;
        }
    }
    cout << result;
}
```
