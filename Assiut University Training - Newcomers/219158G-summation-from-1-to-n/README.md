# [219158G] Summation from 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385512225](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385512225)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Summation from 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G)

## Description

# G. Summation from 1 to N

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/G)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 megabytes

## Description

Given a number $N$. Print the summation of the numbers that is between 1 and $N$ (inclusive).

.$\displaystyle\sum_{i=1}^{N} i$

## Input

Only one line containing a number $N$ $( 1 \le N \le 10^9)$

## Output

Print the summation of the numbers that are between 1 and $N$ (inclusive).

## Examples

### Example 1
**Input:**
```
3
```

**Output:**
```
6
```

## Note

First Example :

the numbers between 1 and 3 are  1,2,3 .

So the answer is: (1 + 2 + 3 = 6)

Second Example :

the numbers between 1 and 10 are  1,2,3,4,5,6,7,8,9,10.

So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)

## Examples

### Example 1
**Input:**
```
3
```

**Output:**
```
6
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << (n*(n+1))/2;
}
```
