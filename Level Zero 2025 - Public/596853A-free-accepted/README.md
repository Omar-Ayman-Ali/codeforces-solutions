# [596853A] Free Accepted

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/A)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389010303](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389010303)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Free Accepted

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/A)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Adham wants you to give you a free accepted!

He will gave you the easiest task ever. Given an integer $n$ , print $n + 1$.

## Input

Single integer $n$ , $(1 \leq n \leq 100)$.

## Output

Print $n + 1$.

## Examples

### Example 1
**Input:**
```
6
```

**Output:**
```
7
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

void ans()
{
    int n;
    cin >> n;
    cout << n + 1;
}
int main()
{
    fast;
    ans();

    return 0;
}
```
