# [263A] Beautiful Matrix

- **Problem Link:** [https://codeforces.com/contest/263/problem/A](https://codeforces.com/contest/263/problem/A)
- **Submission ID:** [https://codeforces.com/contest/263/submission/371126503](https://codeforces.com/contest/263/submission/371126503)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Beautiful Matrix

- **Problem Link:** [https://codeforces.com/contest/263/problem/A](https://codeforces.com/contest/263/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

1. Swap two neighboring matrix rows, that is, rows with indexes *i* and *i* + 1 for some integer *i* (1 ≤ *i* < 5).
2. Swap two neighboring matrix columns, that is, columns with indexes *j* and *j* + 1 for some integer *j* (1 ≤ *j* < 5).

You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.

## Input

The input consists of five lines, each line contains five integers: the *j*-th integer in the *i*-th line of the input represents the element of the matrix that is located on the intersection of the *i*-th row and the *j*-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.

## Output

Print a single integer — the minimum number of moves needed to make the matrix beautiful.

## Examples

### Example 1
**Input:**
```
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
```

**Output:**
```
3
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
    int n, m;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                n = i;
                m = j;
            }
        }
    int cntr = 0;
    if (n > 2)
        cntr += n - 2;
    else if (n < 2)
        cntr += 2 - n;
    if (m > 2)
        cntr += m - 2;
    else if (m < 2)
        cntr += 2 - m;
    cout << cntr;
}
```
