# [219158H] Two numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385981042](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385981042)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Two numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H)

## Description

# H. Two numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 2 numbers $A$ and $B$. Print floor, ceil and round of $A/B$

Note:

- Floor: Is a mathematical function that takes a real number $X$ and its output is the greatest integer less than or equal to $X$.
- Ceil: Is a mathematical function that takes a real number $X$ and its output is the smallest integer larger than or equal to $X$.
- Round: Is a mathematical function that takes a real number $X$ and its output is the closest integer to that number $X$.

![image](https://espresso.codeforces.com/e270ca147a340a6fac60504f007f2b1c0c021638.png)

For more clarification visit the links in the notes below.

## Input

Only one line containing two numbers $A$ and $B$ $(1 \le A, B \le 10^3)$

## Output

Print 3 lines that contain the following in the same order:

1. "floor $A$ / $B$ = Floor result" without quotes.
2. "ceil $A$ / $B$ = Ceil result" without quotes.
3. "round $A$ / $B$ = Round result" without quotes.

## Examples

### Example 1
**Input:**
```
10 3
```

**Output:**
```
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
```

## Note

Links:

- For Rounding method visit: [https://www.mathsisfun.com/numbers/rounding-methods.html](https://www.mathsisfun.com/numbers/rounding-methods.html).
- For Flooring and Ceiling method visit: [https://www.mathsisfun.com/sets/function-floor-ceiling.html](https://www.mathsisfun.com/sets/function-floor-ceiling.html).

## Examples

### Example 1
**Input:**
```
10 3
```

**Output:**
```
floor 10 / 3 = 3
ceil 10 / 3 = 4
round 10 / 3 = 3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;
int main()
{
    double d, n;
    int x;
    cin >> d >> n;
    double z = n;
    n = d / n;
    x = n;
    cout << "floor " << d << " / " << z << " = " << x << '\n';
    if (n - x == 0)
        cout << "ceil " << d << " / " << z << " = " << x << '\n';
    else
        cout << "ceil " << d << " / " << z << " = " << x + 1 << '\n';

    if (n - x >= 0.5)
        cout << "round " << d << " / " << z << " = " << x + 1 << '\n';
    else
        cout << "round " << d << " / " << z << " = " << x << '\n';
}
```
