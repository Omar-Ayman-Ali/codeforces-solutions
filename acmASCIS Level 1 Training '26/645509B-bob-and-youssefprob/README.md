# [645509B] Bob and YoussefProb

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345938887](https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345938887)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Bob and YoussefProb

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A wanderer emerged, wanting to challenge the mathematicians of this land. His name was $YoussefProof$, but for this problem's sake he goes by $YoussefProb$. With the notorious mathematician $Bob$ gone, only his disciple $Kuroudo$ was there to confront him.

$YoussefProb$ pointed to his bag of artifacts, which contained $3$ distinct types. Each type has a certain power level $P$ and the number of artifacts of that type $N$.

Meaning :

- He has $N1$ artifacts with power level $P1$.
- He has $N2$ artifacts with power level $P2$.
- He has $N3$ artifacts with power level $P3$.

$Kuroudo$ has to randomly select an artifact from this bag, if the selected artifact has power level strictly greater than $X$, he wins and obliterates $YoussefProb$. You are asked to find the probability he wins.

## Input

You are given $7$ integers $P1,P2,P3,N1,N2,N3,X$ $(1 \le P1,P2,P3,N1,N2,N3,X \le 10^{18})$. Representing the power of the $3$ artifacts, number of artifacts, and the power level required to win.

## Output

Print one line, the probability of winning. Note that you should print it with exactly 6 digits after the decimal point.

## Examples

### Example 1
**Input:**
```
13 15 4 6 4 14 4
```

**Output:**
```
0.416667
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     long long  P1,P2,P3,N1,N2,N3,X;
     long long sum;
     long long l = 0;
    cin >> P1>>P2>> P3>> N1>> N2 >> N3>>X;
    sum = N1+N2+N3; 
    if(P1 > X)
    {
        l += N1;
    }
    if( P2 > X)
    {
        l += N2;
    }
     if( P3 >X)
    {
        l += N3;
    }
       cout   <<fixed << setprecision(6)<< (double)l / sum;
 
}

```
