# [645756N] The Fight of Odds and Evens

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/N](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/N)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355677806](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355677806)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# N. The Fight of Odds and Evens

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/N](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/N)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

As even and odd numbers are always fighting, today they had another fight to know what is the difference between the sum of even and sum of odd numbers and as both groups are your friends you decided to end this fight and calculate the difference.

There are n numbers from 1 to n and you want to know the absolute difference between the even and odd numbers.

## Input

You are given n ( 1 ≤ n ≤ 109).

## Output

The output should be the absolute difference between the sum of even numbers and the sum of odd numbers.

## Examples

### Example 1
**Input:**
```
1
```

**Output:**
```
1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    if(n % 2 ==0)
        cout << n/2;
    else   
        cout << n/2+1;
}
```
