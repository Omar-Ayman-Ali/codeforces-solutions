# [219432M] Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387881985](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387881985)
- **Rating:** 1800
- **Tags:** dp, greedy
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)

## Description

# M. Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers $A$ and $B$. Print all lucky numbers between $A$ and $B$ inclusive.

Note:

The Lucky number is any positive number that its decimal representation contains only 4 and 7.

For example: numbers 4, 7, 47 and 744 are lucky and numbers 5, 17 and 174 are not.

## Input

Only one line containing two numbers $A$ and $B$ $(1 \le A \le B \le 10^5)$.

## Output

Print all lucky numbers between $A$ and $B$ inclusive separated by a space. If there is  no lucky number print -1.

## Examples

### Example 1
**Input:**
```
4 20
```

**Output:**
```
4 7
```

## Examples

### Example 1
**Input:**
```
4 20
```

**Output:**
```
4 7
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

    int a, b;
    bool x = false;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int m = i;
        bool checked = true;
        while (m > 0)
        {
            if (m % 10 != 4 && m % 10 != 7)
            {
                checked = false;
                break;
            }
            m /= 10;
        }
        if (checked)
        {
            cout << i << ' ';
            x = true;
        }
    }
    if (!x)
        cout << -1;
}
```
