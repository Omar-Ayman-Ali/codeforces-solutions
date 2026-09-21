# [643344M] Onmi-man & Malak

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/M](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/M)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355225239](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355225239)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# M. Onmi-man & Malak

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/M](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/M)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

As we all know, $Omni-Man$ is very evil. He filled this sheet with tough math problems! $Malak$, frustrated by the lack of easy questions, decided to add this one instead:

Given three characters $x$, $y$, and $z$, convert each into its position in the alphabet (e.g., $a$ = 1, $b$ = 2, ..., $z$ = 26) and find the sum of their values.

## Input

Given three characters $x$, $y$ and $z$ ('a' <= $x , y , z$ <= 'z').

## Output

Output the sum of their values after converting each character into its position in the alphabet.

## Examples

### Example 1
**Input:**
```
a b c
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

signed main()
{
    char x,y,z;
    int sum=0;
    cin >> x >> y >> z;
    sum = x-96+y-96+z-96;
    cout << sum; 
}
```
