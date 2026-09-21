# [1A] Theatre Square

- **Problem Link:** [https://codeforces.com/contest/1/problem/A](https://codeforces.com/contest/1/problem/A)
- **Submission ID:** [https://codeforces.com/contest/1/submission/372291275](https://codeforces.com/contest/1/submission/372291275)
- **Rating:** 1000
- **Tags:** math
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Theatre Square

- **Problem Link:** [https://codeforces.com/contest/1/problem/A](https://codeforces.com/contest/1/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Theatre Square in the capital city of Berland has a rectangular shape with the size *n* × *m* meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size *a* × *a*.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

## Input

The input contains three positive integer numbers in the first line: *n*,  *m* and *a* (1 ≤  *n*, *m*, *a* ≤ 109).

## Output

Write the needed number of flagstones.

## Examples

### Example 1
**Input:**
```
6 6 4
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

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

 long long n,m,a;

 cin >> n >> m >> a;


 cout << ((n+a-1)/a)*((m+a-1)/a);
    return 0;
}
```
