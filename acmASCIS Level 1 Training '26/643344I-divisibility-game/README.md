# [643344I] Divisibility Game

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/I](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/I)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355220670](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355220670)
- **Rating:** 1700
- **Tags:** brute force, games, greedy, number theory
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# I. Divisibility Game

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/I](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/I)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

It's the weekend finally so 3abas and Sultan finished their school and decided to play a game on the way to home, the game is as follows: They will look to the last five cars in the street and find out if the number on the car plate is divisible by N or not, if it's divisible 3abas's score will increase by the number on the plate, if not then sultan's score will increase by the number on the plate. So given N and the Five numbers on cars plate determine who will win.

## Input

Input consists on two lines, the first one is N (1 ≤ N ≤ 109) the number which they divide by, and on the second line 5 integers X (1 ≤ X ≤ 109) which is the numbers on the cars plate.

## Output

Print a single line having the winners name "3abas" or "Sultan" and if the score is equal then print "TIE".

## Examples

### Example 1
**Input:**
```
2
1 2 3 4 5
```

**Output:**
```
Sultan
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int n, x, s1, s2;
    s1 = 0;
    s2 = 0;

    cin >> n;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        if (x % n == 0)
            s1 += x;
        else
            s2 += x;
    }
    if (s1 > s2)
        cout << "3abas";
    else if (s2 > s1)
        cout << "Sultan";
    else
        cout << "TIE";
}
```
