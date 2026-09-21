# [645756B] Sorting Sequence

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355399677](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/355399677)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 3250 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Sorting Sequence

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/B)
- **Time Limit:** 15 seconds
- **Memory Limit:** 4 megabytes

## Description

Vasya likes sorting numbers very much.

He decided to play a simple game with his friend Petya. Giving him a sequence of $n$ integers and two integers $a$ and $b$.

He asked him to add $a$ and $b$ to the sequence then sort the numbers in ascending and descending order. Then he asked him to find the positions of $a$ and $b$ after sorting in ascending order and descending order.

Petya found the game trivial, but he had fun solving it. Now try solving it yourself.

## Input

The first line contains two integers $a$ and $b$ $( 1 \leq a,b \leq 10^9 )$.

The second line contains an integer $n$ $( 0 \leq n \leq 2 \cdot 10^6 )$— the length of the sequence.

The third line contains $n$ space-separated distinct integers $a_1,a_2,a_3,\dots,a_n$ $(1 \leq a_i \leq 10^9)$.

## Output

Print two lines each line contains two separated integers.

In the first line print the position of $a$ in ascending and descending order.

In the second line print the position of $b$ in ascending and descending order.

## Examples

### Example 1
**Input:**
```
1 2
1
3
```

**Output:**
```
1 3
2 2
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>
using namespace std;

#define int long long

signed main()
{
    int a, b, n, num, aP, bP;
    int m = 0;
    int maxNum = 0;
    int minNum = LONG_LONG_MAX;
    cin >> a >> b >> n;
    aP = 1;
    bP = 1;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (a > num)
            aP++;
        if (b > num)
            bP++;

    
    }
        if (a > b)
            aP++;
        if (b > a)
            bP++;

    cout << aP << ' ' << abs(n + 3 - aP) << endl;
    cout << bP << ' ' << abs(n + 3 - bP);
}

```
