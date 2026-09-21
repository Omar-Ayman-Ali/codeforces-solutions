# [645754C] Recruitment

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346600539](https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346600539)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Recruitment

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$OOZ$ has been tasked with recruiting new employees at his company, he was given a budget of $k$ coins for the recruitment.

$OOZ$ is a perfectionist, every new employee must receive the same number of coins. and he will only recruit the number of people he can evenly distribute the whole budget between the new recruits.

as $OOZ$ was planning the new requirements, he wanted to know how many ways he choose the number of new people to be recruited in such a way that satisfies his conditions.

## Input

The first line of input contains a single integer $t$ $(1 \leq t \leq 10^5)$ – the number of test cases.

every test case contains a single integer $k$ $(1 \leq k \leq 10^5)$ – the budget of the recruitment.

It's guaranteed that the sum of $k$ over all test cases is less than or equal to $10^5$.

## Output

For every test case, output a single integer, the number of ways $OOZ$ can choose the number of new employees to recruit in such a way that satisfies his conditions.

## Examples

### Example 1
**Input:**
```
2
4
5
```

**Output:**
```
3
2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int t,k,z;

    cin >> t;
    for(int i =0; i < t ; i++)
    {
        cin >> k;
        int x=0;
        for(int y = 1; y <= k; y++)
        {
            if(k % y == 0)
            {
                x++;
            // 1 2 3
            }
        
        }
        cout << x<<endl;
    }
}
```
