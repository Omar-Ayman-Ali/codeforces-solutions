# [643342E] Mount Boberest

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/355100310](https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/355100310)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Mount Boberest

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Bob the cat was attempting to be the first cat to ever climb "Mount Boberest", which is $n$ meters tall. Every day, Bob climbs at most $a$ meters, and at night the wind pushes him back down by exactly $b$ meters. Instead of helping him you were wondering in how many days will Bob reach the top knowing that he always starts at height 0 meters.

read notes for clarification

## Input

The first and only line of input has 3 space-separated integers $n$, $a$, and $b$ $(1 \leq n,a,b \leq 10^{18})$

## Output

You need to output the minimum number of days required for Bob to reach the top, or if it's impossible then print -1

## Examples

### Example 1
**Input:**
```
5 4 1
```

**Output:**
```
2
```

## Note

For the first test case: the first day Bob climbs 4 meters, then at night falls 1 meters down making his current height 3 meters. In the second day Bob climbs the remaining 2 meters making his height 5 meters, thus reaching the top of the mountain in 2 days

For the second test case: the first day Bob climbs 2 meters making his current height 2 meters, thus climbing the mountain in just 1 day

For the third test case: it can be shown that no matter how many days pass, Bob will never reach the top (he will keep falling), thus output is -1

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
#define int unsigned long long

signed main()
{

    int n, a, b;
    int d = 0;
    cin >> n >> a >> b;


    if (a >= n)
        cout << 1;
    else if (b >= a)
        cout << -1;
    else
    {
          int net = a - b;
        int days = ( (n - a) + net - 1 ) / net + 1;
        cout << days;
    }   

 }
```
