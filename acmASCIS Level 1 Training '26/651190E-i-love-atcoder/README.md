# [651190E] I Love Atcoder

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/360328592](https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/360328592)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# E. I Love Atcoder

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Atcoder$ is the name of the website that $JoJo$ likes most. One day he wanted to apply for a job on the website, his interview problem was pretty simple, you are given an array of $n$ digits and one particular integer $X$, and you want to make as many copies of this integer as you can, by concatenating digits from the given array.

Print the number of the maximum copies you can make.

## Input

The first line contains a single number $n$ $(1 \le n\le 10^5)$ the size of the array.

Second line contains a single number $X$ $(1 \le X \le 10^{18})$.

Third line contains $n$ elements $(0 \le a_i \le 9)$.

## Output

Print one integer, the answer for the problem.

## Examples

### Example 1
**Input:**
```
5
19
1 9 2 9 1
```

**Output:**
```
2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int unsigned long long

signed main()
{
    int n,x;
    cin >> n >> x;
    int frq[10]{};
    int frqx[18]{};
    for(int i=0; i < n; i++)
        {
        int z;
            cin >>z; 
        frq[z]++;
        }
                    int edge;

        while(x > 0)
        {
         edge = x%10;
            x /=10;
            frqx[edge]++;
        }
        int m = __LONG_LONG_MAX__;
        for(int i=0; i < 10; i++)
        {
            if(frqx[i]== 0) continue;
            if(frq[i] / frqx[i] < m)
                m = frq[i] / frqx[i];
        }
        cout << m;
    }
```
