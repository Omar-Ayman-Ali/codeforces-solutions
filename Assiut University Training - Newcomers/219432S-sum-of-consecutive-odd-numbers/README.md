# [219432S] Sum of Consecutive Odd Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387892276](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387892276)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Sum of Consecutive Odd Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S)

## Description

# S. Sum of Consecutive Odd Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers *X* and *Y*. Print the sum of all odd numbers between them, excluding *X* and *Y*.

## Input

First line contains a number *T* (1 ≤ *T* ≤ 10) number of test cases.

Next T lines will contain two numbers *X* and *Y* (0 ≤ *X*, *Y* ≤ 104).

## Output

Print the sum of all odd numbers between *X* and *Y* (excluding *X* and *Y*).

## Examples

### Example 1
**Input:**
```
3
5 6
10 4
4 9
```

**Output:**
```
0
21
12
```

## Examples

### Example 1
**Input:**
```
3
5 6
10 4
4 9
```

**Output:**
```
0
21
12
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

    int x, y, t;

    cin >> t;
    while (t--)
    {
        int total = 0;
        cin >> x >> y;
        for (int i = min(x,y) +1; i < max(x,y); i++)
            if (i % 2 != 0)
                total += i;
        cout << total << endl;
    }
}
```
