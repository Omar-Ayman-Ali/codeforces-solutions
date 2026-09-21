# [603848H] Restaurant Customers

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/H)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389365997](https://codeforces.com/group/vtfsyP8jkN/contest/603848/submission/389365997)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 93 ms
- **Memory Consumed:** 4000 KB

## Problem Statement

# H. Restaurant Customers

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/603848/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Eyad and Hamed have a restaurant and want you to find the maximum number of customers in the restaurant at any time?

You are given the arrival and leaving times of $n$ customers in a restaurant.

What was the maximum number of customers in the restaurant at any time?

## Input

The first input line has an integer $n$ $(1 \le n \le 10^5)$: the number of customers.

After this, there are n lines that describe the customers. Each line has two integers a and b $(1 \le a \le b \le 10^5)$ : the arrival and leaving times of a customer.

## Output

Print one integer: the maximum number of customers.

## Examples

### Example 1
**Input:**
```
3
5 8
2 4
3 9
```

**Output:**
```
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
int frq[1000001] = {};

int main()
{
    fast;
    int n, mx;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        frq[a]++;
        frq[b + 1]--;
    }
    for (int i = 1; i <= 1000001; i++)
        frq[i] += frq[i - 1];
    cout << *max_element(frq, frq + 1000001) << '\n';

    return 0;
}
```
