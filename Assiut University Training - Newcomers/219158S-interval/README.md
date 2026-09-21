# [219158S] Interval

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385991437](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385991437)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Interval

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S)

## Description

# S. Interval

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/S)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *X*. Determine in which of the following intervals the number *X* belongs to:

[0,25], (25,50], (50,75], (75,100]

Note:

- if *X* belongs to any of the above intervals print "Interval " followed by the interval.
- if *X* does not belong to any of the above intervals print "Out of Intervals".
- The symbol '(' represents greater than.
- The symbol ')' represents smaller than.
- The symbol '[' represents greater than or equal.
- The symbol ']' represents smaller than or equal.

For example:

[0,25] indicates numbers between 0 and 25.0000, including both.

(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

## Input

Only one line containing a number *X* ( - 1000 ≤ *X* ≤ 1000).

## Output

Print the answer to the problem above.

## Examples

### Example 1
**Input:**
```
25.1
```

**Output:**
```
Interval (25,50]
```

## Examples

### Example 1
**Input:**
```
25.1
```

**Output:**
```
Interval (25,50]
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
    if (x > 0 && x <= 25)
        cout << "Interval [0,25]";
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]";

    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]";
    else if (x > 75 && x <= 100)
        cout
            << "Interval (75,100]";
    else
        cout << "Out of Intervals";

    return 0;
}
```
