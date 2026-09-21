# [219432J] Primes from 1 to n

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721261](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721261)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Primes from 1 to n

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J)

## Description

# J. Primes from 1 to n

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J)
- **Time Limit:** 3 seconds
- **Memory Limit:** 256 megabytes

## Description

Given a number $N$. Print all prime numbers between 1 and $N$ inclusive.

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are

![image](https://espresso.codeforces.com/841e6480168f69cb952ba01bf514dc3c41c3a6de.png)

## Input

Only one line containing a number $N$ $(2 \le N \le 10^3)$.

## Output

Print all prime numbers between 1 and $N$ (inclusive) separated by a space.

## Examples

### Example 1
**Input:**
```
10
```

**Output:**
```
2 3 5 7
```

## Examples

### Example 1
**Input:**
```
10
```

**Output:**
```
2 3 5 7
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

    for (int j = 2; j <= n; j++)
    {
        bool x = true;
        for (int i = 2; i*i <= j; i++)
            if (j % i == 0)
            {
                x = false;
                break;
            }
        if (x)
            cout << j << ' ';
    }
}
```
