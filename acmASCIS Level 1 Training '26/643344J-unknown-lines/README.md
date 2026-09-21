# [643344J] Unknown lines

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/J)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355222897](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355222897)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# J. Unknown lines

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/J)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Given the coordinates of 4 points A, B, C and D. Determine whether the two lines AB and CD are parallel, perpendicular or neither.

## Input

The input will consist of only 1 line containing Ax, Ay, Bx, By, Cx, Cy, Dx and Dy(0 ≤ *Ax*, *Ay*, *Bx*, *By*, *Cx*, *Cy*, *Dx*, *Dy* ≤ 100) respectively.

## Output

Print a single line containing the words "Parallel", "Perpendicular" or "Neither" without the quotes.

## Examples

### Example 1
**Input:**
```
0 0 40 20 0 10 40 30
```

**Output:**
```
Parallel
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main()
{
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, ABs, CDs;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;

    ABs = (By - Ay) * (Dx - Cx);
    CDs = (Dy - Cy) * (Bx - Ax);

    if (ABs == CDs)
        cout << "Parallel";
    else if ((Bx - Ax) * (Dx - Cx) + (By - Ay) * (Dy - Cy) == 0)
        cout << "Perpendicular";
    else
        cout << "Neither";
}
```
