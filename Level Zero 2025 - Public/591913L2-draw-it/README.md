# [591913L2] Draw it.

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L2](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L2)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678900](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678900)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# L2. Draw it.

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L2](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L2)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 3 lines of input described as follow:

- First line contains a symbol S

- Second line contains a number N

- Third line contains N numbers

For each number $X_i$ in the N numbers print a new line that contains the symbol S repeated $X_i$ times.

## Input

The first line contains a symbol S can be (+,−,∗,/)

The second line an number N (1 ≤ N ≤ 50)

The third line contains N numbers (1 ≤ $X_i$ ≤ 100)

## Output

Print the answer required above.

## Examples

### Example 1
**Input:**
```
+
5
5 2 4 3 7
```

**Output:**
```
+++++
++
++++
+++
+++++++
```

## Note

Don't print any extra spaces after symbol S.

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

    char c;
    int n, x;
    cin >> c >> n;
    while (n--)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
            cout << c;
        cout << endl;
    }
    return 0;
}
```
