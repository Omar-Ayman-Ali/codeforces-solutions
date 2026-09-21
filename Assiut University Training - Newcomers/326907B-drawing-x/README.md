# [326907B] Drawing `X'

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390335008](https://codeforces.com/group/MWSDmqGsZm/contest/326907/submission/390335008)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Drawing `X'

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B)

## Description

# B. Drawing 'X'

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Some day, an artist wanted to draw an X mark on the wall in a fashionable way.

He wanted to do so by grouping snippets of slashes /, backslashes \, asterisks * and a capital X letter in an $N \times N$ square as shown in the sample. Can you help him?

## Input

Only one line containing one odd number $N$ ($3 \leq N \leq 49$).

## Output

Print the fashionable drawing.

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
\***/
*\*/*
**X**
*/*\*
/***\
```

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
\***/
*\*/*
**X**
*/*\*
/***\
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
    int mid = n / 2;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == mid && j == mid)
            {
                cout << 'X';
            }
            else if (i == j)
            {
                cout << '\\';
            }
            else if (i + j == n - 1)
            {
                cout << '/';
            }
            else
            {
                cout << '*';
            }
        }
        cout << '\n';
    }
}

```
