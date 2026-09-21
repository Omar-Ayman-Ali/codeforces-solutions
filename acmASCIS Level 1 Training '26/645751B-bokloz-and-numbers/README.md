# [645751B] Bokloz and Numbers

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346046552](https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346046552)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 328 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Bokloz and Numbers

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Bokloz$ is a middle school student. He wants to go out with his friends but to do that he has to finish the task his teacher gave him earlier.

As $Bokloz$ is a lazy boy. He asks you to finish the task for him.

The task is: Given a group of integers, find the maximum value among them all.

## Input

Givin an integer $N$ $( 1 \leq N \leq 10^5)$ – the number of integers to be entered.

The following line contains $N$ space-separated integers $(-10^{18} \leq a_i \leq 10^{18})$ — $a_i$ is the value of the $i_{th}$ integer.

## Output

Print the answer to the task.

## Examples

### Example 1
**Input:**
```
4
3 5 1 4
```

**Output:**
```
5
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    long long  n,l,m,b;
    cin >> n;
    m = LLONG_MIN;
    for(int x = 1; x<=n; x++)
    {
        cin >> l;
        if(l > m)
        {
            m =l;
        }
        else{
            m =m;
        }
    }
    cout << m<<endl;    
}
```
