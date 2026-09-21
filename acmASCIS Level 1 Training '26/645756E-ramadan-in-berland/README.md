# [645756E] Ramadan in Berland

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348020111](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/348020111)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 484 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Ramadan in Berland

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/E)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

In the city of Berland, there's only one week left for Ramadan. The children of Berland want to decorate the streets in their city but they don't have enough money .

They came up with a great idea, there are $N$ streets in Berland and in each street there are an infinite number of blocks. They can collect $i$ pounds from the $i_{th}$ block. Since the number of blocks in each street is very large they will collect money only from block number $L$ to block number $R$.

Tell them how much money they can collect from the $j_{th}$ street.

## Input

The first line of input contains an integer $N$ $(1 \leq N \leq 10^5)$ – the number of streets in Berland.

Each of the next $N$ lines contain two integers $L$ and $R$ $(1 \leq L \leq R \leq 10^9)$.

## Output

Print $N$ lines. In each line print how much money they can collect from the $j_{th}$ street $(1 \leq j \leq N)$.

## Examples

### Example 1
**Input:**
```
4
3 6
2 11
4 16
7 17
```

**Output:**
```
18
65
130
132
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    long long l,r,sum1,sum2;
    cin >>n;
    
    for(int x =0; x < n; x++)
    {
    cin >> l >> r;
                
        sum1 = (l * (l + 1) / 2)-l;
        sum2 = r * (r + 1) / 2;

        cout << sum2-sum1 << endl;
    }
}
```
