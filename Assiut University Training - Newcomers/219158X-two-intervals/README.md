# [219158X] Two intervals

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386520107](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386520107)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Two intervals

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X)

## Description

# X. Two intervals

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

## Input

Only one line contains two intervals $[l_1,r_1]$, $[l_2,r_2]$ where $( 1 \leq l_1, l_2,r_1,r_2 \leq 10^9 )$, $(l_1 \leq r_1 , l_2 \leq r_2)$.

It's guaranteed that $l_1 \le r_1$ and $l_2 \le r_2$.

## Output

If there is an intersection between these 2 intervals print its boundaries , otherwise print -1.

## Examples

### Example 1
**Input:**
```
1 15 5 27
```

**Output:**
```
5 15
```

## Note

First Example :

![image](https://espresso.codeforces.com/4940bef560eed6c6f0556c60e17e1d77ba32cc96.png)

Second Example :

![image](https://espresso.codeforces.com/75251160842c2780d08d9273670b4d69ae36af6c.png)

## Examples

### Example 1
**Input:**
```
1 15 5 27
```

**Output:**
```
5 15
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

    long l1, l2, r1, r2;

    cin >> l1 >> r1 >> l2 >> r2;
    if (max(l1, l2) > min(r1, r2))
        cout << -1;
    else
        cout << max(l1, l2) << " " << min(r1, r2);
}
```
