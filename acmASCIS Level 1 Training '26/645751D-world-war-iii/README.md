# [645751D] World War III

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346357548](https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346357548)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 328 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# D. World War III

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

As we all know $World$ $War$ $III$ is on the doors so the only $two$ $emperors$ in the world thought that it's time to prepare for it.

Emperor $Hithler$ wanted to know how strong his enemy could be, so he gave an order to one of his strongest soldiers $Hellodrich$. Emperor $Hithler$ will give $Hellodrich$ a Rank $r$ in the other enemy's army. The ranks of the enemy's army consists of integers $R_i$, and $Hellodrich$ should go and spy on the enemy's land to give $Hithler$ a report mentioning the place of the $first$ soldier whose rank is $r$, the place of the $last$ soldier whose rank is $r$ and the $number$ of soldiers of rank $r$. the enemy's land is a line of $n$ cells. Each cell will contain one soldier and cells numbers start from $1$.

Soldier $Hellodrich$ found that he has to watch the return of $The$ $Great$ $Teletubbies$, so he gave you this hard task to do.

## Input

The input consists of $2$ lines.

The first line you will be given $2$ integers $n$ and $r$ $(1 \leq n \leq10^5),(0 \leq r \leq 10^{18})$

In the second line you will be given $n$ integers $R_i$ $(0 \leq R_i \leq 10^{18})$, where $R_i$ is the rank of the soldier that stands in the $i_{th}$ cell.

## Output

If you found at least one soldier with rank $r$ print $3$ integers

- The $first$ cell number with soldier of rank $r$

- The $last$ cell number with soldier of rank $r$

- $How$ $many$ soldiers of rank $r$ were there

Otherwise print $-1$

## Examples

### Example 1
**Input:**
```
6 3
1 2 3 4 5 6
```

**Output:**
```
3 3 1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long n = 0, r = 0, x = 0, b = 0, m = 0, z = 0, i;
   
    cin >> n;
    cin >> r;
    for(i=1; i<=n;i++)
    {
        
        cin >> x;
      
        if(x == r && z == 0)
        {
            b = i;
            z++;
        }
        else if (x == r){
            m=i;
            z++;
        }
}
    
    if(m == 0)
    {
        m=b;
    }
    if(z>=1)
    {
        cout << b <<" " << m <<" "<< z;
    }
    else{
        cout << "-1";
    }
}
```
