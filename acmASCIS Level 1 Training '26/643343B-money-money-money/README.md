# [643343B] Money, Money, Money!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345082228](https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345082228)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Money, Money, Money!

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/B)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

Melo works in one of many happiness stores in his city.

To make people happy, they sell candies!

The store bought a package of $n$ candies, for $x$ dollars each, and Melo wants to know the total profit the store is going to get after selling all $n$ candies for $y$ dollars each.

Help Melo by answering his question.

## Input

The only line of input contains $3$ integers $n, x,$ and $y$ $( 1 \leq n, x, y \leq 10^5, x \leq y )$.

## Output

Output one line containing the required answer.

## Examples

### Example 1
**Input:**
```
2 3 5
```

**Output:**
```
4
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;


int main ()
{
    long long n,x,y;
        cin>> n>> x>> y;
                cout<< (y-x)*n;
            

}
```
