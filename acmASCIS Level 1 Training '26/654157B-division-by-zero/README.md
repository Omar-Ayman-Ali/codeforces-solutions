# [654157B] Division by zero

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/submission/351075634](https://codeforces.com/group/tTJnpKpFzH/contest/654157/submission/351075634)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Division by zero

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/B)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 megabytes

## Description

$die-kstra$ and $QRQ4$ have entered about 70 contests together.

When they pair up on a problem, they sometimes do questionable things.

Once, $QRQ4$ approved an equation where $die-kstra$ was dividing by zero. Never trust $QRQ4$'s validation.

Given 2 integers $A$ and $B$, determine whether the expression $A / B$ would cause a division-by-zero error.

If it causes a division-by-zero print "QRQ4 is bad".

If the operation is correct print "QRQ4 is fine".

## Input

Two integers $A$ and $B$ $(0 \le A, B \le 100)$.

## Output

If the operation $A / B$ is a division by zero, Print "QRQ4 is bad" without quotations, else print "QRQ4 is fine" without quotations.

## Examples

### Example 1
**Input:**
```
5 7
```

**Output:**
```
QRQ4 is fine
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

signed main ()
{
    int a,b;
    cin >> a >> b;
    if(b==0)
        cout<<"QRQ4 is bad";
    else
        cout << "QRQ4 is fine";

}
```
