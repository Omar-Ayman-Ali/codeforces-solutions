# [651187D] Lucky Number Checker

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/D)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349548386](https://codeforces.com/group/tTJnpKpFzH/contest/651187/submission/349548386)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Lucky Number Checker

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/D](https://codeforces.com/group/tTJnpKpFzH/contest/651187/problem/D)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

We need a clever programmer to help us with our new checker. A checker is a program that checks some conditions.

Our checker's duty is to check an integer number with $n$ digits whether it's a lucky number or not.

It checks if the number is lucky according to the following criteria: it must be an even number and doesn't contain any digits other than $6, 3$ and $9$.

## Input

The first line of input contains an integer number $n \, (1 \leq n \leq 10^3)$ — the number of digits in the number that needs to be checked.

The following line contains the number itself.

## Output

If the number is lucky print "YES", and "NO" otherwise.

You can print each letter in any case (upper or lower).

## Examples

### Example 1
**Input:**
```
8
69366963
```

**Output:**
```
NO
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char arr1[n];
   
    
    for(int i =0; i < n; i++)
    {
        cin >> arr1[i];
        if (arr1[i] != '6' && arr1[i] != '3' && arr1[i] != '9')
        {   
            cout << "NO";
            return 0;
        }        
 }
         int s=n-1;

  if(arr1[s] == '6') cout << "YES";
    else cout << "NO";
    }
   
   
```
