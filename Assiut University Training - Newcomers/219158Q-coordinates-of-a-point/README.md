# [219158Q] Coordinates of a Point

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385987287](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385987287)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Coordinates of a Point

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q)

## Description

# Q. Coordinates of a Point

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Q)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers *X*, *Y* which donate coordinates of a point in 2D plan. Determine in which quarter does it belong.

Note:

- Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
- Print "Origem" If the point is at the origin.
- Print "Eixo X" If the point is over X axis.
- Print "Eixo Y" if the point is over Y axis.

![image](https://espresso.codeforces.com/f42fc67abbb87a5894503613bdf87d0706b18e88.png)

## Input

Only one line containing two numbers *X*, *Y* ( - 1000 ≤ *X*, *Y* ≤ 1000).

## Output

Print the answer to problem above.

## Examples

### Example 1
**Input:**
```
4.5 -2.2
```

**Output:**
```
Q4
```

## Examples

### Example 1
**Input:**
```
4.5 -2.2
```

**Output:**
```
Q4
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

    double x, y;
    cin >> x >> y;
    if (x > 0 && y > 0)
        cout << "Q1";
    else if (x < 0 && y > 0)
        cout << "Q2";
    else if (x < 0 && y < 0)
        cout << "Q3";
    else if (x > 0 && y < 0)
        cout << "Q4";
    else if (x == 0 && y == 0)
        cout << "Origem";
    else if (x == 0 && y != 0)
        cout << "Eixo Y";
    else if (x != 0 && y == 0)
        cout << "Eixo X";
}
```
