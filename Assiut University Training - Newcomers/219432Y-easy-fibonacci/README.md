# [219432Y] Easy Fibonacci

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389692429](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/389692429)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Easy Fibonacci

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y)

## Description

# Y. Easy Fibonacci

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *N*. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

- fib(1) = 0.
- fib(2) = 1.
- fib(n) = fib(n - 1) + fib(n - 2).

## Input

Only one line containing a number *N* (1 ≤ *N* ≤ 45).

## Output

Print the first N numbers from the Fibonacci Sequence .

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
0 1 1 2 3 5 8
```

## Note

For more information visit Fibonacci: [https://www.mathsisfun.com/numbers/fibonacci-sequence.html](https://www.mathsisfun.com/numbers/fibonacci-sequence.html).

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
0 1 1 2 3 5 8
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

    ll n;
    cin >> n;
    if (n == 1)
        cout << 0;
    else
    {
        cout << 0 << ' ' << 1 << ' ';
        ll a = 0, b = 1;
        for (ll i = 0; i < n - 2; i++)
        {
            ll ans = a + b;
            cout << ans << ' ';
            a = b;
            b = ans;
        }
    }

    return 0;
}
```
