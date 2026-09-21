# [645754D] Sushi for Two

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/355293104](https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/355293104)
- **Rating:** 900
- **Tags:** binary search, greedy, implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 109 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Sushi for Two

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Arkady invited Anna for a dinner to a sushi restaurant. The restaurant is a bit unusual: it offers $n$ pieces of sushi aligned in a row, and a customer has to choose a continuous subsegment of these sushi to buy.

The pieces of sushi are of two types: either with tuna or with eel. Let's denote the type of the $i$-th from the left sushi as $t_i$, where $t_i = 1$ means it is with tuna, and $t_i = 2$ means it is with eel.

Arkady does not like tuna, Anna does not like eel. Arkady wants to choose such a continuous subsegment of sushi that it has equal number of sushi of each type and each half of the subsegment has only sushi of one type. For example, subsegment $[2, 2, 2, 1, 1, 1]$ is valid, but subsegment $[1, 2, 1, 2, 1, 2]$ is not, because both halves contain both types of sushi.

Find the length of the longest continuous subsegment of sushi Arkady can buy.

## Input

The first line contains a single integer $n$ ($2 \le n \le 100\,000$) — the number of pieces of sushi.

The second line contains $n$ integers $t_1$, $t_2$, ..., $t_n$ ($t_i = 1$, denoting a sushi with tuna or $t_i = 2$, denoting a sushi with eel), representing the types of sushi from left to right.

It is guaranteed that there is at least one piece of sushi of each type. Note that it means that there is at least one valid continuous segment.

## Output

Print a single integer — the maximum length of a valid continuous segment.

## Examples

### Example 1
**Input:**
```
7
2 2 2 1 1 2 2
```

**Output:**
```
4
```

## Note

In the first example Arkady can choose the subsegment $[2, 2, 1, 1]$ or the subsegment $[1, 1, 2, 2]$ with length $4$.

In the second example there is no way but to choose one of the subsegments $[2, 1]$ or $[1, 2]$ with length $2$.

In the third example Arkady's best choice is the subsegment $[1, 1, 1, 2, 2, 2]$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;
#define int long long

signed main()
{
    int n, t, ans,s;
    ans = 0;
    int currentNum = 0;
    int prevCounter = 0;
    int currentCounter = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == currentNum)
            currentCounter++;
        else
        {
            prevCounter = currentCounter;
            currentCounter = 1;
            currentNum = t;
        }
        s = min(currentCounter, prevCounter);
        ans = max(ans, s);
    }
    cout << ans*2;
}
```
