# [651187A] Cool Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349409115](https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349409115)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 139 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Cool Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Vasya loves arrays so much. One day he came up with a new category called "Cool Arrays". Arrays belonged to this category under a certain condition.

An array is cool if the sum of all of its elements is divisible by each one of them. Knowing that, can you identify whether an array of $n$ elements is cool or not?

## Input

The first input line contains a single integer $n (1 \leq n \leq 10^5)$ — the number of elements in the array.

The following line contains $n$ integers $(1 \leq a_i \leq 1000)$ — the elements of the array.

## Output

Print "YES" if the set is cool, and "NO" otherwise.

You can print each letter in any case (upper or lower).

## Examples

### Example 1
**Input:**
```
5
5 5 5 5 5
```

**Output:**
```
YES
```

## Note

In the first sample case the sum of all the array elements is $25,$ and $25$ is divisible by each element of the array.

In the second sample case the sum of all the array elements is $3,$ and $3$ is not divisible by $2$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x,w =0;
    x=0;
    cin >> n;
    int m = 0;
    int b[n];

    for(int i =0; i<n;i++)
    {
        cin >> b[i];
        x+=b[i];
    }
   for(int i =0; i<n;i++)
    {
       if(x % b[i] ==0)
       {
        m++;
       }
    }
    if (m == n)
    {
        cout <<"Yes";
    }
    else cout << "No";
}
```
