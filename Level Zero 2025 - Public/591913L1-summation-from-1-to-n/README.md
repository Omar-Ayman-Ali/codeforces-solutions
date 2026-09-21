# [591913L1] Summation from 1 to N

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L1](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L1)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678695](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388678695)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# L1. Summation from 1 to N

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L1](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/L1)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 megabytes

## Description

Given a number N. Print the summation of the numbers that is between 1 and N (inclusive).

![image](https://espresso.codeforces.com/bd8865e494c2ec1146da361e5b8c4a47e2ca17f3.png)

## Input

Only one line containing a number N (1 ≤ N ≤ $10^9$)

## Output

Print the summation of the numbers that are between 1 and N (inclusive).

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

the numbers between 1 and 3 are 1,2,3 .

So the answer is: (1 + 2 + 3 = 6)

Second Example :

the numbers between 1 and 10 are 1,2,3,4,5,6,7,8,9,10.

So the answer is: (1 + 2 + 3 + 4 + 5 + 6 +7 +8 + 9 + 10 = 55)

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << (n * (n + 1)) / 2;
}
```
