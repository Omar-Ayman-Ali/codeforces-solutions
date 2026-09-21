# [651187B] War

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349483398](https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349483398)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 109 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. War

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

In War it's known that soldier $i$ can kill soldier $j$ if the strength of soldier $i$ is greater than the strength of soldier $j \,(i \neq j)$.

If you know that there are $n$ soldiers in the battlefield. Each one of them views the others as their enemy. For each soldier count how many soldiers they can kill.

## Input

The first line of input contains an integer $n \, (1\leq N \leq 10000)$ — the number of soldiers in the battlefield.

The following line contains $n$ integers $(1 \leq s_i \leq 10^9)$ — the strength of the $i_{th}$ soldier $(1 \leq i \leq n)$.

## Output

Print $n$ integers — the $i_{th}$ integer should represent the number of soldiers that soldier$_i$ can kill.

## Examples

### Example 1
**Input:**
```
5
5 9 3 2 4
```

**Output:**
```
3 4 1 0 2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    
    int numberSoldiers;
    cin >> numberSoldiers;
    long arr1[10000];
    

    for(int i =0; i < numberSoldiers ; i++)
    {
        cin >> arr1[i];
    }

    for(int i =0; i < numberSoldiers ; i++)
    {   
       long m =0;
        for(int b =0; b < numberSoldiers; b++)
        {
            if(arr1[i] > arr1[b])m++;
        }
        cout << m << ' ';
    }       

    
}
```
