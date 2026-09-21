# [651187E] Pascal's Triangle

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/350099733](https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/350099733)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Pascal's Triangle

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/E)
- **Time Limit:** 2 seconds
- **Memory Limit:** 64 megabytes

## Description

Jack and John Were having a break from studying, they like competing together too much . John knew about a very Interesting Number Pattern which is called Pascal's Triangle, he explained it to Jack.

In Pascal's Triangle element *x**ij* is located in row i, column j and its value is C(i, j) where C(i, j) equals to the number of combinations of j objects chosen from i objects without repetition.

He challenged Jack that he will give him *n* And his task is to write first *n* rows from pascal's triangle in fastest time he could, Can you help him do that easy task?

## Input

Only line of input Contains integer *n* Where 1  ≤  *n*  ≤  60.

## Output

Print the first *n* rows of Pascal's Triangle.

## Examples

### Example 1
**Input:**
```
4
```

**Output:**
```
1 
1 1 
1 2 1 
1 3 3 1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
    #include <iostream>
    #include <cmath>
    using namespace std;

    #define int long long

    signed main()
    {
    int n;
    cin >> n;
    int arr1[n][n] = {};

        for(int i=0; i <n ;i++)
        {
            arr1[0][0] =1;
            for(int j=0; j<n;j++)
            {
            if(j == 0 || j == i)
                arr1[i][j] = 1;
            else
                arr1[i][j] = arr1[i-1][j-1] + arr1[i-1][j];

            }
        }
        for(int i=0; i <n;i++)
        {
            for(int j = 0; j <= i; j++)
                cout << arr1[i][j] << ' ';
            
                
            
                    cout << endl;

        }
    }
```
