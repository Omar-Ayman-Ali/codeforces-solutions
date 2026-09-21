# [603848C] Triple

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389304820](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389304820)
- **Rating:** 3200
- **Tags:** fft, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 1000 ms
- **Memory Consumed:** 1000 KB

## Problem Statement

# C. Triple

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given an array $a$ of $n$ elements, print any value that appears at least three times or print -1 if there is no such value.

## Input

The first line contains an integer $t$ ($1 \leq t \leq 10^4$) — the number of test cases.

The first line of each test case contains an integer $n$ ($1 \leq n \leq 2\cdot10^5$) — the length of the array.

The second line of each test case contains $n$ integers $a_1, a_2, \dots, a_n$ ($1 \leq a_i \leq n$) — the elements of the array.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2\cdot10^5$.

## Output

For each test case, print any value that appears at least three times or print -1 if there is no such value.

## Examples

### Example 1
**Input:**
```
7
1
1
3
2 2 2
7
2 2 3 3 4 2 2
8
1 4 3 4 3 2 4 1
9
1 1 1 2 2 2 3 3 3
5
1 5 2 4 3
4
4 4 4 4
```

**Output:**
```
-1
2
2
4
3
-1
4
```

## Note

In the first test case there is just a single element, so it can't occur at least three times and the answer is -1.

In the second test case, all three elements of the array are equal to $2$, so $2$ occurs three times, and so the answer is $2$.

For the third test case, $2$ occurs four times, so the answer is $2$.

For the fourth test case, $4$ occurs three times, so the answer is $4$.

For the fifth test case, $1$, $2$ and $3$ all occur at least three times, so they are all valid outputs.

For the sixth test case, all elements are distinct, so none of them occurs at least three times and the answer is -1.

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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n],
            freq[999999] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        bool z = false;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] >= 3)
            {
                cout << arr[i] << '\n';
                z = true;
                break;
            }
        }
        if (!z)
            cout << -1 << '\n';
    }
    return 0;
}
```
