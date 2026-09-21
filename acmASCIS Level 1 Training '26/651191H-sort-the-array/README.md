# [651191H] Sort the Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/H)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351065740](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351065740)
- **Rating:** 1300
- **Tags:** implementation, sortings
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 265 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# H. Sort the Array

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/H](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/H)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Being a programmer, you like arrays a lot. For your birthday, your friends have given you an array *a* consisting of *n* distinct integers.

Unfortunately, the size of *a* is too small. You want a bigger array! Your friends agree to give you a bigger array, but only if you are able to answer the following question correctly: is it possible to sort the array *a* (in increasing order) by reversing exactly one segment of *a*? See definitions of segment and reversing in the notes.

## Input

The first line of the input contains an integer *n* (1 ≤ *n* ≤ 105) — the size of array *a*.

The second line contains *n* distinct space-separated integers: *a*[1], *a*[2], ..., *a*[*n*] (1 ≤ *a*[*i*] ≤ 109).

## Output

Print "yes" or "no" (without quotes), depending on the answer.

If your answer is "yes", then also print two space-separated integers denoting start and end (start must not be greater than end) indices of the segment to be reversed. If there are multiple ways of selecting these indices, print any of them.

## Examples

### Example 1
**Input:**
```
3
3 2 1
```

**Output:**
```
yes
1 3
```

## Note

Sample 1. You can reverse the entire array to get [1, 2, 3], which is sorted.

Sample 3. No segment can be reversed such that the array will be sorted.

Definitions

A segment [*l*, *r*] of array *a* is the sequence *a*[*l*], *a*[*l* + 1], ..., *a*[*r*].

If you have an array *a* of size *n* and you reverse its segment [*l*, *r*], the array will become:

*a*[1], *a*[2], ..., *a*[*l* - 2], *a*[*l* - 1], *a*[*r*], *a*[*r* - 1], ..., *a*[*l* + 1], *a*[*l*], *a*[*r* + 1], *a*[*r* + 2], ..., *a*[*n* - 1], *a*[*n*].

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

signed main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];

    int L = 0 , R = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            L = i;
            break;
        }
    }

    for(int i = L ; i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            R = i+1;
        }
    }

    reverse(arr+L,arr+R+1);
    bool sorted = true;
    for(int i = 0;i<n-1;i++){
        sorted &= (arr[i]<arr[i+1]);
    }
    
    if(sorted){
        cout<<"yes\n";
        cout<<L+1<<" "<<R+1<<"\n";
    }else cout<<"no\n";
}
```
