# [603848A] Is It Frequency

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/A)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389302407](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389302407)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Is It Frequency

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 2 numbers $N$ , $M$ and an array $A$ of $N$ numbers. For every number from 1 to $M$ , print how many times this number appears in this array.

## Input

First line contains two numbers$ N, M (1 ≤ N ≤ 10^5 , 1 ≤ M ≤ 10^5) $.

Second line contains $ N$ numbers $(1 ≤ A_i ≤ M)$.

## Output

Print $M$ lines, the $i_{th}$ line should contain number of times that the number $i$ appears in $A$

## Examples

### Example 1
**Input:**
```
10 5
1 2 3 4 5 3 2 1 5 3
```

**Output:**
```
2
2
3
1
2
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

void solve()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int freq[m + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    for (int i = 1; i <= m; i++)
        cout << freq[i] << endl;
}
int main()
{
    fast;

    solve();

    return 0;
}
```
