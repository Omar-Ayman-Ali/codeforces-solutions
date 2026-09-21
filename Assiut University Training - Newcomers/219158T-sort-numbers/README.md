# [219158T] Sort Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386154596](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/386154596)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Sort Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T)

## Description

# T. Sort Numbers

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 megabytes

## Description

Given three numbers *A*, *B*, *C*. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

## Input

Only one line containing three numbers *A*, *B*, *C* ( - 106  ≤  *A*, *B*, *C*  ≤  106)

## Output

Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.

## Examples

### Example 1
**Input:**
```
3 -2 1
```

**Output:**
```
-2
1
3

3
-2
1
```

## Examples

### Example 1
**Input:**
```
3 -2 1
```

**Output:**
```
-2
1
3

3
-2
1
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
    int x[3];
    for(int i=0; i <3 ; i ++)
        cin >> x[i];
    int z[3];
    for(int i=0; i <3 ; i ++)
        z[i]= x[i];
    sort(x,x+3);
    for(int i=0; i <3 ; i ++)
        cout <<x[i] <<endl;
        cout << endl;
    for(int i=0; i <3 ; i ++)
        cout << z[i] <<endl;
}
```
