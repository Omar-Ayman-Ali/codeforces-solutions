# [219432W] Shape3

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/388500404](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/388500404)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Shape3

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W)

## Description

# W. Shape3

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print a diamond that has 2*N* rows.

For more clarification see the example below.

## Input

Only one line containing number *N* (1 ≤ *N* ≤ 99).

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
  ***
 *****
*******
*******
 *****
  ***
   *
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
  ***
 *****
*******
*******
 *****
  ***
   *
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
    int n, x = 1, y = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
            cout << ' ';
        for (int j = 0; j < x; j++)
            cout << '*';
        cout << endl;
        x += 2;
    }
    for (int i = n; i >= 0; i--)
    {
                x -= 2;

        for (int j = n ; j > i; j--)
            cout << ' ';
        for (int j = x; j > 0; j--)
            cout << '*';
        cout << endl;
    }
}
```
