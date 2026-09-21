# [643344K] The Magic Land

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/K)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355223575](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355223575)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# K. The Magic Land

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/K](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/K)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

One day $Lolo$ was walking in the magic land when he found two doors. Each door has a number written on it, the first door number is $a$ and the second door number is $b$. He also found a key with number $c$ written on it. He knew that he could open a door if the number on the key is divisible by the number written on that door. Find if $Lolo$ could open the two doors, the first door only, the second door only or none of them.

## Input

The only line of input contains the number $a$ written on the first door, the number $b$ written on the second door and the number $c$ written on the key $ ( 1 \leq a, b \leq 10^3)$ $(1 \leq c \leq 10^6)$.

## Output

If $Lolo$ could open the two doors print "$Both$". If he could open only the first door print "$First$". If he could open only the second door print "$Second$". Otherwise print "$None$ $of$ $them$".

## Examples

### Example 1
**Input:**
```
2 4 6
```

**Output:**
```
First
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c % a == 0 && c % b == 0)
        cout << "Both";
    else if (c % a == 0)
        cout << "First";
    else if(c % b == 0)
        cout << "Second";
    else 
        cout << "None of them";
}
```
