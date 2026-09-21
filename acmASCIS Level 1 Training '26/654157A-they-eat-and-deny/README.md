# [654157A] They eat and deny

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/submission/351074958](https://codeforces.com/group/tTJnpKpFzH/contest/654157/submission/351074958)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 202 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. They eat and deny

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/654157/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Just like cats — they eat and then act like they didn't.

After making 2 easy problems, I just wanted to make 1 unsolvable, so you said about me that I am evil, even my trainee said, "I'm disappointed in you." Why all of this?

$die-kstra$ and $Saad$ are bad friends; they always compete about who is the better programmer, but $die-kstra$ always wins.

Given $n$ integers, $die-kstra$'s number is the maximum number, and $Saad$'s number is the second maximum number.

Help $die-kstra$ to determine the difference between his number and $Saad$'s number.

## Input

The first line of input contains $n (2 \le n \le 10^5)$ — The number of integers.

The second line contains $n$ integers $a_1, a_2, ..., a_n$ $(-10^9 \le a_i \le 10^9)$.

## Output

Print a single integer — The difference between the maximum and the second maximum number.

## Examples

### Example 1
**Input:**
```
5
1 3 6 8 12
```

**Output:**
```
4
```

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
    cin >>n;
    int arr1[n];
    for(int i=0; i < n; i++)
        cin >> arr1[i];
        sort(arr1,arr1 + n);
    cout << arr1[n-1] -arr1[n-2];
}
```
