# [651190C] Finally, some rest.

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/360319728](https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/360319728)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 78 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Finally, some rest.

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

After Mahrous's previous chaotic events, his teacher thought he deserves some rest. So, this time, he decided to give him an easy task.

The teacher gave him a paper containing the grades of $n$ students, and a number $x$, and he wanted to know how many possible groups of these grades can he make such that a group satisfies the following conditions:

- The size of the group is between 1 and $n$ ($1 \leq groupSize \leq n$)
- The group only contains grades of consecutive students. (a group can be for example $\{a_2, a_3, a_4\}$ but it can't be $\{a_2, a_4, a_9\}$ because their indices must be consecutive)
- The sum of grades of the group must be divisible by $x$

In other words, given an array of $n$ numbers, the $i^{th}$ number representing the grade of the $i^{th}$ student, the task is to find how many non-empty sub-arrays are divisible by $x$

An array $b$ is a subarray of an array $a$ if $b$ can be obtained from $a$ by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end. In particular, an array is a subarray of itself.

## Input

The first line of input contains 2 space-separated integers $n$ ($1 \leq n \leq 4 \cdot 10^3$) and $x$ ($1 \leq x \leq 10^9$) — the number of students and the number $x$ respectively.

The second line of input contains $n$ space-separated integers $a_1, a_2,...,a_n$ ($1 \leq a_i \leq 10^9$)

## Output

Output 1 non-negative integer representing the number of possible groups.

## Examples

### Example 1
**Input:**
```
10 10
1 2 3 4 5 6 7 8 9 10
```

**Output:**
```
6
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long 

signed main()
{
    bool chcekr = false;
    int n,x;
    int cnt =0;
    cin >> n >> x;
    int arr1[n];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];
        
   for(int i =0; i < n; i++)
    {
        int sum =0;
        for(int j =i; j < n; j++)
        {
            sum += arr1[j];
            if(sum % x == 0)
                {
                    cnt++;
                }
        }
    }
    cout << cnt;
}   
```
