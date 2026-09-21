# [651191F] Test #1

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/F)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351063250](https://codeforces.com/group/tTJnpKpFzH/contest/651191/submission/351063250)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 77 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# F. Test #1

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/F](https://codeforces.com/group/tTJnpKpFzH/contest/651191/problem/F)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

One day "*Slifer*" and "*Obelisk*" decided to have another teammate in there next competition so "*Ra*" asked them to join.

"*Slifer*" and "*Obelisk*" give "*Ra*" an *n* X *n* grid and asked him what is the maximum sum of elements that form a *k* X *k* square.

## Input

The first line contain 2 integers *n* , *k* (1 ≤ *k* ≤ *n* ≤ 50).

There are *n* lines contains *n* integers *a**i**j* (1 ≤ *a**i**j* ≤ 106). elements of the grid.

## Output

In one line print the maximum sum of elements that form a *k* X *k* square.

## Examples

### Example 1
**Input:**
```
4 2
2 2 2 1
2 1 1 1
1 2 1 1
1 1 1 1
```

**Output:**
```
7
```

## Note

In the sample the maximum sum of elements that form a *k* X *k* square is

2 2

2 1

equals to 7

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
    #include <iostream>

    using namespace std;

    #define int long long
    signed main ()
    {
        int n,k,ans,z,a,b;
        int sum =0;
        ans =0;
        cin >> n >> k;
        z=n;
        int arr1[n][n];
        for(int i=0; i < n; i++)for(int j=0; j < n ; j++) cin >> arr1[i][j];

        
            
                for(int i =0; i < n; i++)  
                {
                    for(int j=0; j <n ; j++)
                    {
                     sum=0;
                          for(int a = i; a < i+k and i+k-1<n; a++)
                            {
                            for(int b = j; b < j+k and j+k-1<n;b++)
                                    {
                                   sum+=arr1[a][b];
                                     }
                                        
                            }
                                          ans = max(ans,sum);

                    }
                
                

           }
           cout << ans;
        }
```
