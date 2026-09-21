# [593212A] The Fool

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/A)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388763936](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388763936)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. The Fool

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/A)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Abdullah Hamed thinks that he is smart , So he tried to solve the contest before it is officially uploaded. Adham decided to change the whole contest for him.

In this problem you are given a single number $n$ , Your task is to print "Adham Is The Smartest" $n$ times.

## Input

Single integer $n$ , $(1 \leq n \leq 50)$.

## Output

Print "Adham Is The Smartest" $n$ times.

## Examples

### Example 1
**Input:**
```
3
```

**Output:**
```
Adham Is The Smartest
Adham Is The Smartest
Adham Is The Smartest
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
    for (int i = 0; i < n; i++)
        cout << "Adham Is The Smartest" << endl;

    return 0;
}
```
