# [326175F] Adding Bits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387680434](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387680434)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Adding Bits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F)

## Description

# F. Adding Bits

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/F)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Peter Parker had worked hard throughout his digital logic course, but when he was asked to implement a $32$ bit adder for a machine, he made a mistake in the design part. After tracing the design for half an hour, he found his flaw!! He was doing bitwise addition, but the carry bit is always zero.

$\hspace{.5cm} 4 = 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000100$

$+$

$\hspace{.5cm} 6 = 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000110$

$=$

$\hspace{.5cm} 2 = 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000000 \hspace{.1cm} 00000010$

Now, he has to write an efficient program that would take $2$ unsigned $32$ bit decimal numbers as input, and reproduce the output by adding them in the same way as his circuit does.

## Input

Only One line containing two decimal numbers $A$ and $B$ ($0 \leq A,B \leq 10^9$).

## Output

Print the value after adding $A$ and $B$ in Peter Parker's way.

## Examples

### Example 1
**Input:**
```
4 6
```

**Output:**
```
2
```

## Examples

### Example 1
**Input:**
```
4 6
```

**Output:**
```
2
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

    long long x, y,c;
    cin >> x >> y;
    c = x ^ y;
    cout << c;
    return 0;
}
```
