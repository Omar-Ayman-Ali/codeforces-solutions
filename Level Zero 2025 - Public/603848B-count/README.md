# [603848B] Count

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/B)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389303037](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389303037)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Count

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You will have some numbers and number of queries.

In each query:

You will get two numbers $l, r, x$, you have to calculate how many times does $x$ exists in range $[l,r]$.

## Input

First line consist of two integers $N$, $q$ $(1 \le N, q \le 10^3)$ number of elements and number of queries.

Second line consist of $N$ integer $(1 ≤ N_i ≤ 10^5)$

In the next $q$ lines, there are $l r x (1 \le l \le r \le N) (1 \le x \le 10^5)$.

## Output

Print $q$ lines.

In each line print how many times does $x$ exists in range $[l,r]$.

## Examples

### Example 1
**Input:**
```
8 6
1 6 5 7 9 9 1 6
1 8 9
5 6 9
6 6 9
7 8 6
1 8 1
2 3 1
```

**Output:**
```
2
2
1
1
2
0
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

    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    while (q--)
    {
        int l, r, x, cntr = 0;
        cin >> l >> r >> x;
        for (int i = l-1; i < r; i++)
        {
            if (arr[i] == x)
                cntr++;
        }
        cout << cntr << endl;
    }
    return 0;
}
```
