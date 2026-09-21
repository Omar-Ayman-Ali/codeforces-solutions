# [591913G2] Intersection

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G2](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G2)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677508](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677508)
- **Rating:** 2000
- **Tags:** implementation, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# G2. Intersection

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G2](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G2)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given the boundaries of 2 intervals. Print the boundaries of their intersection.

Note: Boundaries mean the two ends of an interval which are the starting number and the ending number.

## Input

Only one line contains two intervals [$l1, r1$], [$l2, r2$] where $where (1≤ l1, l2, r1, r2 ≤10^9), (l1≤ r1, l2≤r2). $

It's guaranteed that l1≤r1 and l2≤r2.

## Output

If there is an intersection between these 2 intervals print its boundaries, otherwise print -1.

## Examples

### Example 1
**Input:**
```
1 15 5 27
```

**Output:**
```
5 15
```

## Note

First Example:

![image](https://espresso.codeforces.com/1014ccd1ee77bf809466ec0c541b7cf5d14a2cf0.png)

   Centered unscaled image.

Second Example:

![image](https://espresso.codeforces.com/a8cca8360bc0de5ff813d1f24388073d47344e20.png)

   Centered unscaled image.

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

    long l1, l2, r1, r2;

    cin >> l1 >> r1 >> l2 >> r2;
    if (max(l1, l2) > min(r1, r2))
        cout << -1;
    else
        cout << max(l1, l2) << " " << min(r1, r2);
}
```
