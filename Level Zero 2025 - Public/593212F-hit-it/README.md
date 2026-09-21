# [593212F] Hit It

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/F)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388772676](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388772676)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# F. Hit It

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/F)
- **Time Limit:** 2 s.
- **Memory Limit:** 256 MB

## Description

Russo and Wil are competing in a game of darts, aiming for the center of a 2D plane $(0,0)$. You are given the coordinates where each player's dart landed: $R$ (Russo's dart position) $W$ (Wil's dart position)

Your task is to determine who was closest to the center:

- Print "Russo" if Russo's dart is closer.
- Print "Wil" if Wil's dart is closer.
- Print "Empate" if both are equally close.

## Input

On the first line of the input, a pair of integers $x_r$ and $y_r$ is given, the coordinates hit by Russo. On the second line another pair of integers $x_w$ and $y_w$ is given, the coordinates hit by Wil. $-10000 \leq x_r, y_r, x_w, y_w \leq 10000$.

## Output

A single line containing "Russo", "Wil" or "Empate", acording to statement's instructions.

## Examples

### Example 1
**Input:**
```
2 1
3 0
```

**Output:**
```
Russo
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fast;

    long long xr, yr, xw, yw;
    cin >> xr >> yr >> xw >> yw;

    long long dist_russo = (xr * xr) + (yr * yr);
    long long dist_wil = (xw * xw) + (yw * yw);

    if (dist_russo < dist_wil)
        cout << "Russo\n";
    else if (dist_wil < dist_russo)
        cout << "Wil\n";
    else
        cout << "Empate\n";

    return 0;
}
```
