# [645754E] Hard Equation

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/355296692](https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/355296692)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 3625 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Hard Equation

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/E)
- **Time Limit:** 5.5 seconds
- **Memory Limit:** 64 megabytes

## Description

Given the equation *W*+ 2*X*2+ 3*Y*3+ 4*Z*4 = *N* how many possible solutions for that equation, if you know the value of *N*.

## Input

The first line of input contains one integer *T*(1 ≤ T ≤ 1000) number of testcases.

each test case contains only one integer N(0 ≤ N ≤ 106), the value of *N* in the equation.

## Output

For each test case, print only one number, the number of possible solutions for the equation.

## Examples

### Example 1
**Input:**
```
5
0
1
3
9
13
```

**Output:**
```
1
1
3
9
11
```

## Note

All variables in the equation are non-negative values.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
#define int long long
signed main()
// W+ 2X2+ 3Y3+ 4Z4
{
    int t, n;
    int counter = 0;
    cin >> t;
    while (t--)
    {

        cin >> n;

        for (int z = 0; z * z * z * z <= n; z++)
            for (int y = 0; y * y * y <= n; y++)
                for (int x = 0; x * x <= n; x++)
                    if ((2 * x * x + y * y * y * 3 + z * z * z * z * 4) <= n)
                        counter++;

        cout << counter << endl;
        counter = 0;
    }
}
```
