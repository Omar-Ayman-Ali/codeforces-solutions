# [326175E] Interval Sweep

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387678692](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387678692)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Interval Sweep

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E)

## Description

# E. Interval Sweep

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers $a$ and $b$. You have to answer with "YES" if there is a non-empty interval consisting of numbers from $l$ to $r$ ($l, l + 1, l + 2,...,r$) with a odd numbers and b even numbers, or "NO" otherwise.

## Input

Only one line containing two numbers $a$ and $b$ ($0 \leq a, b \leq 100$)the number of odd numbers and the number of even numbers in the interval respectively.

## Output

Print "YES" or "NO" as described in the statement.

## Examples

### Example 1
**Input:**
```
2 3
```

**Output:**
```
YES
```

## Note

Example 1 :

some valid intervales that contain $2$ odd numbers and $3$ even numbers can be

$l = 6 , r = 10 $ contains numbers $( 6,7,8,9,10)$.

$l = 14 , r = 18 $ contains numbers $(14,15,16,17,18)$.

## Examples

### Example 1
**Input:**
```
2 3
```

**Output:**
```
YES
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

    int x, y;
    cin >> x >> y;
    if (x == 0 and y == 0)
        cout << "NO";
    else if (x - y == 1 or y - x == 1 or x == y)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```
