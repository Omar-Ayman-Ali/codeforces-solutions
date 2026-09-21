# [326907C] Finding Minimums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390759227](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390759227)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Finding Minimums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C)

## Description

# C. Finding Minimums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given $N$ numbers, and you should divide them into consecutive groups of size $K$, then print the minimum among each group. If the last group is of size $ \lt  K$, print the minimum number found just after the last number received.

For more explanation, see the notes.

## Input

First line contains two numbers $N, K$ ($1 \leq K \leq N \leq 10^5$) – the number of values, and the range length after which you should print the minimum.

Second line contains $N$ numbers ($-10^9 \leq x \leq 10^9$).

## Output

Print the answer in a single line.

## Examples

### Example 1
**Input:**
```
8 3
4 -1 2 3 5 0 2 7
```

**Output:**
```
-1 0 2
```

## Note

In the first test case:

1. The minimum number among $[4,-1,2]$ is $-1$.
2. The minimum number among $[3,5,0]$ is $0$.
3. The minimum number among $[2,7]$ is $2$.
 

![image](https://espresso.codeforces.com/ad18963825f21d819df74917bf1960b48d2c57de.png)

In the second test case:

1. The minimum number among $[4,-1,2,3]$ is $-1$.
2. The minimum number among $[5,0,2,7]$ is $0$.

## Examples

### Example 1
**Input:**
```
8 3
4 -1 2 3 5 0 2 7
```

**Output:**
```
-1 0 2
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

    int n, k, mn, x, cntr = 0;
    bool z = false;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (!z)
        {
            z = true;
            mn = x;
        }
        else
        {
            mn = min(mn, x);
        }
        cntr++;
        if (cntr == k || i == n - 1)
        {
            cout << mn << ' ';
            cntr = 0;
            z = false;
        }
    }
}
```
