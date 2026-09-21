# [219158Z] Hard Compare

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386146333](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386146333)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Hard Compare

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z)

## Description

# Z. Hard Compare

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 4 numbers $A, B, C$ and $D$. If $A^B$ > $C^D$ print "YES" otherwise, print "NO".

## Input

Only one line containing 4 numbers $A, B, C$ and $D$ $(1 \le A, C \le 10^7)$ , $(1 \le B, D \le 10^{12})$

## Output

Print "YES" or "NO" according to the problem above.

## Examples

### Example 1
**Input:**
```
3 2 5 4
```

**Output:**
```
NO
```

## Note

First Example :

$3^2$ = 9 and $5^4$ = 625 then 9 < 625 so the answer is NO.

Second Example :

$5^2$ = 25 and $4^2$ = 16 then 25 > 16 so the answer is YES.

Third Example :

$5^2$ = 25 and $5^2$ = 25 then 25 = 25 so the answer is NO.

## Examples

### Example 1
**Input:**
```
3 2 5 4
```

**Output:**
```
NO
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

    unsigned long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (b * log(a) > d * log(c))
        cout
            << "YES";
    else
        cout << "NO";

}
```
