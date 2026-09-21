# [645509A] Covalent Bonds

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345936909](https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/345936909)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Covalent Bonds

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Long ago, the world cared more about rivalry and proving presence. Today we must choose a better path to take, a path that promotes progression. This journey begins not by looking outward with envy or competition, but by looking inward. The most crucial endeavor is the steady, quiet work on oneself—honing skills, learning, and mastering.

But times have changed — $Big Z$ has decided to let go of the past and focus on building better relationships instead. $Big Z$ wants to measure how strong the bonds in the community are. He assigns a friendship value of $s$ points for every pair of people who are friends.

You are given $n$ rows, each containing $m$ people standing in a line. Together, they form a group of people arranged in rows and columns.

Each person is friends with the people standing right beside them — the one on their left, right, front, or back (if there is someone there).

Your task is to find the summation of friendship values of all these pairs.

Check the notes section for further explanation.

## Input

The first line contains three positive integers $n, m, s$ $(1 ≤ n, m ≤ 10^5, 1 ≤ s ≤ 100)$, the number of rows, the number of columns, and friendship value per pair.

## Output

Output one integer — the summation of friendship values among all pairs of friends.

## Examples

### Example 1
**Input:**
```
1 1 1
```

**Output:**
```
0
```

## Note

In the second test case, the picture below shows how the people are standing.

Each double-ended arrow in the figure represents a pair of friends.

![image](https://espresso.codeforces.com/330fe70f09cfb6d53fe34f448a122c8404b8380a.png)

Since there are $12$ such pairs of friends, so the summation of the friendship values is $12 \times s = 36$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long  n,m,x,s;
    cin >> n >> m>> s;
    x= (m-1)*s*n + (n-1)*m*s;
    cout << x;
    
}
```
