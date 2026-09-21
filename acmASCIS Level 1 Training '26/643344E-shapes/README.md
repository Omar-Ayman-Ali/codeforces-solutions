# [643344E] Shapes

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355213313](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355213313)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Shapes

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/E)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Zahra is a young girl who likes playing with geometric shapes. one day her older brother saw her playing with a square inside a circle, he likes asking her hard questions so he asked her to find the radius. Zahra can find the length of the side of the square but she can't find the radius. Can you help her?

![image](https://espresso.codeforces.com/7df38b63af5d4426fd986682427fab007eb0b8ad.png)

## Input

You will be given an integer L (1  ≤  L  ≤  109) the length of the square in meters.

## Output

Print the radius, the answer should be rounded to four decimal points.

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
2.8284
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define int double
signed main()
{
    int l,diagonal;
    cin >> l;
    diagonal = l/2;
    int radius = diagonal * sqrt(2);

    cout <<fixed<< setprecision(4)<<radius;
}
```
