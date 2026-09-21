# [219158L] The Brothers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385980811](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385980811)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# The Brothers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L)

## Description

# L. The Brothers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

## Input

First line will contain two Strings *F*1, *S*1 which donates the first and second name of the 1*st* person.

Second line will contain two Strings *F*2, *S*2 which donates the first and second name of the 2*nd* person.

## Output

Print "ARE Brothers" if they are brothers otherwise print "NOT".

## Examples

### Example 1
**Input:**
```
bassam ramadan
ahmed ramadan
```

**Output:**
```
ARE Brothers
```

## Examples

### Example 1
**Input:**
```
bassam ramadan
ahmed ramadan
```

**Output:**
```
ARE Brothers
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

    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    if(s1 == s2)
        cout <<"ARE Brothers";
    else
        cout <<"NOT";
    
}
```
