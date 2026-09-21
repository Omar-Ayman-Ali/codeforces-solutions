# [651191O] Sushi buddies

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/O](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/O)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350186699](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/350186699)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# O. Sushi buddies

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/O](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/O)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Fairy tales are more than true: not because they tell us that dragons exist, but because they tell us that dragons can be beaten.-Neil Gaiman ABST is a group of 4 friends Alpha, Beta, Sigma, and Theta. One day, they went to eat sushi.

They ordered $n$ sushi plates. Each plate had one piece or a prime number of sushi pieces. As all of them are math lovers, They decided to choose some plates and multiply the number of sushi pieces in them but they cannot select two plates that have the same number of sushi pieces. They wanted to get the maximum possible multiplication. What is the result of the multiplication of the number of sushi pieces in the plates they chose?

Note: It is guaranteed the answer will not overflow in int64 type.

## Input

The first line contains one integer $ n (1≤n≤50) $—–the number of sushi plates.

The second line consists of $n$ integers $a_1,a_2,…,a_n (a_i=1)$or $a_i$ is a prime $(2≤a_i≤99991)$.

## Output

Print one integer, the answer to this problem.

## Examples

### Example 1
**Input:**
```
5
2 3 5 3 2
```

**Output:**
```
30
```

## Note

A prime number is a number that is divisible only by itself and 1.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i < n; i++) {
        cin>> a[i];
    }

    for(int i=0; i < n ; i++)
    {
        for(int j =i+1; j < n; j++) {
            if(a[i] == a[j]) {
                a[j] = 1;
            }
        }
    }

    long long x = 1;
    
    for(int i=n-1; i >= 0 ; i--) {
        x = x * a[i];
    }
    cout << x; 

}
```
