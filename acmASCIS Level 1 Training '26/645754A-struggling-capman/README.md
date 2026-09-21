# [645754A] Struggling CapMan

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346568049](https://codeforces.com/group/tTJnpKpFzH/contest/645754/submission/346568049)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 233 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Struggling CapMan

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645754/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

CapMan is engrossed in a match with his friends, but the call of responsibility beckons. His FOS project demands attention.

The project consists of $n$ tasks, each task requires $T_{i}$ minutes.

The challenge at hand is that CapMan prefers to tackle his project in sessions, and he desires each session to be precisely long enough to complete any of the tasks. Simply , he is seeking the minimum session duration that guarantees successful completion of any task.

Can you assist CapMan by writing a program to find the minimum time required for a session that allows CapMan to accomplish any of the tasks in his FOS project ?

## Input

The first line of the input contains a single integer $ n \left ( 1 \leq n \leq 10^{5} \right )$ — number of tasks CapMan has .

The second line of each test case contains $n$ integers $T_{1} ,T_{2} ,T_{3} ,...,T_{n} \left ( 1 \leq T_{i} \leq 10^{12} \right )$ — minutes for each task .

## Output

Output a single integer — minimum session time in minutes .

## Examples

### Example 1
**Input:**
```
3
1 2 3
```

**Output:**
```
3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long n,t;
    long long b = 1;
    cin >> n;
    for(int i=0; i<n ; i++)
    {
        cin >> t;
        if(t >= b)
        {
            b =t;
        }
    }
    cout << b;
}
```
