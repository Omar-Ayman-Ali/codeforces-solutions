# [326907D] Range Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390759992](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390759992)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 93 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Range Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D)

## Description

# D. Range Sum

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

You are given a range represented by two integers $L$ and $R$, and you should find the sum of the numbers in the range between $L$ and $R$ inclusive.

## Input

First line contains a number $T$ ($1 \leq T \leq 10^5$) – the number of test cases.

Each of the next $T$ lines contains two numbers $L, R$ ($1 \leq L , R \leq 10^9$).

## Output

For each test case, print the sum.

## Examples

### Example 1
**Input:**
```
4
3 6
2 11
4 16
7 17
```

**Output:**
```
18
65
130
132
```

## Examples

### Example 1
**Input:**
```
4
3 6
2 11
4 16
7 17
```

**Output:**
```
18
65
130
132
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

    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (l > r)
            swap(l, r);
        ll sum = (r * (r + 1) / 2) - (l * (l + 1) / 2) + l;
        cout << sum << endl;
    }

    return 0;
}
```
