# [591913R] Shampoo

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/R](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/R)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388682064](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388682064)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# R. Shampoo

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/R](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/R)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Three people live in Takahashi's house: Takahashi, his father, and his mother. All of them wash their hair in the bathroom each night. His father, his mother, and Takahashi take a bath in this order and use $A$, $B$, and $C$ milliliters of shampoo, respectively.

This morning, the bottle contained $V$ milliliters of shampoo. Without refilling, who will be the first to run short of shampoo to wash their hair?

## Input

Input is given from Standard Input in the following format:

$V$ $A$ $B$ $C$

$(1 \le V,A,B,C \le 10^5)$, All values in input are integers.

## Output

If the first person to run short of shampoo to wash their hair is Takahashi's father, print F; if it is Takahashi's mother, print M; if it is Takahashi, print T.

## Examples

### Example 1
**Input:**
```
25 10 11 12
```

**Output:**
```
T
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
    fast;

    int v, f, m, t;
    cin >> v >> f >> m >> t;

    int rem = v % (f + m + t);
    if (rem < f)
        cout << "F";
    else if (rem < f + m)
        cout << "M";
    else
        cout << "T";

    return 0;
}
```
