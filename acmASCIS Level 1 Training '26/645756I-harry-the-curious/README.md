# [645756I] Harry the Curious

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/I](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/I)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355690226](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355690226)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# I. Harry the Curious

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/I](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/I)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

$\;\;\;$The time has come for the $Quidditch$ $Championship$ at Hogwarts. Of course, $Harry$ was going to participate in it only if he hadn't poked his nose along with $Hermione$ and $Ron$ in some other matters. Now they are punished for that.

![image](https://espresso.codeforces.com/ac231666747972797aa4869c4f341be543433ae3.png)

$\;\;\;$They had a task to finish as punishment. The task is searching for the prime divisors of some integer $N$ in a given interval. Can you help them finish the task and participate in the Quidditch Championship?

## Input

A single line contains three integers $l$, $r$ $( 1 \leq l \leq r \leq 10^3)$ and $N$ $( 1 \leq N \leq 10^5)$ — the beginning, the end of the interval to search in and the number to find its prime divisors, respectively.

## Output

Print a single line containing all the prime divisors (sorted in ascending order) if you have found any. If none was found print $-1$.

## Examples

### Example 1
**Input:**
```
1 10 24
```

**Output:**
```
2 3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int l, r, n;
    bool checker = false;
    cin >> l >> r >> n;

    for (int i = l; i <= r; i++)
    {
        if (i < 2) continue; 

        bool is_prime = true;
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime && n % i == 0)
        {
            cout << i << ' ';
            checker = true;
        }
    }
    
    if (!   checker)
        cout << -1;
}
```
