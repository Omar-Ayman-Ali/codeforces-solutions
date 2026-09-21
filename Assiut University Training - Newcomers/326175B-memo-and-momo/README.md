# [326175B] Memo and Momo

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386529992](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386529992)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Memo and Momo

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B)

## Description

# B. Memo and Momo

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Memo and Momo are playing a game. Memo will choose a positive number $a$, and Momo will choose a positive number $b$.

Your task is to tell them who will win according to the following rules:

- If both $a$ and $b$ are divisible by $k$, both of them win and you should print "Both".
- If $a$ is divisible by $k$ but $b$ isn't, Memo wins and you should print "Memo".
- If $b$ is divisible by $k$ but $a$ isn't, Momo wins and you should print "Momo".
- If both $a$ and $b$ are not divisible by $k$, no one wins and you should print "No One".

## Input

Only one line containing three positive numbers $a$, $b$ and $k$ ($1 \leq a,b,k \leq 10^{18}$).

## Output

Print the answer as described in the statement.

## Examples

### Example 1
**Input:**
```
15 7 3
```

**Output:**
```
Memo
```

## Examples

### Example 1
**Input:**
```
15 7 3
```

**Output:**
```
Memo
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

    unsigned long long a, b, k;
    cin >> a >> b >> k;
    if (a % k == 0 && b % k == 0)
        cout << "Both";
    else if (a % k == 0 && b % k != 0)
        cout << "Memo";
    else if (a % k != 0 && b % k == 0)
        cout << "Momo";
    else 
        cout <<"No One";
}
```
