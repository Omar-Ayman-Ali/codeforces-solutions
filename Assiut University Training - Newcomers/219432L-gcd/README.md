# [219432L] GCD

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721895](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387721895)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# GCD

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L)

## Description

# L. GCD

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers *A* and *B*. Print the greatest common divisor between (*A*, *B*).

Note: The greatest common divisor (GCD) of two or more integers, which are not all zeroes, is the largest positive integer that divides each of the integers.

For example:

the GCD of 8 and 12 is 4.

because the numbers that divides both 8 and 12 are (1,2,4) and 4 is the largest one .

## Input

Only one line containing two numbers *A* and *B* (1 ≤ *A*, *B* ≤ 103).

## Output

Print the GCD of *A* and *B*.

## Examples

### Example 1
**Input:**
```
12 8
```

**Output:**
```
4
```

## Note

What is the greatest common divisor of 54 and 24?

*The number 54 can be expressed as a product of two integers in several different ways:

54 * 1 = 27 * 2 = 18 * 3 = 9 * 6 .....

Thus the divisors of 54  are: 1,2,3,6,9,18,27,54

Similarly, the divisors of 24 are: 1,2,3,4,6,8,12,24

The numbers that these two lists share in common are the common divisors of 54 and 24:

1,2,3,6

The greatest of these is 6. That is, the greatest common divisor of 54 and 24. One writes:

gcd(54,24) = 6.

## Examples

### Example 1
**Input:**
```
12 8
```

**Output:**
```
4
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int a,b;
    cin >> a >> b;
    int x = gcd(a,b);
    cout << x;

    return 0;
}
```
