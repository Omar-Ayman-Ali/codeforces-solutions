# [643343E] Alibaba and the Cave

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345096064](https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345096064)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# E. Alibaba and the Cave

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/E)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

$Ali \, Baba$ was a son of a merchant. After his father's death, $Ali \, Baba$ married a poor woman and settled into the trade of a woodcutter.

One day, $Ali \, Baba$ was at work collecting and cutting firewood in the forest, when he happened to overhear a group of $40$ thieves visiting their treasure store. The treasure was in a cave. When $Ali \, Baba$ went to the cave he found out that he had to solve a puzzle.

![image](https://espresso.codeforces.com/5ec1b4bd6db13c29d0707c8ad5385a6cbfe23227.png)

The puzzle was very easy. $Ali \, Baba$ was given $4$ numbers. His task was to check wheather he could get the fourth number by using the arithmetic operators $(+,-,×)$ between the other three numbers. Knowing that an operator can be used only once.

$\Huge{a \; \Box \; b \; \Box \; c = d}$

Sadly, $Ali \, Baba$ was really bad at math and he aksed you to help him solve this puzzle.

## Input

The first line of input contains $4$ integers $a, b, c$ and $d$ $(-10^9 \leq a, b, c \leq 10^9), (-10^{18} \leq d \leq 10^{18})$.

## Output

Print "YES"(quotes for clarity) if you found the fourth number using the first three, otherwise print "NO"(quotes for clarity).

You can print each letter in any case (upper or lower).

## Examples

### Example 1
**Input:**
```
3 4 5 23
```

**Output:**
```
YES
```

## Note

In the first sample he was able to find the fourth number by putting operators in that format: $3 + 4 × 5 = 23$.

In the third sample he won't be able to get the fourth number.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main ()
{
    long long  a,b,c,d;
        cin >> a >> b >> c>> d;
        if(a+(b*c)==d)
        {
            cout << "YES";
        }
         else if((a*b)+c==d)
        {
            cout << "YES";
        }
        else if(a-(b*c)==d)
        {
            cout << "YES";
        }
        else if((a*b)-c==d)
        {
            cout << "YES";
        }
        else if(a + (b -c)==d)
        {
            cout << "YES";
        }
        else if((a-b)+c==d)
        {
            cout << "YES";
        }
    
        else 
        {
            cout << "NO";
        }

}
```
