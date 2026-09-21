# [219158F] Digits Summation

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385508478](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385508478)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Digits Summation

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F)

## Description

# F. Digits Summation

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Given two numbers *N* and *M*. Print the summation of their last digits.

## Input

Only one line containing two numbers *N*, *M* (0 ≤ *N*, *M* ≤ 1018).

## Output

Print the answer of the problem.

## Examples

### Example 1
**Input:**
```
13 12
```

**Output:**
```
5
```

## Note

First Example :

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)

## Examples

### Example 1
**Input:**
```
13 12
```

**Output:**
```
5
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long x, y, x1, y1;
    cin >> x >> y;
    if (x > 9)
        x1 = x % 10;
    if (y > 9)
        y1 = y % 10;
    cout << y1 + x1;
}
```
