# [326907A] Timon and Pumbaa

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390333519](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390333519)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Timon and Pumbaa

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A)

## Description

# A. Timon and Pumbaa

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Timon has $a$ candies and his friend, Pumbaa, has $b$ candies, so Pumbaa asked Timon to tell him the value of $a−b$. However, Timon will tell him the value of $a−b$ if the value is $\geq 0$; otherwise, he will lie and say $0$. Since it was a hard task for Timon, he's asking for your help.

Given two numbers $a$ and $b$, find the answer.

## Input

Only one line containing two numbers $a,b$ ($1 \leq a,b \leq 10^9$).

## Output

Print the answer as specified in the statement.

## Examples

### Example 1
**Input:**
```
9 1
```

**Output:**
```
8
```

## Examples

### Example 1
**Input:**
```
9 1
```

**Output:**
```
8
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
    cin >> a >> b;
    if (a - b >= 0)
        cout << a - b;
    else
        cout << 0;

    return 0;
}
```
