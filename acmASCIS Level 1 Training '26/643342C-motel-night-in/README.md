# [643342C] Motel Night-in

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345327424](https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345327424)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 61 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Motel Night-in

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/C)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

On their travel to *Eden*, Logan alongside Laura and Charles spent the night in a local motel. While Laura was watching the telly, she crossed the weather channel. It wasn't clear for her how the following day weather is going to be.

![image](https://espresso.codeforces.com/e8f2cd0fc6a3f0f111eab74472481312b3321deb.png)

On the screen, the channel showed the daytime hours *D* and the number of hours that the sun will shine *S*. It's going to be a sunny day if the sun shines for an amount more than or exactly equals to two-thirds the daytime, and a rainy one if it shines for less than or exactly one-third the daytime, otherwise it's going to be a cloudy day. Help her understand the forecast by determining what kind of day it will be in the next morning.

## Input

A single line containing two integers *D* and *S*, (1 ≤  *S*  ≤  *D*  ≤ 106)

## Output

Print "Sunny Day"(quotes for clarity) if the next morning will be sunny, "Rainy Day"(quotes for clarity) if it will rain, "Cloudy Day"(quotes for clarity) otherwise.

## Examples

### Example 1
**Input:**
```
6 6
```

**Output:**
```
Sunny Day
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{   
    float d,s;
    cin >> d>>s;
    if(s>=(d*2)/3)
    {
        cout << "Sunny Day";    
    }
    else if(s<=(d*1)/3)
    {
        cout << "Rainy Day";      
    }
    else
    {
        cout << "Cloudy Day";      

    }
}
```
