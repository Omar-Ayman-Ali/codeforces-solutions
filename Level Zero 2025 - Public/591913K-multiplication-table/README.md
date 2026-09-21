# [591913K] Multiplication Table

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/K](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/K)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678583](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678583)
- **Rating:** 1300
- **Tags:** implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# K. Multiplication Table

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/K](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/K)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Read an integer $N (2  \lt  N  \lt  1000)$. Print the multiplication table of $N$.

1 x N = N

2 x N = 2N

...

10 x N = 10N

## Input

The input is an integer $N (1  \lt  N  \lt  1000)$.

## Output

Print the multiplication table of $N$, like the following example.

## Examples

### Example 1
**Input:**
```
140
```

**Output:**
```
1 x 140 = 140
2 x 140 = 280
3 x 140 = 420
4 x 140 = 560
5 x 140 = 700
6 x 140 = 840
7 x 140 = 980
8 x 140 = 1120
9 x 140 = 1260
10 x 140 = 1400
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

    int n;
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << n * i << endl;
    }

    return 0;
}
```
