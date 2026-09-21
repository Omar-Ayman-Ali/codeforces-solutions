# [219432B] Even Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387687905](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387687905)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Even Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)

## Description

# B. Even Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print all even numbers between 1 and *N* inclusive in separate lines.

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 103).

## Output

Print the answer according to the required above. If there are no even numbers print -1.

## Examples

### Example 1
**Input:**
```
10
```

**Output:**
```
2
4
6
8
10
```

## Examples

### Example 1
**Input:**
```
10
```

**Output:**
```
2
4
6
8
10
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
    bool x = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            cout << i << endl;
            x = true;
        }
    if (x)
        return 0;
    else
        cout << -1;
    return 0;
}
```
