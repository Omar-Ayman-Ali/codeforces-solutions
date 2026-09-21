# [594798D] Rotate Array

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388835642](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388835642)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Rotate Array

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Adham asked Mohamed Reda to set his first problem. To challenge him, Mohamed Reda devised an interesting task. He provided Adham with an array of length $n$ and an integer $k$, and challenged him to reverse the subarray starting from index $k$ to the end of the array. The elements before index $k$ should remain unchanged.

Your task is to help Adham solve this problem.

## Input

The first line contains two integers $n$ ($1 \le n \le 10^5$) and $k$ ($0 \le k  \lt  n$), where $n$ is the number of elements in the array and $k$ (0-indexed) is the starting position of the subarray to reverse.

The second line contains $n$ space-separated integers $a_1, a_2, \dots, a_n$ ($-10^9 \le a_i \le 10^9$).

## Output

Output a single line with $n$ space-separated integers representing the array after the subarray starting from index $k$ has been reversed.

## Examples

### Example 1
**Input:**
```
5 2
1 2 3 4 5
```

**Output:**
```
1 2 5 4 3
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

    ll a, x;
    
    cin >> a >> x;
    ll n[a];
    for (int i = 0; i < a; i++)
        cin >> n[i];
    reverse(n + x, n + a);
    for (int i = 0; i < a; i++)
        cout << n[i] << ' ';

    return 0;
}
```
