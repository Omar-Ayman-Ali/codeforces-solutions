# [219432U] Some Sums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/388501745](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/388501745)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Some Sums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U)

## Description

# U. Some Sums

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

Given three numbers *N*, *A*, *B*. Print the summation of the numbers between 1 and *N* whose sum of digits is between *A* and *B* inclusive.

## Input

Only one line containing three numbers *N*, *A*, *B* (1 ≤ *N* ≤ 104, 1 ≤ *A* ≤ *B* ≤ 36).

## Output

Print a single line contains the answer according to the required above.

## Examples

### Example 1
**Input:**
```
20 2 5
```

**Output:**
```
84
```

## Note

In the first simple:

Among the numbers not greater than 20, the numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14 and 20.

So the answer is: 84.

## Examples

### Example 1
**Input:**
```
20 2 5
```

**Output:**
```
84
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

    long long n, a, b, total = 0, x = 0;
    cin >> n >> a >> b;
    if (a == b or a - b == abs(1))
       {
        cout << 0; return 0;
       }
    for (int i = a ; i <= n; i++)
    {
        long long m = i;
        total = 0;
        while (m > 0)
        {
            long long y = m % 10;
            total += y;
            m /= 10;
        }
        if (total <= max(b,a) && total >= min(a,b))
        {
            x += i;
        }
    }
    cout << x;
}
```
