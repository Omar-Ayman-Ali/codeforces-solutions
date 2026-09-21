# [231A] Team

- **Problem Link:** [https://codeforces.com/contest/231/problem/A](https://codeforces.com/contest/231/problem/A)
- **Submission ID:** [https://codeforces.com/contest/231/submission/371093814](https://codeforces.com/contest/231/submission/371093814)
- **Rating:** 800
- **Tags:** brute force, greedy
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 124 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Team

- **Problem Link:** [https://codeforces.com/contest/231/problem/A](https://codeforces.com/contest/231/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers *n* problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.

## Input

The first input line contains a single integer *n* (1 ≤ *n* ≤ 1000) — the number of problems in the contest. Then *n* lines contain three integers each, each integer is either 0 or 1. If the first number in the line equals 1, then Petya is sure about the problem's solution, otherwise he isn't sure. The second number shows Vasya's view on the solution, the third number shows Tonya's view. The numbers on the lines are separated by spaces.

## Output

Print a single integer — the number of problems the friends will implement on the contest.

## Examples

### Example 1
**Input:**
```
3
1 1 0
1 1 1
1 0 0
```

**Output:**
```
2
```

## Note

In the first sample Petya and Vasya are sure that they know how to solve the first problem and all three of them know how to solve the second problem. That means that they will write solutions for these problems. Only Petya is sure about the solution for the third problem, but that isn't enough, so the friends won't take it.

In the second sample the friends will only implement the second problem, as Vasya and Tonya are sure about the solution.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;
int t;
int fCoutner =0;
int main()
{
    fast;

    cin >> t;
    while (t--)
    {
        int counter = 0;
        for (int i = 0; i < 3; i++)
        {
            int arr1[3];
            cin >> arr1[i];
            if(arr1[i] >0)
                counter++;
        }
        if(counter > 1)
            fCoutner++;
    }
    cout << fCoutner;
    /*int arr1[t][3];
    for(int i=0; i < t; i++)
        for(int j=0; j < 3; j++)
            cin >> arr1[i][j];

    return 0;*/
}
```
