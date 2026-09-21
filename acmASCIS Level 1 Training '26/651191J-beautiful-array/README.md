# [651191J] Beautiful Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/J)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360479981](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/360479981)
- **Rating:** 1900
- **Tags:** brute force, data structures, divide and conquer, dp, greedy
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 93 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# J. Beautiful Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/J](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/J)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

Shero once decided to invent a new type of arrays called "Beautiful Arrays", Shero call an array *A* Beautiful if and only if the product of any 2 consecutive elements in this array (*A**i*, *A**i* + 1) is equals to *A**k* (0 ≤ k < N), i.e. the product of any 2 consecutive elements in this array (*A**i*, *A**i* + 1) exist in the array.

## Input

The first line contains one integer *N* (2 ≤ *N* ≤ 100000) the number of elements in the array.

Second line contains *N* integers (1 ≤ *A**i* ≤ 100) the elements in the array.

## Output

If the given array is beautiful print "YES", Otherwise print "NO" (without quotes).

## Examples

### Example 1
**Input:**
```
5
1 2 1 1 1
```

**Output:**
```
YES
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int n;
    bool exist[101] ={false};
    cin >> n;
    int arr[n];
    int l = 0;
    int r = 2;
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            exist[arr[i]] = true;
        }
        for(int i=0; i < n-1; i++)
        {
            int product = arr[i]*arr[i+1];
            if(product > 100 or !exist[product] )
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
}

```
