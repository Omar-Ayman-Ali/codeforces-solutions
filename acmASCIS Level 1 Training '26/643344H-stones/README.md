# [643344H] Stones

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/H)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355219872](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355219872)
- **Rating:** 800
- **Tags:** brute force, greedy, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# H. Stones

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/H)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Rick and Morty found some stones on an alien planet, and they were trying to put them in storage.

The stones were smart, if you tell a stone to turn into a certain color, it does what it is told. But a stone of a certain color does not like to sit next to a stone of a similar color.

Given N the number of stones, can you tell Rick and Morty the minimum number of colors they need so they can store all the stones in a row?

## Input

Input consists of one line, containing N (1 ≤ *N* ≤ 109), the number of alien stones.

## Output

Output the number of minimum colors needed on a single line.

## Examples

### Example 1
**Input:**
```
3
```

**Output:**
```
2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int n;
    cin >>n;

    if( n > 1)
        cout << 2;
        else
            cout << 1;
}
```
