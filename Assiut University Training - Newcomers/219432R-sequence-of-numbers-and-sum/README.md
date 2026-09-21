# [219432R] Sequence of Numbers and Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387886272](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387886272)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Sequence of Numbers and Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R)

## Description

# R. Sequence of Numbers and Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given multiple lines each line contains two numbers *N* and *M*.

For each line print a single line contains:

- The numbers between *N* and *M* inclusive separated by single space.
- The message " sum =".
- The summation of all numbers between *N* and *M* inclusive.

Note: The program should be *TERMINATED* as soon as any of these two numbers is less than or equal to zero and don't print any thing.

For more clarification see the examples below.

## Input

The input contains multiple line.

Each line contains two numbers *N* and *M* (-100 ≤ *N*, *M* ≤ 100).

It's guaranteed that the last line of the input will contain a number that is less than or equal to zero.

## Output

For each line print the answer according to the required above in a single line.

## Examples

### Example 1
**Input:**
```
5 2
5 7
5 -1
```

**Output:**
```
2 3 4 5 sum =14
5 6 7 sum =18
```

## Note

*M* may be greater than *N* and Vice Versa.

## Examples

### Example 1
**Input:**
```
5 2
5 7
5 -1
```

**Output:**
```
2 3 4 5 sum =14
5 6 7 sum =18
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

    int n, m, total, Min, Max;
    int c = 3;
    while (cin >> n)
    {
        total = 0;
        cin >> m;
        Min = min(n, m);
        Max = max(n, m);
        if (Min <= 0 or Max <= 0)
            break;

        for (int i = Min; i <= Max; i++)
        {
            cout << i << ' ';
            total += i;
        }
        cout << "sum =" << total << endl;
    }
}
```
