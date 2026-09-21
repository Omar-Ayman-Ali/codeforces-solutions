# [593212D] Race

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764781](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764781)
- **Rating:** 2300
- **Tags:** brute force, implementation, two pointers
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Race

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/D)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

You are given four distinct integers $a$, $b$, $c$, $d$.

Adham and three other people are running a marathon. The value $a$ is the distance that Adham has run and $b$, $c$, $d$ correspond to the distances the other three participants ran.

Output the number of participants in front of Adham.

## Input

The first line contains a single integer $t$ ($1 \leq t \leq 10^4$) — the number of test cases.

The description of each test case consists of four distinct integers $a$, $b$, $c$, $d$ ($0 \leq a, b, c, d \leq 10^4$).

## Output

For each test case, output a single integer — the number of participants in front of Adham.

## Examples

### Example 1
**Input:**
```
4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998
```

**Output:**
```
2
0
1
3
```

## Note

For the first test case, there are $2$ people in front of Adham, specifically the participants who ran distances of $3$ and $4$. The other participant is not in front of Timur because he ran a shorter distance than Adham.

For the second test case, no one is in front of Adham, since he ran a distance of $10000$ while all others ran a distance of $0$, $1$, and $2$ respectively.

For the third test case, only the second person is in front of Adham, who ran a total distance of $600$ while Adham ran a distance of $500$.

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
        ll a, b, c, d, cntr = 0;
        cin >> a >> b >> c >> d;
        if (a < b)
            cntr++;
        if (a < c)
            cntr++;
        if (a < d)
            cntr++;
        cout << cntr << endl;
    }

    return 0;
}
```
