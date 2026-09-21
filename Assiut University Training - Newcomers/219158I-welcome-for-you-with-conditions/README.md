# [219158I] Welcome for you with Conditions

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385516811](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385516811)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Welcome for you with Conditions

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I)

## Description

# I. Welcome for you with Conditions

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Given two numbers *A* and *B*. Print "Yes" if *A* is greater than or equal to *B*. Otherwise print "No".

## Input

Only one line containing two numbers *A* and *B* (0  ≤  *A*, *B*  ≤  100).

## Output

Print "Yes" or "No" according to the statement.

## Examples

### Example 1
**Input:**
```
10 9
```

**Output:**
```
Yes
```

## Examples

### Example 1
**Input:**
```
10 9
```

**Output:**
```
Yes
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    if(x >= y)
        cout << "Yes";
    else
        cout << "No";

}
```
