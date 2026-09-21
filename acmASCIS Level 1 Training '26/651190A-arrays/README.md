# [651190A] Arrays

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/350087977](https://codeforces.com/group/tTJnpKpFzH/contest/651190/submission/350087977)
- **Rating:** 900
- **Tags:** sortings
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 374 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Arrays

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/651190/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

You are given two arrays *A* and *B* consisting of integers, sorted in non-decreasing order. Check whether it is possible to choose *k* numbers in array *A* and choose *m* numbers in array *B* so that any number chosen in the first array is strictly less than any number chosen in the second array.

## Input

The first line contains two integers *n**A*, *n**B* (1 ≤ *n**A*, *n**B* ≤ 105), separated by a space — the sizes of arrays *A* and *B*, correspondingly.

The second line contains two integers *k* and *m* (1 ≤ *k* ≤ *n**A*, 1 ≤ *m* ≤ *n**B*), separated by a space.

The third line contains *n**A* numbers *a*1, *a*2, ... *a**n**A* ( - 109 ≤ *a*1 ≤ *a*2 ≤ ... ≤ *a**n**A* ≤ 109), separated by spaces — elements of array *A*.

The fourth line contains *n**B* integers *b*1, *b*2, ... *b**n**B* ( - 109 ≤ *b*1 ≤ *b*2 ≤ ... ≤ *b**n**B* ≤ 109), separated by spaces — elements of array *B*.

## Output

Print "YES" (without the quotes), if you can choose *k* numbers in array *A* and *m* numbers in array *B* so that any number chosen in array *A* was strictly less than any number chosen in array *B*. Otherwise, print "NO" (without the quotes).

## Examples

### Example 1
**Input:**
```
3 3
2 1
1 2 3
3 4 5
```

**Output:**
```
YES
```

## Note

In the first sample test you can, for example, choose numbers 1 and 2 from array *A* and number 3 from array *B* (1 < 3 and 2 < 3).

In the second sample test the only way to choose *k* elements in the first array and *m* elements in the second one is to choose all numbers in both arrays, but then not all the numbers chosen in *A* will be less than all the numbers chosen in *B*: 

![image](https://espresso.codeforces.com/7280148ed5eab0a7d418d4f92b32061243a8ca58.png)

.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
using namespace std;

int main() {
    long long nA,nB,k,m;
    cin >> nA >> nB;
    cin >> k >> m;

    long long A[nA],B[nB];
    for(int i=0; i<nA;i++) cin >> A[i];
    for(int i=0; i<nB;i++) cin >> B[i];

    if(A[k-1] < B[nB-m]) cout <<"YES";
    else cout << "NO";
}

```
