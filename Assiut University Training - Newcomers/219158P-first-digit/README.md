# [219158P] First digit !

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385986080](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385986080)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# First digit !

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P)

## Description

# P. First digit !

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Given a number *X*. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

## Input

Only one line containing a number *X* (999 < *X*  ≤  9999)

## Output

If the first digit is even print "*EVEN*" otherwise print "*ODD*".

## Examples

### Example 1
**Input:**
```
4569
```

**Output:**
```
EVEN
```

## Note

Second Example  :

In 3569 the first digit is 3 and its ODD.

## Examples

### Example 1
**Input:**
```
4569
```

**Output:**
```
EVEN
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

    int x;
    cin >> x;
    x /= 1000;
    if(x % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}
```
