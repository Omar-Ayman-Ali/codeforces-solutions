# [651191C] Bored Vasya

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350339709](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350339709)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 77 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Bored Vasya

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Vasya's teacher gave him a task to do but Vasya was bored and decided not to do it.

Now he is facing the consequences of his slacking and will have a severe punishment. He needs your help in solving the task since he didn't pay enough attention to it. His teacher gave him $m$ integers, among them he needed to identify which of them is divisible by an integer $n$. In the end he needs to write down their positions from the last number divisible by $n$ to the first.

## Input

The first line of input contains two integers $n$ and $m,\, (0  \lt  n \leq 10^9),(0 \leq m \leq 10^3)$.

The second line of input contains $m$ space-separated integers $a_i ,\, (0 \leq a_i \leq 10^9)$.

## Output

Print an integer $k$ – the count of the numbers that are divisible by $n$.

In the following line print the positions $(1-$based$)$ in reversed order.

If there are no numbers divisible by $n$ print $0$.

## Examples

### Example 1
**Input:**
```
3 10
6 7 2 9 3 4 15 20 11 99
```

**Output:**
```
5
10 7 5 4 1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std; 
#define int long long 
signed main()
{
    int n,m;int k=0;
    cin >> n >> m;
    int arr1[m];
    
    
    for(int i=0; i < m; i++) cin >> arr1[i];

    for(int i=0; i < m ; i++)
    {
        if(arr1[i] % n ==0) k++;
    }

    int arr2[k];
    int z=0;
    for(int i=0; i < m ; i++)
    {
        if(arr1[i] % n ==0)
         {    
            arr2[z] =i +1;
            z++;
        }
    }
    cout << k << endl;
    reverse(arr2, arr2 + k);
    for(int i=0; i < k ; i++) cout << arr2[i] << ' ';
    
}
```
