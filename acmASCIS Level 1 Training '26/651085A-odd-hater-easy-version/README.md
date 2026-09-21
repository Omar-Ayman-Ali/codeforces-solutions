# [651085A] Odd Hater (Easy Version)

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349002343](https://codeforces.com/group/tTJnpKpFzH/contest/651085/submission/349002343)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 108 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Odd Hater (Easy Version)

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651085/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

As a mentor, there's no worse feeling than seeing your trainees say that $Peter$ is a kind mentor just because they solved $his$ problem and not $mine$!

They are calling me an evil mentor!

So, to prove them wrong, I decided to give not one, but two easy problems.

For this one:

$Yousuf$ likes anything that is even.

He gives you $n$ integers and asks you to find the sum of all even numbers in them.

## Input

The first line contains one integer $n$ $(1 \leq n \leq 10^5)$ — the number of integers.

The second line contains $n$ space-separated integers $a_1, a_2, a_3, \dots, a_n$ $(1 \leq a_i \leq 10^3)$, where $a_i$ is the $i$-th number.

## Output

Print a single integer — the sum of all even numbers.

## Examples

### Example 1
**Input:**
```
5
1 4 6 7 2
```

**Output:**
```
12
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int a,n;
    int b =0;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin>>a;
        if(a % 2==0)
        {
            b+=a;
        }
    }
    cout << b;
}
```
