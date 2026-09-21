# [643344C] Soldier and Bananas

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/345578837](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/345578837)
- **Rating:** 800
- **Tags:** brute force, implementation, math
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Soldier and Bananas

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

A soldier wants to buy *w* bananas in the shop. He has to pay *k* dollars for the first banana, 2*k* dollars for the second one and so on (in other words, he has to pay *i*·*k* dollars for the *i*-th banana).

He has *n* dollars. How many dollars does he have to borrow from his friend soldier to buy *w* bananas?

## Input

The first line contains three positive integers *k*, *n*, *w* (1  ≤  *k*, *w*  ≤  1000, 0 ≤ *n* ≤ 109), the cost of the first banana, initial number of dollars the soldier has and number of bananas he wants.

## Output

Output one integer — the amount of dollars that the soldier must borrow from his friend. If he doesn't have to borrow money, output 0.

## Examples

### Example 1
**Input:**
```
3 17 4
```

**Output:**
```
13
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{               
    int k,n,w,b;
    cin >> k>>n>>w;
    b = (w*k*(w+1))/2;
    if(n >= b){
        cout << 0;
    }
    else{
    cout << b-n ;}
}
```
