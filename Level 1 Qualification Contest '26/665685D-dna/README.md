# [665685D] DNA

- **Problem Link:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/D](https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/D)
- **Submission ID:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/submission/360763317](https://codeforces.com/group/pz7RXdwh9g/contest/665685/submission/360763317)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. DNA

- **Problem Link:** [https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/D](https://codeforces.com/group/pz7RXdwh9g/contest/665685/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

As $Hamdy$ got laziness inside his DNA, he asked you to solve this problem for him.

You are given two integers $n$ and $k$. Here, $n$ represents the total number of DNAs a person has.

A person is considered lazy if their number of DNAs is less than $k$.

- If the person is lazy, output "YES".
- If the person is not lazy (their number of DNAs is greater than or equal to $k$), output "NO".

## Input

The only line of input contains two integers $n$ and $k$ ($1 \le n, k \le 100$).

## Output

Print "YES" (without quotes) if the person is lazy, and "NO" (without quotes) if they are not.

## Examples

### Example 1
**Input:**
```
3 5
```

**Output:**
```
YES
```

## Note

In the given example where $n = 3$ and $k = 5$: Since the number of DNAs ($n = 3$) is less than $k$ ($5$), the person is considered lazy. Therefore, the output is "YES".

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k;
    cin >> n >> k;

    if(n < k)
        cout << "YES"<<endl;
    else
        cout << "NO" << endl;
}
```
