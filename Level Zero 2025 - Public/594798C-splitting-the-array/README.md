# [594798C] Splitting The Array

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388832416](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388832416)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# C. Splitting The Array

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A small team of contest problem setters was brainstorming ideas for their next round of challenges. One day, while discussing how to test a contestant's ability to maintain order while filtering data, they decided to design a problem centered around an array. They wanted to see if contestants could correctly separate elements based on a pivot value while preserving the original sequence. After several rounds of discussions, coding sessions, and friendly debates over coffee, the team finalized the problem. Today, you get to face the very challenge they crafted with such enthusiasm!

You are given an array of length $n$. Your task is to print the elements that are smaller than $x$, followed by the elements that are greater than $x$, all in the same order as they appear in the original array. Note that elements equal to $x$ should not be printed.

## Input

The first line contains two integers $n$, $x$ ($1 \le n \le 10^5, -10^9 \le x \le 10^9$).

The second line contains $n$ integers $a_1, a_2, \ldots, a_n$ ($-10^9 \le a_i \le 10^9$).

## Output

Print the elements of the array that are smaller than $x$ first, and then print the elements that are greater than $x$. The order of the elements must be the same as in the input.

## Examples

### Example 1
**Input:**
```
5 3
1 3 4 3 2
```

**Output:**
```
1 2 4
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

    ll x, a;
    cin >> a >> x;
    ll y[a];
    for (ll i = 0; i < a; i++)
        cin >> y[i];
    for (ll i = 0; i < a; i++)
    {
        if (y[i] < x)
            cout << y[i] << ' ';
    }
    for (ll i = 0; i < a; i++)
    {
        if (y[i] > x)
            cout << y[i] << ' ';
    }

    return 0;
}
```
