# [219432G] Factorial

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387691079](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387691079)
- **Rating:** 1300
- **Tags:** *special, implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Factorial

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G)

## Description

# G. Factorial

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

Given a number *N*. Print the factorial of number *N*.

## Input

First line contains a number *T* (1 ≤ *T* ≤ 15) number of test cases.

Next T lines will contain a number *N* (0 ≤ *N* ≤ 20)

## Output

For each test case print a single line contains the factorial of *N*.

## Examples

### Example 1
**Input:**
```
2
5
3
```

**Output:**
```
120
6
```

## Note

Factorial, in mathematics, the product of all positive integers less than or equal to a given positive integer and denoted by that integer and an exclamation point.

Thus, factorial seven is written 7!, meaning 1 * 2 * 3 * 4 * 5 * 6 * 7 = 5040 .

Factorial zero is defined as equal to 1.

In first test case for N = 5 , 5! = 1 * 2 * 3 * 4 * 5 = 120 so the answer is 120.

In Second test case for N = 3 , 3! = 1 * 2 * 3 = 6 so the answer is 6.

## Examples

### Example 1
**Input:**
```
2
5
3
```

**Output:**
```
120
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

    long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, x = 1;
        cin >> n;
        if (n == 0)
            {
                cout << 1 << endl;
                continue;
            }
        else
            for (int i = 1; i <= n; i++)
                x *= i;

        cout << x << endl;
    }

    return 0;
}
```
