# [219432E] Max

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387689135](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387689135)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Max

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)

## Description

# E. Max

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*, and *N* numbers, find maximum number in these *N* numbers.

## Input

First line contains a number *N* (1 ≤ *N* ≤ 103).

Second line contains *N* numbers *X**i* (0 ≤ *X**i* ≤ 109).

## Output

Print the maximum number.

## Examples

### Example 1
**Input:**
```
5
1 8 5 7 5
```

**Output:**
```
8
```

## Examples

### Example 1
**Input:**
```
5
1 8 5 7 5
```

**Output:**
```
8
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int t,mx= INT_MIN;
    cin >> t;
    while(t--)
    {
        int x; 
        cin >> x;
        mx=max(mx,x);
    }
    cout << mx;

    return 0;
}
```
