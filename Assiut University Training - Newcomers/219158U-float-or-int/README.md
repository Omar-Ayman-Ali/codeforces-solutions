# [219158U] Float or int

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386143362](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386143362)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Float or int

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U)

## Description

# U. Float or int

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number $N$. Determine whether $N$ is float number or integer number.

Note:

- If $N$ is float number then print "float" followed by the integer part followed by decimal part separated by space.
- If $N$ is integer number then print "int" followed by the integer part separated by space.

For more clarification see the examples below.

## Input

Only one line containing a number $N$ $(1 \le N \le 10^{3})$

## Output

Print the answer required above.

## Examples

### Example 1
**Input:**
```
234.000
```

**Output:**
```
int 234
```

## Examples

### Example 1
**Input:**
```
234.000
```

**Output:**
```
int 234
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

    double x;
    cin >> x;
    int z = x;
    x *= 1000;
    int y = x;
    
    if (y % 1000 > 0)
        cout << "float " <<z <<  " 0." << y % 1000;
    else
        cout << "int " << z;
}
```
