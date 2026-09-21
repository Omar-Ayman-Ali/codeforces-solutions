# [219432I] Palindrome

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387719879](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387719879)
- **Rating:** 1900
- **Tags:** constructive algorithms, dp
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# Palindrome

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I)

## Description

# I. Palindrome

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number $N$. Print 2 lines that contain the following respectively:

1. Print $N$ in a reversed order and not leading zeroes.
2. If $N$ is a palindrome number print "YES" otherwise, print "NO.

Note:

A palindrome number is a number that reads the same forward or backward.

For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

A leading zero is any 0 digit that comes before the first nonzero digit in a number for example : numbers  (005 , 01 , 0123 , 02 , 000250 )  are leading zeroes but  ( 5 , 123 , 20 ,2500 )  not leading zeroes numbers .

## Input

Only one line containing a number $N$ $(1 \le N \le 10^7)$.

## Output

Print the answer required above.

## Examples

### Example 1
**Input:**
```
12121
```

**Output:**
```
12121
YES
```

## Examples

### Example 1
**Input:**
```
12121
```

**Output:**
```
12121
YES
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

    int x, z, y = 0;
    cin >> x;
    z = x;
    while (z > 0)
    {
        int m = z % 10;

        y = y * 10 + m;
        z /= 10;
    }
    if (y == x)
        cout << y << endl
             << "YES";
    else
        cout << y << endl
             << "NO";

    return 0;
}
```
