# [1903A] Halloumi Boxes

- **Problem Link:** [https://codeforces.com/contest/1903/problem/A](https://codeforces.com/contest/1903/problem/A)
- **Submission ID:** [https://codeforces.com/contest/1903/submission/372380646](https://codeforces.com/contest/1903/submission/372380646)
- **Rating:** 800
- **Tags:** brute force, greedy, sortings
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Halloumi Boxes

- **Problem Link:** [https://codeforces.com/contest/1903/problem/A](https://codeforces.com/contest/1903/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Theofanis is busy after his [last contest](https://codeforces.com/contest/1594/problem/A), as now, he has to deliver many halloumis all over the world. He stored them inside $n$ boxes and each of which has some number $a_i$ written on it.

He wants to sort them in non-decreasing order based on their number, however, his machine works in a strange way. It can only reverse any subarray$^{\dagger}$ of boxes with length at most $k$.

Find if it's possible to sort the boxes using any number of reverses.

$^{\dagger}$ Reversing a subarray means choosing two indices $i$ and $j$ (where $1 \le i \le j \le n$) and changing the array $a_1, a_2, \ldots, a_n$ to $a_1, a_2, \ldots, a_{i-1}, \; a_j, a_{j-1}, \ldots, a_i, \; a_{j+1}, \ldots, a_{n-1}, a_n$. The length of the subarray is then $j - i + 1$.

## Input

The first line contains a single integer $t$ ($1 \le t \le 100$) — the number of test cases.

Each test case consists of two lines.

The first line of each test case contains two integers $n$ and $k$ ($1 \le k \le n \le 100$) — the number of boxes and the length of the maximum reverse that Theofanis can make.

The second line contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \le a_i \le 10^{9}$) — the number written on each box.

## Output

For each test case, print YES (case-insensitive), if the array can be sorted in non-decreasing order, or NO (case-insensitive) otherwise.

## Examples

### Example 1
**Input:**
```
5
3 2
1 2 3
3 1
9 9 9
4 4
6 4 2 1
4 3
10 3 830 14
2 1
3 1
```

**Output:**
```
YES
YES
YES
YES
NO
```

## Note

In the first two test cases, the boxes are already sorted in non-decreasing order.

In the third test case, we can reverse the whole array.

In the fourth test case, we can reverse the first two boxes and the last two boxes.

In the fifth test case, it can be shown that it's impossible to sort the boxes.

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

    int k, n, t;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        int arr1[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            arr1[i] = arr[i];

        sort(arr1, arr1 + n);

        bool isSorted = true;
        for (int i = 0; i < n; i++)
            if (arr[i] != arr1[i])
                isSorted = false;

        if (isSorted)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (k <= 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}
```
