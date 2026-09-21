# [2044B] Normal Problem

- **Problem Link:** [https://codeforces.com/contest/2044/problem/B](https://codeforces.com/contest/2044/problem/B)
- **Submission ID:** [https://codeforces.com/contest/2044/submission/389369203](https://codeforces.com/contest/2044/submission/389369203)
- **Rating:** 800
- **Tags:** implementation, strings
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Normal Problem

- **Problem Link:** [https://codeforces.com/contest/2044/problem/B](https://codeforces.com/contest/2044/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A string consisting of only characters 'p', 'q', and 'w' is painted on a glass window of a store. Ship walks past the store, standing directly in front of the glass window, and observes string $a$. Ship then heads inside the store, looks directly at the same glass window, and observes string $b$.

Ship gives you string $a$. Your job is to find and output $b$.

## Input

The first line contains an integer $t$ ($1 \leq t \leq 100$) — the number of test cases.

The only line of each test case contains a string $a$ ($1 \leq |a| \leq 100$) — the string Ship observes from outside the store. It is guaranteed that $a$ only contains characters 'p', 'q', and 'w'.

## Output

For each test case, output string $b$, the string Ship observes from inside the store, on a new line.

## Examples

### Example 1
**Input:**
```
5
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq
```

**Output:**
```
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq
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

    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == 'q')
                x[i] = 'p';
            else if (x[i] == 'p')
                x[i] = 'q';
        }
        cout << x << endl;
    }

    return 0;
}
```
