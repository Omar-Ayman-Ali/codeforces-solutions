# [326175I] Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387677740](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387677740)
- **Rating:** 1800
- **Tags:** dp, greedy
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I)

## Description

# I. Lucky Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

## Input

Only one line containing a single number $N$ $(10 \leq N \leq 99)$.

## Output

Print "YES" if the given number is lucky, otherwise print "NO".

## Examples

### Example 1
**Input:**
```
39
```

**Output:**
```
YES
```

## Examples

### Example 1
**Input:**
```
39
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

    int x;
    cin >> x;
    int y = x % 10;
    x /= 10;
    int z = x % 10;
    if (y == 0)
        cout << "YES";
    else if (z % y == 0 or y % z == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```
