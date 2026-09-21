# [604006H] X-Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/H)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389686277](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389686277)
- **Rating:** 1000
- **Tags:** brute force, greedy, implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 200 KB

## Problem Statement

# H. X-Sum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/H)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

Timur's grandfather gifted him a chessboard to practice his chess skills. This chessboard is a grid $a$ with $n$ rows and $m$ columns with each cell having a non-negative integer written on it.

Timur's challenge is to place a bishop on the board such that the sum of all cells attacked by the bishop is maximal. The bishop attacks in all directions diagonally, and there is no limit to the distance which the bishop can attack. Note that the cell on which the bishop is placed is also considered attacked. Help him find the maximal sum he can get.

## Input

The first line of the input contains a single integer $t$ ($1 \le t \le 1000$) — the number of test cases. The description of test cases follows.

The first line of each test case contains the integers $n$ and $m$ ($1 \le n \le 200$, $1 \leq m \leq 200$).

The following $n$ lines contain $m$ integers each, the $j$-th element of the $i$-th line $a_{ij}$ is the number written in the $j$-th cell of the $i$-th row $(0\leq a_{ij} \leq 10^6)$

It is guaranteed that the sum of $n\cdot m$ over all test cases does not exceed $4\cdot10^4$.

## Output

For each test case output a single integer, the maximum sum over all possible placements of the bishop.

## Examples

### Example 1
**Input:**
```
4
4 4
1 2 2 1
2 4 2 4
2 2 3 1
2 4 2 4
2 1
1
0
3 3
1 1 1
1 1 1
1 1 1
3 3
0 1 1
1 0 1
1 1 0
```

**Output:**
```
20
1
5
3
```

## Note

For the first test case here the best sum is achieved by the bishop being in this position:

![image](https://espresso.codeforces.com/0a1581e369415190ead57aa7162be7962b22dbed.png)

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int a[205][205];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    long long max_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long current_sum = a[i][j];

            int r = i - 1, c = j - 1;
            while (r >= 0 && c >= 0) {
                current_sum += a[r][c];
                r--; c--;
            }

            r = i - 1; c = j + 1;
            while (r >= 0 && c < m) {
                current_sum += a[r][c];
                r--; c++;
            }

            r = i + 1; c = j - 1;
            while (r < n && c >= 0) {
                current_sum += a[r][c];
                r++; c--;
            }

            r = i + 1; c = j + 1;
            while (r < n && c < m) {
                current_sum += a[r][c];
                r++; c++;
            }

            max_sum = max(max_sum, current_sum);
        }
    }

    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
```
