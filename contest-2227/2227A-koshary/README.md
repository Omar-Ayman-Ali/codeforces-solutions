# [2227A] Koshary

- **Problem Link:** [https://codeforces.com/contest/2227/problem/A](https://codeforces.com/contest/2227/problem/A)
- **Submission ID:** [https://codeforces.com/contest/2227/submission/373154221](https://codeforces.com/contest/2227/submission/373154221)
- **Rating:** 800
- **Tags:** implementation, math
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Koshary

- **Problem Link:** [https://codeforces.com/contest/2227/problem/A](https://codeforces.com/contest/2227/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Yousef is at the coordinates $(0, 0)$ and wants to reach a plate of Koshary at $(x, y)$.

To get there, Yousef takes long steps. From any point $(a, b)$, a long step moves him to:

- $(a + 2, b)$ or $(a, b + 2)$

However, Yousef is allowed to take at most one short step during his entire journey. A short step moves him to:

- $(a + 1, b)$ or $(a, b + 1)$

Can Yousef reach the exact coordinates $(x, y)$ of the Koshary plate?

## Input

The first line contains an integer $t$ ($1 \le t \le 100$) — the number of test cases.

Each test case contains two integers $x$ and $y$ ($1 \le x, y \le 10$) — the coordinates of the Koshary plate.

## Output

For each test case, output "YES" if Yousef can reach the Koshary plate and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

## Examples

### Example 1
**Input:**
```
6
1 1
1 2
4 6
5 9
7 2
10 10
```

**Output:**
```
NO
YES
YES
NO
YES
YES
```

## Note

In the first test case, it is impossible to reach $(1, 1)$ using the mentioned steps.

In the second test case, an optimal sequence of steps would be: $$$$(0, 0) \xrightarrow{\texttt{long}} (0, 2) \xrightarrow{\texttt{short}} (1, 2)$$

In the third test case, an optimal sequence of steps would be: $$(0, 0) \xrightarrow{\texttt{long}} (0, 2) \xrightarrow{\texttt{long}} (2, 2) \xrightarrow{\texttt{long}} (2, 4) \xrightarrow{\texttt{long}} (4, 4) \xrightarrow{\texttt{long}} (4, 6)$$$$

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

    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
            cin >> a >> b;
            if(a % 2 == 0 or b % 2 == 0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
    }

    return 0;
}
```
