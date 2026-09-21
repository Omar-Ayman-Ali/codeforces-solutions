# [219432F] Multiplication table

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387690028](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387690028)
- **Rating:** 1300
- **Tags:** implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Multiplication table

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)

## Description

# F. Multiplication table

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Given a number *N*. Print the maltiplication table of the number from 1 to 12

For example: if *N* = 1

![image](https://espresso.codeforces.com/d91fbfbef1735627c26e381e16ed2bc5d64ab94f.png)

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 50).

## Output

Print 12 lines according to the required above.

## Examples

### Example 1
**Input:**
```
1
```

**Output:**
```
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12
```

## Examples

### Example 1
**Input:**
```
1
```

**Output:**
```
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12
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

    int n;
    cin >> n;
    for (int i = 1; i <= 12; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
```
