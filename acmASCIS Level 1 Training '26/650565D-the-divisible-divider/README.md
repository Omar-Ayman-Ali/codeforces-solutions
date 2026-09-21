# [650565D] The divisible divider

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/359983195](https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/359983195)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. The divisible divider

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Joe and Mohannad were solving the Rubik's cube together while chatting about math puzzles and they wondered if they had two numbers $A$ and $B$ and $B$ > $A$, they wanted to know the numbers in between $A$ and $B$ that are divisible by $A$ and at the same time divide $B$, Mohanned suggested that the problem might be involved with prime numbers, after a bit of thinking Joe realized how he could use prime factorization to get the required numbers but he was too lazy to code it up so he will let you handle the coding part.

## Input

The first and only line of input contains two numbers $A$ and $B$ ($1$ $\leq$ $A$ < $B$ $\leq$ $10^5$) separated by space.

## Output

Output is one line containing numbers separated by spaces that are found between $A$ and $B$ while being divisible by $A$ and at the same time divides $B$, if none existed print $-1$

## Examples

### Example 1
**Input:**
```
2 24
```

**Output:**
```
4 6 8 12
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int a,b;
    bool x = false;
    cin >> a>> b;
    for(int i =a+1; i < b; i++)
    {
        if(i % a == 0 and b % i == 0)
            {
                cout << i;
                if(i < b-1)
                cout << ' ';
                x = true;
            }
    }
    if(x == false)
        cout << -1;
}
```
