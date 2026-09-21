# [651191B] The Diagonals Game

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350381095](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350381095)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 937 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. The Diagonals Game

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/B)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

$Tonsey$ loves mathematical games that depend on the calculation speed, so he gave his friends $bodo$ and $Rafayello$ a $N$x$N$ grid and asked them to calculate the sum of the numbers written in the primary diagonal and the sum of the numbers written in the secondary diagonal.

$Bodo$ and $Rafayello$ don't love this type of games so they asked you to solve it.

$Read$ $the$ $Notes$ $for$ $a$ $better$ $understanding$.

## Input

The first line contains one integer $N$ $(3\leq N\leq 1000)$.

The next $N$ lines contain $N$ integers each, where the $j-th$ number in the $i-th$ line is the number written in the cell (i,j) $a_{ij} (-1000\leq a_{ij} \leq 1000) $.

## Output

Print two integers separated by a space, The summation of the primary diagonal and the summation of the secondary diagonal.

## Examples

### Example 1
**Input:**
```
3
1 1 1
1 1 1
1 1 1
```

**Output:**
```
3 3
```

## Note

This image shows the primary diagonal on a 4x4 gird:

![image](https://espresso.codeforces.com/480ba63fea197c237d954cc57f56492efecf0f15.png)

This image shows the secondary diagonal on a 4x4 gird:

![image](https://espresso.codeforces.com/916bad747799845ff9e4d6df9772201209ba9cae.png)

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main ()
{
    int n,c,sumP,sumD,x,y;
    cin >> n;
    int a[n][n];
    x =0;
    y =0;
    sumP =0;
    sumD =0;
    c =n;
    for(int i =0; i <n ; i++)
        {
            for(int j=0; j < n; j++) cin >> a[i][j];
        }
    
        while(n--)
        {
         sumP += a[x][y];     
            ++x;
            ++y;
        }
        x= 0;
        y=c-1;
        while(c--)
        {
         sumD = sumD + a[x][y];     
            ++x;
            --y;
        }
        cout << sumP<<' '<<sumD ;

}
```
