# [219432H] One Prime

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387691467](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387691467)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# One Prime

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H)

## Description

# H. One Prime

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H)
- **Time Limit:** 3 seconds
- **Memory Limit:** 64 megabytes

## Description

Given a number *X*. Determine if the number is prime or not

Note:

A prime number is a number that is greater than 1 and has only two factors which are 1 and itself.

In other words : prime number divisible only by 1 and itself.

Be careful that 1 is not prime .

The first few prime numbers are

![image](https://espresso.codeforces.com/841e6480168f69cb952ba01bf514dc3c41c3a6de.png)

## Input

Only one line containing a number *X* (2 ≤ *X* ≤ 105).

## Output

print "YES" if the number is prime and "NO" otherwise.

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
YES
```

## Note

First Example :

7 is prime because it is not divisible by  2,3,4,5,6, and only divisible by 1 and itself, so the answer is YES.

Second Example :

15 not is prime because it is divisible by 3 ,5, so the answer is NO.

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
YES
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

    int n;
    cin >> n;
    bool x= true;
    for(int i=2; i < n; i++)
        if( n % i == 0)
            x= false;
    if(x)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}
```
