# [651190B] Vamoose

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/350296768](https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/350296768)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 218 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Vamoose

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Etoo$ wants to watch the world cup, his mentor $lumos$ told him if he solved this hard problem he would let him watch any match.

As you know $Etoo$ is so tired, so he wants you to solve this problem for him.

Given a sequence of $N$ unsorted integers, determine if the sequence is cool or not. The sequence is cool if the sum of each two consecutive elements in the sequence is a multiple of $X$ and the sum of all sequence elements is a multiple of $X$.

Print yes if the sequence is cool and no if it's not.

## Input

The first line contains two positive integers $N$ and $X$ $(2 \leq N \leq 100000) (1 \leq X \leq 100000)$.

The second line contains $N$ positive integers. $a_{1} , a_{2} , a_{3},... a_{N}$ where the $i-th$ integer is in range $(1 \leq a_{i} \leq 10^9)$.

## Output

You should print yes if the sequence is cool and no if it's not.

You may print each letter in any case (for example: "YES", "Yes", "yes", "yEs", "No", "NO", "no" and "nO" will all be recognized as acceptable answers).

## Examples

### Example 1
**Input:**
```
3 2
4 2 4
```

**Output:**
```
Yes
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream> 

using namespace std;
#define int long long
signed main()
{
    int n,x; int sumAll =0 ; bool sum2 = true;
    cin >> n >> x;

    int a[n];
    for(int i=0; i < n ; i++) {
        
        cin >> a[i];
        sumAll+= a[i];
    }
    for(int i=0; i < n-1 ; i++) 
    {
        if((a[i]+a[i+1]) % x != 0 ) sum2 = false;    
    }
    
    if(sumAll % 2 == 0 and sum2) cout << "YES";
    else cout << "NO";
    
}
```
