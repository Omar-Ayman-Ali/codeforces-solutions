# [645509D] Div.1 Z

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/355229224](https://codeforces.com/group/tTJnpKpFzH/contest/645509/submission/355229224)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Div.1 Z

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/645509/problem/D)
- **Time Limit:** 0.35 seconds
- **Memory Limit:** 111 megabytes

## Description

Most mentors would be afraid to put their name on a hard problem! They think contestants would kill them if they did! I won't be afraid anymore. This is $Yousuf \ Abdelhady$, and I'm making a Div.1 Z.

$Yousuf$ is awful at math — he can barely add two numbers. Now he has three integers. He can add 1 to exactly one of them — and only once in total.

$Yousuf$ wants to maximize the product of the three numbers after making this single move.

Can you help him find the maximum possible product he can get?

## Input

The input consists of three integers $a, b, c$ $(-1000 \le a, b, c \le 1000)$.

## Output

Print a single integer — The maximum product $Yousuf$ can obtain.

## Examples

### Example 1
**Input:**
```
2 3 8
```

**Output:**
```
72
```

## Note

In the first test, the best option is to increase the first number: $(2 + 1) \times 3 \times 8 = 72$.

In the second test, the best option is to increase the third number: $(-2) \times (-5) \times (7 + 1) = 80$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, x, y, z, n;
    cin >> a >> b >> c;
    x = (a + 1) * b * c;
    y = a * (b + 1) * c;
    z = a * b * (c + 1);
    n = a * b * c;

    int p =max(x,y);
    int o = max(z,n);
    int sum = max(p,o);
    
    cout << sum;
}
```
