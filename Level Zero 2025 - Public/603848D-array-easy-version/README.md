# [603848D] Array (Easy Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389308225](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389308225)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Array (Easy Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$This$ $is$ $an$ $easy$ $version$ $of$ $the$ $problem.$ $It$ $differs$ $from$ $the$ $hard$ $one$ $only$ $by$ $constraints$ $on$ $N$ $and$ $Q$.

Given an Array of size $N$, And Number of queries of size $Q$,for each query you are given left & right indexes.

Your task is to calculate sum of array elements from index $L$ to index $R$ inclusively.

## Input

The first line contains number $N$ $(1≤N≤1000)$ The second line of each test case contains n integers $a1,a2,…,an (1≤a[i]≤1000)$ the third line contains a single integer $Q$ $(0 ≤ Q ≤ 10)$ — the number of queries. Next $Q$ lines contain the queries. The $i-th$ of these lines contains two space-separated integers $L$, $R$ $(1 ≤ L ≤ R ≤ 1000)$ — the description of the $i-th$ query.

## Output

Print $Q$ integers — the answers to the queries. Print the answers in the order, in which the queries are given in the input.

## Examples

### Example 1
**Input:**
```
5
1 2 2 5 10
3
3 5
1 4
2 3
```

**Output:**
```
17
10
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
    fast;

    int n;
    cin >> n;
    int arr[n];
    int sum[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        long long val;
        cin >> val;
        sum[i] = sum[i - 1] + val;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l - 1] << '\n';
    }

    return 0;
}
```
