# [591913E] Difference

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677328](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677328)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Difference

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Read four integer values named $A$, $B$, $C$ and $D$. Calculate and print the difference of product $A$ and $B$ by the product of $C$ and $D$ $(A * B - C * D)$.

## Input

The input file contains 4 integer values. $(-10^8 \le A,B,C,D \le 10^8)$

## Output

Print DIFERENCA (DIFFERENCE in Portuguese) with all the capital letters, according to the following example, with a blank space before and after the equal signal.

## Examples

### Example 1
**Input:**
```
5
6
7
8
```

**Output:**
```
DIFERENCA = -26
```

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

    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = "<<(a*b)-(c*d);

    return 0;
}
```
