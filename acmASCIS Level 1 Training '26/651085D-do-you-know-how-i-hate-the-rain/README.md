# [651085D] Do you know how I hate the rain ?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/355923208](https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/355923208)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Do you know how I hate the rain ?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/D)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

One trainee has opened his eyes, activating $The$ $Almighty$, a power that is both always present but can be controlled and activated at will. He is able to see all possible futures, which allows him to choose the most beneficial one for himself.

This trainee sought to see the possible futures of the contest. That unfair advantage was not overlooked, as $Kuroudo$ decided to trap this trainee in an infinite future loop, using his $Kyoka$ $Suigetsu$.

The trainee is standing at a point $(x,y)$ in the coordinate plane. He is rotated by $90$ degrees either clockwise ( $'C'$ ) or anti-clockwise ($'A'$ ) around the origin, a total of $n$ times. To escape the trap he must determine what point he will be at the end of the rotations.

## Input

The only line of input contains the point $(x,y)$, followed by the number of rotations $n$, followed by a character $r$ indicating whether the rotation $( -10^9 \le x,y \le 10^9)$ , $(1 \le n \le 10^9)$, $(r \in \{'A', 'C'\})$.

## Output

Print two integers — the point $(x,y)$ after rotation.

## Examples

### Example 1
**Input:**
```
3 5 3 C
```

**Output:**
```
-5 3
```

## Note

Below is the simulation of the given test case

![image](https://espresso.codeforces.com/a0d0cc4365e39bc7290c1d74a49f154573bc6ca0.png)

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
#define int long long
signed main()
{
    int x, y, n;
    char r;
    cin >> x >> y >> n >> r;

     n = n % 4;
    if (n == 0 )
        cout << x << ' ' << y;
    else
    {
        switch (r)
        {

        case 'A':
            if (n == 1)
            {
                swap(x, y);
                x *= -1;
            }
            else if (n == 2)
            {
               
                x *= -1;
                y *= -1;
            }
            else if (n == 3 )
            {
                swap(x, y);
                y *= -1;
            }

            break;

        case 'C':
            if (n == 1)
            {
                swap(x, y);
                y *= -1;
            }
            else if (n == 2 )
            {
 
                x *= -1;
                y *= -1;
            }
            else if (n == 3 )
            {
                swap(x, y);
                x *= -1;
            }
            break;
        }
        cout << x << ' ' << y;
    }
}
```
