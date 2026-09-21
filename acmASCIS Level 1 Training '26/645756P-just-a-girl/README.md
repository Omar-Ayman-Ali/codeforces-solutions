# [645756P] Just A Girl

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/P)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355676128](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355676128)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# P. Just A Girl

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/P](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/P)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Little girl Tanya is learning how to decrease a number by one, but she does it wrong with a number consisting of two or more digits. Tanya subtracts one from a number by the following algorithm:

- if the last digit of the number is non-zero, she decreases the number by one;
- if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

You are given an integer number $n$. Tanya will subtract one from it $k$ times. Your task is to print the result after all $k$ subtractions.

It is guaranteed that the result will be positive integer number.

## Input

The first line of the input contains two integer numbers $n$ and $k$ ($2 \le n \le 10^9$, $1 \le k \le 50$) — the number from which Tanya will subtract and the number of subtractions correspondingly.

## Output

Print one integer number — the result of the decreasing $n$ by one $k$ times.

It is guaranteed that the result will be positive integer number.

## Examples

### Example 1
**Input:**
```
512 4
```

**Output:**
```
50
```

## Note

The first example corresponds to the following sequence: $512 \rightarrow 511 \rightarrow 510 \rightarrow 51 \rightarrow 50$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int n, k;
    cin >> n >> k;
  
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
            n /= 10;
        else    
            n--;
    }
    cout << n;
}
```
