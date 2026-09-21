# [643344O] Climbing Forever

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/O](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/O)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355228824](https://codeforces.com/group/tTJnpKpFzH/contest/643344/submission/355228824)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# O. Climbing Forever

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/O](https://codeforces.com/group/tTJnpKpFzH/contest/643344/problem/O)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

$Ziad$, $Hazem$ and $Beevo$ decided to create a bot that learns to climb mountains in a computer simulation. $Ziad$ created the bot and wanted to challenge his teammates to calculate the ending point which the bot will end at after $n$ days of simulation.

The simulation is still in its early stages. Right now the bot can learn to move along the $y-axis$. It starts at point $(0, 0)$.

The bot moves $1$ point upwards on the $1^{st}$ day, $2$ points on the $2^{nd}$ day, $3$ points on the $3^{rd}$ day and so on.

$Hazem$ found a crucial bug in the bot: on the $a^{th}$ day it moves $b$ points rather than moving $a$ points, on the $2 \cdot a^{th}$ day it moves $b + 1$ points, in $3 \cdot a^{th}$ day it moves $b + 2$ points and so on.

$Beevo$ also found another bug in the bot that it doesn't necessary move upwards on the $a^{th}$ day; it can also move downwards (in this case $b  \lt  0$).

For example: if the simulation goes for $5$ days, $a=2$ and $b=10$, the sequence goes as follows: $1,$ 10 $,$ $3,$ 11 $,$ $5$ . So, the bot will end at point $30$ on the $y-axis$, and if $b=-10$ then the ending point will be $-10$ on the $y-axis$.

Can you guess the point on the $y-axis$ where the bot will end after $n$ days of simulation?

## Input

The input consists of three integers $n,$ $a,$ and $b$ $(1 \leq n \leq 10^9),$ $(1 \leq a \leq n),$ $(-10^9 \leq b \leq 10^9)$ - as described in the statement.

## Output

Output a single integer - the point on the $y-axis$ which the bot will end at after $n$ days of simulation.

## Examples

### Example 1
**Input:**
```
10 3 5
```

**Output:**
```
55
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long 

signed main()
{
    int n,a,b,sum;
    cin >> n >> a >> b;
    int k = n / a;
    sum = (n*(n+1))/2 - a*(k*(k+1))/2 + k*b + (k*(k-1))/2;
    cout << sum;
}
```
