# [596853F] Pizza For Sameh

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/F)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389090733](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389090733)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# F. Pizza For Sameh

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/F)
- **Time Limit:** 1 s.
- **Memory Limit:** 1024 MB

## Description

Mohamed Sameh is the biggest fan for Pizza El-Esraa. To motive him , Adham decided to buy for him chicken ranch pizza if he solved this problem.

To solve the problem, consider the integer $N$ and the function $f: \mathbb{Z} \to \mathbb{R}$ defined as follows:

$f(x) = \frac{5xN^2}{x^2+3xN-5N^2}$

Determine all values $x$ for which $f(x) = x$   and their count

Adham won't but the pizza for him unless he solves the problem. Can you help mohamed and solve it for him?

## Input

The input consists of a single line containing an integer $N$ $(-300 \le N \le 300, N \ne 0)$.

## Output

The output should consist of two lines. Print on the first line the quantity $K$ of values that satisfy the condition. On the second line, print the $K$ values separated by spaces. You may print the values in any order. It is guaranteed that the quantity of values that satisfy the condition for a given value of $N$ does not exceed $10^4$.

## Examples

### Example 1
**Input:**
```
3
```

**Output:**
```
3
-15 0 6
```

## Note

In the example, we have $N = 3$, so our function $f$ is:

$f(x) = \frac{5x \cdot 3^2}{x^2+3x \cdot 3 - 5 \cdot 3^2} = \frac{45x}{x^2+9x-45}$

We have $K=3$ values of $a$ such that $f(a)=a$. They are:

- -15: $f(-15) = \frac{45 \cdot (-15) }{(-15)^2+9 \cdot (-15) - 45} = \frac{-675}{45} = -15$
- 0: $f(0) = \frac{45 \cdot (0) }{(0)^2+9 \cdot (0) - 45} = \frac{0}{-45} = 0$
- 6: $f(6) = \frac{45 \cdot (6) }{(6)^2+9 \cdot (6) - 45} = \frac{270}{45} = 6$

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

void solve()
{
    int n;
    cin >> n;
    cout << 3 << endl
         << -5 * n << ' ' << 0 << ' ' << 2 * n;
}
int main()
{
    fast;
    solve();
    return 0;
}
```
