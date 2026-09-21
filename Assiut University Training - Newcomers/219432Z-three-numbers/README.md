# [219432Z] Three Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389693526](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389693526)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Three Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z)

## Description

# Z. Three Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z)
- **Time Limit:** 3 seconds
- **Memory Limit:** 256 megabytes

## Description

Given two numbers $K$ and $S$. Determine how many different values of $X, Y$ and $Z$ such that $(0 \le X, Y, Z \le K)$ and $X + Y + Z = S$.

## Input

Only one line containing two numbers $K$ and $S$ $(0 \le K \le 3000, 0 \le S \le 3K)$.

## Output

Print the answer required above.

## Examples

### Example 1
**Input:**
```
2 1
```

**Output:**
```
3
```

## Note

In the first test case all values of $X, Y, Z$ that satisfy the conditions are :

0 0 1

0 1 0

1 0 0

In the second test case all values of $X, Y, Z$ that satisfy the conditions are :

![image](https://espresso.codeforces.com/e8bca52cfc0dbcc7f6fcb32b2d53adf44f1e546e.png)

## Examples

### Example 1
**Input:**
```
2 1
```

**Output:**
```
3
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

    ll k, s, c = 0;
    cin >> k >> s;

    for (ll i = 0; i <= k; i++)
        for (ll j = 0; j <= k; j++)
        {
            if (s - i - j >= 0 && s - i - j <= k)
                c++;
        }
    cout << c;
    return 0;
}
```
