# [326175D] Ali Baba and Puzzles

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387617856](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387617856)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Ali Baba and Puzzles

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D)

## Description

# D. Ali Baba and Puzzles

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of $4$ numbers and his task was to check whether he could get the fourth number using arithmetic operators ($+,-,\times$) between the other three numbers; so that each operator is used only once.

$\huge a \square b \square c = d$

 Can you solve this tricky puzzle for him?

## Input

Only one line containing four numbers $a$, $b$, $c$ and $d$ ($-10^9 \leq a,b,c \leq 10^9$),($-10^{18} \leq d \leq 10^{18}$).

## Output

Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

## Examples

### Example 1
**Input:**
```
3 4 5 23
```

**Output:**
```
YES
```

## Examples

### Example 1
**Input:**
```
3 4 5 23
```

**Output:**
```
YES
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

    ll a, b, c, d;
    bool x = false;
    cin >> a >> b >> c >> d;
    if (a + b - c == d)
        x = true;
    else if (a + b * c == d)
        x = true;
    else if (a * b - c == d)
        x = true;
    else if (a * b + c == d)
        x = true;
    else if (a - b + c == d)
        x = true;
    else if(a - b * c == d)
        x = true;


    if(x)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
```
