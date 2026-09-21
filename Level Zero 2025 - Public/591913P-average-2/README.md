# [591913P] Average 2

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/P](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/P)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388680011](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388680011)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# P. Average 2

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/P](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/P)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Read three values (variables $A$, $B$ and $C$), which are the three student's grades. Then, calculate the average, considering that grade $A$ has weight $2$, grade $B$ has weight $3$ and the grade $C$ has weight $5$. Consider that each grade can go from $0$ to $10.0$, always withone decimal place.

## Input

The input file contains $3$ values of floating points (double) with one digit after the decimal point.

## Output

Print the message "MEDIA"(average in Portuguese) and the student's average according to the following example, with a blank space before and after the equal signal.

## Examples

### Example 1
**Input:**
```
5.0
6.0
7.0
```

**Output:**
```
MEDIA = 6.3
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

    long double  a,b,c;
    cin >> a >> b >> c;
    cout <<fixed <<setprecision(1) << "MEDIA = "<<(a*2+b*3+c*5)/10;

    return 0;
}
```
