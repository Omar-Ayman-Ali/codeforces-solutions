# [643343D] Boo and The Equation

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345093373](https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345093373)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. Boo and The Equation

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/D)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

$Boo$ had a long and hard day at school. When she came back, she slept immediately. Unfortunately, $Boo$ has a homework to be done. The homework is very easy but she is very tired. If $Boo$ goes to school without doing the homework she will get punished. So she asks for your help.

The homework is very easy. Given an arithmetic equation you have to print the result of this equation. The equation is given below:

$\Huge{(2a + 3b) × 5c}$

![image](https://espresso.codeforces.com/5ee4751c882f63befcc07384354cf5da4b588cf8.png)

## Input

The input consists of one line containing $3$ decimal numbers $a, b$ and $c$ $(1 \leq a, b, c \leq 10^3)$.

## Output

Print in one line the result of the equation. Note that you should print it with exactly $6$ digits after the decimal point.

## Examples

### Example 1
**Input:**
```
2 2 2
```

**Output:**
```
100.000000
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
        double a,b,c;
        cin>> a>>b>>c;
        cout <<fixed<<setprecision(6)<< (2*a+3*b)*5*c ;
            

    
}
```
