# [645756L] 2D grid

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/L](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/L)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355684560](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355684560)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# L. 2D grid

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/L](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/L)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

Yesterday at the break, Hesham was walking in the school garden counting the number of flowers.

Mr.Hazooma saw Hesham and asked him about the number of flowers, but Hesham could not answer the question due to the large number of flowers so, Mr.Hazooma gave him a problem to solve instead.

Mr.Hazooma gave Hesham a 2D grid of size $N$x$M$. In each cell he has i+j points, Hesham should find the sum of all cells of the grid, but Hesham does not like grids so he asked you to help him solve the problem.

## Input

The first and only line of input consists of $N$ and $M$ $(1 \leq N,M \leq 10^6)$ the size of the grid.

## Output

Print one line, the sum of all cells in the grid.

## Examples

### Example 1
**Input:**
```
2 2
```

**Output:**
```
4
```

## Note

The grid is 0-based.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
#define int long long
signed main()
{
    int M,N;

    cin >> N >> M;
    int sum = N * M * (N + M - 2) / 2;
    cout << sum;
}
```
