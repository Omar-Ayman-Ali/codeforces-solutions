# [326175G] Katryoshka

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387686329](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/387686329)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Katryoshka

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G)

## Description

# G. Katryoshka

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

1. Two eyes and one body.
2. Two eyes, one mouth, and one body.
3. One eye, one mouth, and one body.
 If the king has $n$ eyes, $m$ mouths and $k$ bodies, what is the largest number of Katryoshkas he can make?

## Input

Only one line containing three numbers $n$, $m$ and $k$ ($0 \leq n,m,k \leq 10^{18}$) – the number of eyes, mouths and bodies respectively.

## Output

Print the largest number of Katryoshkas he can make.

## Examples

### Example 1
**Input:**
```
1 2 3
```

**Output:**
```
1
```

## Examples

### Example 1
**Input:**
```
1 2 3
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

    unsigned long long n, m, k,mn;
    cin >> n >> m >> k;
    if (n == 0 || k == 0)
    {
        cout << 0;
        return 0;
    }
    mn = min({n,m,k});
    n -=mn;
    m -=mn;
    k -=mn;
    mn += min(n /2, k);
    cout << mn;
}
```
