# [645509E] Habduction

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/355230753](https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/355230753)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Habduction

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Kuroudo$ is known for his ability to prove his solutions very well. Unfortunately for him this equation is proof-proof (unprovable). So he resorted to using his secret proof technique... proof by habduction.

Given a positive integer $k$. Your task is to find two positive integers, $x$ and $y$, that satisfy the following equation:

$$$$ \frac{x}{y} + x^{-1} = \frac{kx}{y} $$

If there are many possible answers, you can print any one of them. The numbers $x$ and $y$ you find must be between $1$ and $10^9$$$, inclusive.

## Input

The first line contains a single integer $k$ ($2 \le k \le 10^9$).

## Output

Print two integers $x$ and $y$ that satisfy the equation.

## Examples

### Example 1
**Input:**
```
2
```

**Output:**
```
3 9
```

## Note

Substituting $x = 3$ and $y = 9$ in the equation, LHS will evaluate to $\frac{3}{9} + \frac{1}{3} = \frac{2}{3}$, and RHS will evaluate to $\frac{2 (3)}{9} = \frac{2}{3}$. Therefore the equation is satisfied.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>
using namespace std;
#define int long long
signed main()
{
    int  x,y,k;
    cin >> k;

    y=k-1;
    x=1;
    cout << x <<' '<< y;
     
}
```
