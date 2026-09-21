# [604006G] One and Two

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/G)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389679982](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389679982)
- **Rating:** 800
- **Tags:** brute force, implementation, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. One and Two

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/G)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given a sequence $a_1, a_2, \ldots, a_n$. Each element of $a$ is $1$ or $2$.

Find out if an integer $k$ exists so that the following conditions are met.

- $1 \leq k \leq n-1$, and
- $a_1 \cdot a_2 \cdot \ldots \cdot a_k = a_{k+1} \cdot a_{k+2} \cdot \ldots \cdot a_n$.

If there exist multiple $k$ that satisfy the given condition, print the smallest.

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). Description of the test cases follows.

The first line of each test case contains one integer $n$ ($2 \leq n \leq 1000$).

The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \leq a_i \leq 2$).

## Output

For each test case, if there is no such $k$, print $-1$.

Otherwise, print the smallest possible $k$.

## Examples

### Example 1
**Input:**
```
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
```

**Output:**
```
2
-1
1
```

## Note

For the first test case, $k=2$ satisfies the condition since $a_1 \cdot a_2 = a_3 \cdot a_4 \cdot a_5 \cdot a_6 = 4$. $k=3$ also satisfies the given condition, but the smallest should be printed.

For the second test case, there is no $k$ that satisfies $a_1 \cdot a_2 \cdot \ldots \cdot a_k = a_{k+1} \cdot a_{k+2} \cdot \ldots \cdot a_n$

For the third test case, $k=1$, $2$, and $3$ satisfy the given condition, so the answer is $1$.

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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cntr = 0, tcntr = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                tcntr++;
            }
        }
        if (tcntr % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        tcntr /= 2;
        for(int i=0 ;i < n; i++)
        {
            if(arr[i] == 2)
                cntr++;
            if(cntr == tcntr )
                {
                    cout << i+1 << endl;
                    break;
                }
        }
    }

    return 0;
}
```
