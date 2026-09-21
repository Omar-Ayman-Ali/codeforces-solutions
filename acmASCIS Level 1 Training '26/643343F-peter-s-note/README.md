# [643343F] Peter's Note

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/F)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/344963828](https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/344963828)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# F. Peter's Note

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/F)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Peter$ has just started learning programming. One day, he saw a two-digit number written on a sticky note. He became curious and wanted to know the sum of its digits.

Can you help $Peter$ write a program to find the sum of the digits of this number?

## Input

The only line of input contains a single two-digit positive integer $n$ ($10 \leq n \leq 99$).

## Output

Output a single integer — the sum of the digits of $n$.

## Examples

### Example 1
**Input:**
```
77
```

**Output:**
```
14
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin>> x;
    y = x%10;
    z = x /10 %10;
    cout << y+z;

}
```
