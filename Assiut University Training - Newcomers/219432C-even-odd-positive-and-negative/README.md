# [219432C] Even, Odd, Positive and Negative

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387688772](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387688772)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Even, Odd, Positive and Negative

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)

## Description

# C. Even, Odd, Positive and Negative

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given N numbers. Count how many of these values are even, odd, positive and negative.

## Input

First line contains one number *N* (1 ≤ *N* ≤ 103) number of values.

Second line contains *N* numbers (-105 ≤ *X**i* ≤ 105).

## Output

Print four lines with the following format:

First Line: "Even: *X*", where *X* is the number of even numbers in the given input.

Second Line: "Odd: *X*", where *X* is the number of odd numbers in the given input.

Third Line: "Positive: *X*", where *X* is the number of positive numbers in the given input.

Fourth Line: "Negative: *X*", where *X* is the number of negative numbers in the given input.

## Examples

### Example 1
**Input:**
```
5
-5 0 -3 -4 12
```

**Output:**
```
Even: 3
Odd: 2
Positive: 1
Negative: 3
```

## Note

First Example :

Even Numbers are :  0, -4 , 12

Odd Numbers are :  -5 , -3

Positive Numbers are :  12

Negative Numbers are :  -5 , -3 , -4

## Examples

### Example 1
**Input:**
```
5
-5 0 -3 -4 12
```

**Output:**
```
Even: 3
Odd: 2
Positive: 1
Negative: 3
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

    int t, nCntr = 0, eCntr = 0, oCntr = 0, pCntr = 0;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        if (i > 0)
            pCntr++;
        else if (i < 0)
            nCntr++;
        if (i % 2 == 0)
            eCntr++;
        else
            oCntr++;
    }
    cout <<"Even: " << eCntr
         << "\nOdd: " << oCntr
         << "\nPositive: " << pCntr
         << "\nNegative: " << nCntr <<endl;
}
```
