# [219158C] Simple Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385504990](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385504990)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Simple Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C)

## Description

# C. Simple Calculator

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers *X* and *Y*. Print the summation and multiplication and subtraction of these 2 numbers.

## Input

Only one line containing two separated numbers *X*, *Y* (1  ≤  *X*, *Y*  ≤  105).

## Output

Print 3 lines that contain the following in the same order:

1. "*X* + *Y* = summation result" without quotes.
2. "*X* * *Y* = multiplication result" without quotes.
3. "*X* - *Y* = subtraction result" without quotes.

## Examples

### Example 1
**Input:**
```
5 10
```

**Output:**
```
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
```

## Note

Be careful with spaces.

## Examples

### Example 1
**Input:**
```
5 10
```

**Output:**
```
5 + 10 = 15
5 * 10 = 50
5 - 10 = -5
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;
int main()
{
    long long x, y;
    cin >> x >> y;
    cout << x << " + " << y << " = " << x + y << '\n'
         << x << " * " << y << " = " << x * y << '\n'
         << x << " - " << y << " = " << x - y << '\n';
}
```
