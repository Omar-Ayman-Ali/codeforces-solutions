# [651191M] I Wanna Be the Guy

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/M](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/M)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360388191](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360388191)
- **Rating:** 800
- **Tags:** greedy, implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# M. I Wanna Be the Guy

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/M](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/M)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

There is a game called "I Wanna Be the Guy", consisting of *n* levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only *p* levels of the game. And Little Y can pass only *q* levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

## Input

The first line contains a single integer *n* (1 ≤  *n* ≤ 100).

The next line contains an integer *p* (0 ≤ *p* ≤ *n*) at first, then follows *p* distinct integers *a*1, *a*2, ..., *a**p* (1 ≤ *a**i* ≤ *n*). These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. It's assumed that levels are numbered from 1 to *n*.

## Output

If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).

## Examples

### Example 1
**Input:**
```
4
3 1 2 3
2 2 4
```

**Output:**
```
I become the guy.
```

## Note

In the first sample, Little X can pass levels [1 2 3], and Little Y can pass level [2 4], so they can pass all the levels both.

In the second sample, no one can pass level 4.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

#define int long long

signed main()
{

    int n;
    cin >> n;
    bool c[101] = {false};

    int p;
    cin >> p;

    for(int i=0; i < p; i++)
        {
            int x;
            cin >> x;
             c[x] = true;
        }
            int q;
            cin >> q;
            for (int i = 0; i < q; i++) 
            {
                int x;
                cin >> x;
                c[x] = true;
            }
            for(int i=1; i <= n; i++)
            {
                if(!c[i])
                {
                    cout <<"Oh, my keyboard!";
                    return 0;
                }
            }
            cout << " I become the guy.";
            }

    
```
