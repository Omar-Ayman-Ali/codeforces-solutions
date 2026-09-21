# [50A] Domino piling

- **Problem Link:** [https://codeforces.com/contest/50/problem/A](https://codeforces.com/contest/50/problem/A)
- **Submission ID:** [https://codeforces.com/contest/50/submission/373495971](https://codeforces.com/contest/50/submission/373495971)
- **Rating:** 800
- **Tags:** greedy, math
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Domino piling

- **Problem Link:** [https://codeforces.com/contest/50/problem/A](https://codeforces.com/contest/50/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

You are given a rectangular board of *M* × *N* squares. Also you are given an unlimited number of standard domino pieces of 2 × 1 squares. You are allowed to rotate the pieces. You are asked to place as many dominoes as possible on the board so as to meet the following conditions:

1. Each domino completely covers two squares.

2. No two dominoes overlap.

3. Each domino lies entirely inside the board. It is allowed to touch the edges of the board.

Find the maximum number of dominoes, which can be placed under these restrictions.

## Input

In a single line you are given two integers *M* and *N* — board sizes in squares (1 ≤ *M* ≤ *N* ≤ 16).

## Output

Output one number — the maximal number of dominoes, which can be placed.

## Examples

### Example 1
**Input:**
```
2 4
```

**Output:**
```
4
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
    int l, w;
    cin >> l >> w;
    cout << l * w / 2;
}
```
