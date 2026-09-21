# [656521A] Cubic Queries

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/submission/352129644](https://codeforces.com/group/tTJnpKpFzH/contest/656521/submission/352129644)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 171 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# A. Cubic Queries

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/656521/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

You are given an array $a$ consisting of $n$ positive integers. Define a function $f(x)$ = $x^3$ $+$ $x^2$ $+$ $x$.

Your task is to process $q$ queries. Each query contains a single integer $w$. For each query, determine whether there exists an element $a_i$ in the array such that $f(a_i)$ $=$ $w$. For every query, output "YES" if such an element exists, otherwise output "NO".

## Input

The first line contains a single integer $n$ ($1 \le n \le 2 \cdot 10^5$).

The second line contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \le a_i \le 10^6$).

The third line contains a single integer $q$ ($1 \le q \le 2 \cdot 10^5$).

Each of the following $q$ lines contains a single integer $w$ ($1 \le w \le 2 \cdot 10^{18}$).

## Output

For each query, print "YES" if there exists an element $a_i$ in the array where $f(a_i)$ $=$ $w$, else print "NO".

## Examples

### Example 1
**Input:**
```
5
1 5 9 13 2
3
13
3
155
```

**Output:**
```
NO
YES
YES
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arrSize,q,w;
    cin >> arrSize;
    int arr1[arrSize];
    for(int i=0; i < arrSize; i++)
        cin >> arr1[i];
        sort(arr1, arr1 + arrSize);
        cin >>q;

      
        while(q--)
        {
        int l,r;
        l=0; 
        r= arrSize-1;
        bool checker = false;
        cin >> w;

        while(l <=r)
            {
                int mid = l + (r-l)/2;
                int z= arr1[mid]*arr1[mid]*arr1[mid]+arr1[mid]*arr1
                [mid]+arr1[mid];
                if(z == w)
                    {
                        checker =true;
                        break;
                    }
                    else if(z > w)
                        r= mid -1;
                        else    
                            l =mid +1;
                        
            }
            if(checker)
                cout <<"YES"<<endl;
                else
                cout <<"NO"<<endl;
        }


}

```
