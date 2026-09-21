# [219432O] Pyramid

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387883943](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387883943)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Pyramid

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O)

## Description

# O. Pyramid

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print a left angled triangle that has *N* rows.

For more clarification see the example below.

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 99).

## Output

Print the answer according to the required above.

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
*
**
***
****
```

## Note

Don't print any extra spaces after symbol " * ".

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
*
**
***
****
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

    int n, x = 1;
    cin >> n;
    while (x <= n)
    {
        for (int i = 0; i < x; i++)
            cout << '*';
        cout << endl;
        x++;
    }
}
```
