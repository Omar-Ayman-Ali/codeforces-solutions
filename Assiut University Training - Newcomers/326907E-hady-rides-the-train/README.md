# [326907E] Hady Rides the Train

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390761260](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390761260)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Hady Rides the Train

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E)

## Description

# E. Hady Rides the Train

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/E)
- **Time Limit:** 0.5 seconds
- **Memory Limit:** 256 megabytes

## Description

Hady wants to ride a train. He knows his seat number, but he doesn't know the corresponding row or column number of his seat. However, he knows that each row consists of exactly $4$ seats. The train seats are numbered from zero as shown in the figure:

![image](https://espresso.codeforces.com/34307e43509345343303a7ceec9f51cb6e0ad606.png)

Given the seat number, can you find the corresponding row and column numbers of the seat?

## Input

Only one line containing $id$ ($ 0 \leq id \leq 10 ^ {18}$) – the seat number.

## Output

The row and column numbers of the seat.

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
1 2
```

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
1 2
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

    ll seet;
    cin >> seet;
    ll row = seet / 4, col;
    if (row % 2 == 0)
        col = seet % 4;
    else
        col = abs(3 - (seet % 4));
    cout << row << ' ' << col << endl;

    return 0;
}
```
