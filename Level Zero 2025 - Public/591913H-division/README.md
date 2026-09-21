# [591913H] Division?

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/H)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677774](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677774)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# H. Division?

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Codeforces separates its users into $4$ divisions by their rating:

- For Division 1: $1900 \leq \mathrm{rating}$
- For Division 2: $1600 \leq \mathrm{rating} \leq 1899$
- For Division 3: $1400 \leq \mathrm{rating} \leq 1599$
- For Division 4: $\mathrm{rating} \leq 1399$

Given a $\mathrm{rating}$, print in which division the $\mathrm{rating}$ belongs.

## Input

The first line of the input contains an integer $t$ ($1 \leq t \leq 10^4$) — the number of testcases.

The description of each test consists of one line containing one integer $\mathrm{rating}$ ($-5000 \leq \mathrm{rating} \leq 5000$).

## Output

For each test case, output a single line containing the correct division in the format "Division X", where $X$ is an integer between $1$ and $4$ representing the division for the corresponding rating.

## Examples

### Example 1
**Input:**
```
7
-789
1299
1300
1399
1400
1679
2300
```

**Output:**
```
Division 4
Division 4
Division 4
Division 4
Division 3
Division 2
Division 1
```

## Note

For test cases $1-4$, the corresponding ratings are $-789$, $1299$, $1300$, $1399$, so all of them are in division $4$.

For the fifth test case, the corresponding rating is $1400$, so it is in division $3$.

For the sixth test case, the corresponding rating is $1679$, so it is in division $2$.

For the seventh test case, the corresponding rating is $2300$, so it is in division $1$.

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
    while (t--)
    {
        ll x;
        cin >> x;
        if (x >= 1900)
            cout << "Division 1" << endl;
        else if (x >= 1600)
            cout << "Division 2" << endl;

        else if (x >= 1400)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}
```
