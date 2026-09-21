# [591913Q] Calculating Function

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/Q](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/Q)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388680562](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388680562)
- **Rating:** 800
- **Tags:** implementation, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# Q. Calculating Function

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/Q](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/Q)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

For a positive integer *n* let's define a function *f*:

*f*(*n*) =  - 1 + 2 - 3 + .. + ( - 1)*n**n*

Your task is to calculate *f*(*n*) for a given integer *n*.

## Input

The single line contains the positive integer *n* (1 ≤ *n* ≤ 1015).

## Output

Print *f*(*n*) in a single line.

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
2
```

## Note

*f*(4) =  - 1 + 2 - 3 + 4 = 2

*f*(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

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

    ll n, sum = 0;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << n / -2 - 1;
}
```
