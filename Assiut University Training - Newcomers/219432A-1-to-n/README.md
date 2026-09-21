# [219432A] 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387687381](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387687381)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A)

## Description

# A. 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print numbers from 1 to *N* in separate lines.

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 103).

## Output

Print *N* lines according to the required above.

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
1
2
3
4
5
```

## Examples

### Example 1
**Input:**
```
5
```

**Output:**
```
1
2
3
4
5
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
    for (int i = 1; i <= n; i++)
        cout << i << endl;
    return 0;
}
```
