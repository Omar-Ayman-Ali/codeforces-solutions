# [282A] Bit++

- **Problem Link:** [https://codeforces.com/contest/282/problem/A](https://codeforces.com/contest/282/problem/A)
- **Submission ID:** [https://codeforces.com/contest/282/submission/371095047](https://codeforces.com/contest/282/submission/371095047)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Bit++

- **Problem Link:** [https://codeforces.com/contest/282/problem/A](https://codeforces.com/contest/282/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called *x*. Also, there are two operations:

- Operation ++ increases the value of variable *x* by 1.
- Operation -- decreases the value of variable *x* by 1.

A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable *x*. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.

You're given a programme in language Bit++. The initial value of *x* is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).

## Input

The first line contains a single integer *n* (1 ≤ *n* ≤ 150) — the number of statements in the programme.

Next *n* lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable *x* (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

## Output

Print a single integer — the final value of *x*.

## Examples

### Example 1
**Input:**
```
1
++X
```

**Output:**
```
1
```

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

int main()
{
    fast;

    int t;
    cin >> t;
    string x;
    int i = 0;
    while (t--)
    {
        cin >> x;
        if (x == "X++" || x == "++X")
            i++;
        else
            i--;
    }
    cout << i;
    return 0;
}
```
