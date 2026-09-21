# [1899A] Game with Integers

- **Problem Link:** [https://codeforces.com/contest/1899/problem/A](https://codeforces.com/contest/1899/problem/A)
- **Submission ID:** [https://codeforces.com/contest/1899/submission/384009628](https://codeforces.com/contest/1899/submission/384009628)
- **Rating:** 800
- **Tags:** games, math, number theory
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Game with Integers

- **Problem Link:** [https://codeforces.com/contest/1899/problem/A](https://codeforces.com/contest/1899/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Vanya and Vova are playing a game. Players are given an integer $n$. On their turn, the player can add $1$ to the current integer or subtract $1$. The players take turns; Vanya starts. If after Vanya's move the integer is divisible by $3$, then he wins. If $10$ moves have passed and Vanya has not won, then Vova wins.

Write a program that, based on the integer $n$, determines who will win if both players play optimally.

## Input

The first line contains the integer $t$ ($1 \leq t \leq 100$) — the number of test cases.

The single line of each test case contains the integer $n$ ($1 \leq n \leq 1000$).

## Output

For each test case, print "First" without quotes if Vanya wins, and "Second" without quotes if Vova wins.

## Examples

### Example 1
**Input:**
```
6
1
3
5
100
999
1000
```

**Output:**
```
First
Second
First
First
Second
First
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        if(n % 3 == 0)
            cout <<"Second" << endl;
        else
            cout << "First" << endl;
    }
}
```
