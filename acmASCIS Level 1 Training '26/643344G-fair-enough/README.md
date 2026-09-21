# [643344G] Fair Enough

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/G)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355219271](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355219271)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. Fair Enough

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/G](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/G)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

One day, There was a chocolate bar of length *L* in the fridge.

Koko can't wait to eat a piece of it, But he wants his brother to eat from the bar too.

He wants to divide the chocolate bar into 2 bars and their absolute difference in length is minimum possible.

That is if the first bar after division has length *len*1 and the second has length *len*2 so we want their absolute difference (|*len*1 - *len*2|) be as minimum as possible.

Can you tell Koko the length of his chocolate bar that satisfy the condition?

## Input

You will be given one number *L* (1  ≤  *L*  ≤  100), the length of the bar.

## Output

Output a single number, the answer required.

## Examples

### Example 1
**Input:**
```
2
```

**Output:**
```
1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main()
{
    double l;
    cin >> l;

    cout << l/2;
}
```
