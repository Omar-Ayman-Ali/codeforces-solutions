# [2241A] Divide and Conquer

- **Problem Link:** [https://codeforces.com/contest/2241/problem/A](https://codeforces.com/contest/2241/problem/A)
- **Submission ID:** [https://codeforces.com/contest/2241/submission/380720263](https://codeforces.com/contest/2241/submission/380720263)
- **Rating:** 800
- **Tags:** greedy, math, number theory
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Divide and Conquer

- **Problem Link:** [https://codeforces.com/contest/2241/problem/A](https://codeforces.com/contest/2241/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given two positive integers $x$ and $y$.

You are allowed to perform the following operation any number of times (possibly zero):

- Choose any positive integer $z$ such that $z$ divides $x$;
- Set $x := \frac{x}{z}$.

Determine whether you can make $x$ exactly equal to $y$ using this operation.

## Input

The first line of the input contains a single integer $t$ ($1 \le t \le 10^4$) — the number of test cases. The description of each test case follows.

The only line of each test case contains two space-separated integers $x$ and $y$ ($1 \le x, y \le 100$).

## Output

For each test case, print "YES" if you can make $x$ exactly equal to $y$ and "NO" otherwise.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes" and "Yes" will be recognized as a positive response).

## Examples

### Example 1
**Input:**
```
3
12 2
6 7
99 79
```

**Output:**
```
YES
NO
NO
```

## Note

For the first test case,

- Choosing $z = 2$ makes $x = \frac{12}{2} = 6$
- Choosing $z = 3$ makes $x = \frac{6}{3} = 2$

Thus, we can make $x = y$. Hence, output YES.

For the second test case, it can be shown that it is impossible to make $x$ equal to $y$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int t;
    cin >> t;
    while(t--)
    {
        int x , y;
        cin >> x >> y;
        if(x % y == 0)
            cout << "YES"<<endl;
        else
            cout  << "NO" << endl;
            
    }

    return 0;
}
```
