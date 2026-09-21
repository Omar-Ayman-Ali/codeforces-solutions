# [219158K] Max and Min

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385631715](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385631715)
- **Rating:** 2500
- **Tags:** geometry
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Max and Min

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)

## Description

# K. Max and Min

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Given 3 numbers *A*, *B* and *C*, Print the minimum and the maximum numbers.

## Input

Only one line containing 3 numbers *A*, *B* and *C* ( - 105 ≤ *A*, *B*, *C* ≤ 105)

## Output

Print the minimum number followed by a single space then print the maximum number.

## Examples

### Example 1
**Input:**
```
1 2 3
```

**Output:**
```
1 3
```

## Examples

### Example 1
**Input:**
```
1 2 3
```

**Output:**
```
1 3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
int main()
{
    int a,b,c,min,max;
    cin >> a >> b >> c;
    if(a >= b && a >= c)
        max = a;
    else if(b >= a && b >= c)
        max = b;
    else if (c >=a && c >= b)
        max = c;
    
    if(a <= b && a <= c)
        min = a;
    else if(b <= a && b <= c)
        min = b;
    else if (c <=a && c <= b)
        min = c;


        cout << min <<' ' << max;
}
```
