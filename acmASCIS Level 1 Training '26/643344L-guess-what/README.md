# [643344L] Guess what?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/L](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/L)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355224768](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355224768)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# L. Guess what?

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/L](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/L)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

Vasya wants to become a programmer. He decided that he'll start learning to code in C++. When his friend Petya found out about him learning to code, he wanted to test his friend's knowledge. He will give Vasya three integers $n,\, k\,$ and $\, a,$ and Vasya needs to identify the data type of the result of $\dfrac{n \times k}{a}$ whether it's a double, int or a long long value. But since Vasya is still a newbie, he's not sure of his answer. So help him not humiliate himself in-front of his friend by confirming that Vasya's answer is correct through solving the problem yourself.

## Input

The input contains three integers $n, k$ and $a,\, (1 \leq a, k, n \leq 10^9)$.

## Output

Print "int" , "double" or "long long" (without quotes) as described in the statement.

## Examples

### Example 1
**Input:**
```
3 6 9
```

**Output:**
```
int
```

## Note

double is when a number has a floating point.

int Range: $[-2147483648, 2147483647]$.

long long can hold values of a bigger range than that of int.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int a, k, n;

    cin >> a >> k >> n;
    if ((a * k) % n != 0)
        cout << "double";
    else if ((a * k) / n > 2147483647)
        cout << "long long";
    else
        cout << "int";
}
```
