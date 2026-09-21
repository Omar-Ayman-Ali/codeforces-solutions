# [643343C] Can you sort them?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345091366](https://codeforces.com/group/tTJnpKpFzH/contest/643343/submission/345091366)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# C. Can you sort them?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643343/problem/C)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

$Mared$ and $Shalaby$ were on their mission to get $Boo$ back to her room's door. Luckily they have found it, but unfortunately, the door was locked.

![image](https://espresso.codeforces.com/0f7ce3ca6195e10f9b94f32007ebf484a8133c68.png)

Three random numbers were written on it, and in order to unlock the door these numbers must be sorted in ascending order.

So please help them return $Boo$ to her room.

## Input

The input consists of three integers $A$, $B$ and $C$ $( -10^9 \leq A,B,C \leq 10^9 )$.

## Output

Output the three integers in the correct ascending order.

## Examples

### Example 1
**Input:**
```
3 2 1
```

**Output:**
```
1 2 3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main()
    {
        long long arr[3];
        for(int i=0;i<=2;i++){
        cin >> arr[i];
        }
        
        sort(arr, arr + 3);
        for(int n=0;n<=2;n++)
        {
        cout << arr[n]<<endl;
        }

    }
```
