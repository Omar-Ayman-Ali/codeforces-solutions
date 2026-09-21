# [591913C] Area of a Circle

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388676499](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388676499)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Area of a Circle

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

The formula to calculate the area of a circumference is defined as $(A = π . R^2)$. Considering to this problem that $(π = 3.14159)$:

Calculate the area using the formula given in the problem description.

## Input

The input contains a value of floating point (double precision), that is the variable R.

## Output

Present the message "A=" followed by the value of the variable, as in the example bellow, with exactly four places after the decimal point.

## Examples

### Example 1
**Input:**
```
2.00
```

**Output:**
```
A=12.5664
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

     double r;
    cin >> r;
    cout << "A=" << fixed << setprecision(4) << 3.14159 * r * r;
    return 0;
}
```
