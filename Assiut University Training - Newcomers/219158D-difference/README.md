# [219158D] Difference

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385505467](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385505467)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Difference

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D)

## Description

# D.  Difference

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given four numbers *A*, *B*, *C* and *D*. Print the result of the following equation :

![image](https://espresso.codeforces.com/a2aa7842885d683778d338bc14f0e55576284507.png)

 *X* = (*A* * *B*) - (*C* * *D*).

## Input

Only one line containing 4 separated numbers *A*, *B*, *C* and *D* ( - 105  ≤  *A*, *B*, *C*, *D*  ≤  105).

## Output

Print "Difference  =  " without quotes followed by the equation result.

## Examples

### Example 1
**Input:**
```
1 2 3 4
```

**Output:**
```
Difference = -10
```

## Examples

### Example 1
**Input:**
```
1 2 3 4
```

**Output:**
```
Difference = -10
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << "Difference = "<<(a*b) - (c*d);

}
```
