# [593212B] Is Valid Password

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/B)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764293](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388764293)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Is Valid Password

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Ziad is trying to find the password of Adham's laptop.

Adham's laptop password is 208241.

Your task is to find if Ziad's guess is correct.

## Input

String $s$ , representing Ziad's guess.

## Output

Print "Yes" is Ziad's guess is right, Otherwise print "No".

## Examples

### Example 1
**Input:**
```
135620
```

**Output:**
```
No
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
    if (n == 208241)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
```
