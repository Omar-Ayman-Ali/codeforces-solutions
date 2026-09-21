# [326175A] Winter Sale

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386529317](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386529317)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Winter Sale

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A)

## Description

# A. Winter Sale

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

The winter sale began, and Mrs. Sarah wants to buy a T-shirt for her son. The T-shirt has a ticket that indicates a discount of $X\%$ and its price $P$ after the discount. She now wants to know the price before the discount to know if the discount was worthy. Help her!

## Input

Only one line containing two numbers $X$ and $P$ ($1 \leq X \leq 99,1 \leq P \leq 4 \times 10^4$) – the discount percentage, and the price of the T-shirt after the discount.

## Output

Print the price of the T-shirt before the discount rounded up to two decimal places.

## Examples

### Example 1
**Input:**
```
20 80
```

**Output:**
```
100.00
```

## Examples

### Example 1
**Input:**
```
20 80
```

**Output:**
```
100.00
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

    double x, y;
    cin >> x >> y;
    int t = 100 - x;
    double b = (100 * y) / t;
    cout << fixed << setprecision(2) << b;
}
```
