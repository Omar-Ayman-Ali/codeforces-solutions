# [651085B] Odd Hater (Easy Easy Version)

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/355919894](https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/355919894)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 140 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Odd Hater (Easy Easy Version)

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

I thought about making a hard version all day...

Not today — anything for you..

$Yousuf$ still likes even numbers more than anything.

He gives you $n$ integers and wants to know the largest even sum you can make.

You can choose any of the numbers (maybe all, maybe some, maybe one).

Your goal is to make the sum of your chosen numbers even and as large as possible.

## Input

The first line contains one integer $n$ $(1 \leq n \leq 10^5)$ — the number of integers.

The second line contains $n$ space-separated integers $a_1, a_2, a_3, \dots, a_n$ $(1 \leq a_i \leq 10^9)$, where $a_i$ is the $i$-th number.

## Output

Print one integer — the maximum even sum you can get.

## Examples

### Example 1
**Input:**
```
4
1 3 4 2
```

**Output:**
```
10
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int a, n, sum, minN, maxN;
    cin >> n;
    minN = LLONG_MAX;
    maxN = LLONG_MIN;
    sum = 0;
    while (n--)
    {
        cin >> a;
        if (a % 2 != 0)
            minN = min(a, minN);
        sum += a;
    }
    if (sum % 2 != 0)
        cout << sum - minN;
    else
        cout << sum;
}
```
