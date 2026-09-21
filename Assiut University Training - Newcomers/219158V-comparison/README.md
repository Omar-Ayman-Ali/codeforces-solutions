# [219158V] Comparison

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385997131](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385997131)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Comparison

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V)

## Description

# V. Comparison

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a comparison symbol *S* between two numbers *A* and *B*. Determine whether it is *Right* or *Wrong*.

The comparison is as follows: *A* < *B*, *A* > *B*, *A* = *B*.

Where *A*, *B* are two integer numbers and S refers to the sign between them.

## Input

Only one line containing *A*, *S* and *B* respectively (-100  ≤  *A*, *B*  ≤  100), *S* can be ('<', '>','=') without the quotes.

## Output

Print "Right" if the comparison is true, "Wrong" otherwise.

## Examples

### Example 1
**Input:**
```
5 > 4
```

**Output:**
```
Right
```

## Examples

### Example 1
**Input:**
```
5 > 4
```

**Output:**
```
Right
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

    int x,y;
    char c;
    bool cas = false;

    cin >> x >> c >> y;
    if(c == '<' && x < y)
        cas = true;
    else if (c == '=' && x == y)
        cas = true;
    else if (c == '>' && x > y)
        cas =true;
    if(cas)
        cout <<"Right";
    else
        cout <<"Wrong";

    return 0;
}
```
