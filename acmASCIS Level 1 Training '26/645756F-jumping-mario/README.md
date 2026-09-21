# [645756F] Jumping Mario

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/F)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348072351](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348072351)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# F. Jumping Mario

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/F)
- **Time Limit:** 2 s.
- **Memory Limit:** 64 MB

## Description

Mario is in the final castle. He now needs to jump over few walls and then enter the Koopa’s Chamber where he has to defeat the monster in order to save the princess. For this problem, we are only concerned with the “jumping over the wall” part. You will be given the heights of $N$ walls from left to right. Mario is currently standing on the first wall. He has to jump to the adjacent walls one after another until he reaches the last one. That means, he will make ($N-1$) jumps. A high jump is one where Mario has to jump to a taller wall, and similarly, a low jump is one where Mario has to jump to a shorter wall. Can you find out the total number of high jumps and low jumps Mario has to make?

## Input

The first line starts with an integer $N$ ($0  \lt  N \leq 50$) that determines the number of walls. The next line gives the height of the N walls from left to right. Each height is a positive integer not exceeding $10$.

## Output

Print two integers, total high jumps and total low jumps, respectively.

## Examples

### Example 1
**Input:**
```
8
1 4 2 2 3 5 3 4
```

**Output:**
```
4 2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main ()
{
    int n,x ,z ;
    int highJump =0;
    int lowJump =0;

    cin >> n;
    cin >> z;
    for(int i=0; i < n-1; i++)
    {
        cin >> x;
        if(x>z )highJump++;
        else if(x < z ) lowJump++;
        z=x;
    }
    cout << highJump << ' ' << lowJump;
}
```
