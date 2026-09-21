# [645751E] I my number

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/E)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346408475](https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346408475)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 1046 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. I my number

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/E](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/E)
- **Time Limit:** 8 seconds
- **Memory Limit:** 64 megabytes

## Description

In Numerania, There are troops of numbers. As we know Numerania's people are identified as numbers. So if a troop consists of *N* people, their values must be *N*.

That is:

A troop containing 2 people is described as follows:

2 2

A troop containing 6 people is described as follows:

6 6 6 6 6 6

Given the number of people in a troop, can you describe it?

## Input

You will be given an integer *T* ( 1  ≤  *T*  ≤  103 ), which indicates the number of troops you are asked to describe.

Then *T* lines will follow each containing one integer *N* ( 1  ≤  *N**i*  ≤  104 ), which indicates the number of people in the *i**th* troop.

## Output

Print *T* lines, each containing the description of the *i**th* troop without extra spaces.

## Examples

### Example 1
**Input:**
```
2
2
6
```

**Output:**
```
2 2
6 6 6 6 6 6
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;
int main()
{
    int t,n;
    cin >>t;
    
    for(int i =0; i<t;i++)
    {
        cin >> n;
    for(int x =0; x<n;x++)
    {
        cout << n;
        if(x<n-1)
        {cout<<" ";
        }
    }
    cout << endl;    
    }
    
}

```
