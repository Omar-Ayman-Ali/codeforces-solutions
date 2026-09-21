# [645751C] Counting Gifts

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/C)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346127481](https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/346127481)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# C. Counting Gifts

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/C](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

Today is Ali's Birthday. His friends bought him some gifts; toys, electronics, books and some CDs. Help him know the number of gifts he received in each category.

## Input

First line contains an integer $N$ $(1 \leq N \leq 100)$ – the number of gifts Ali received.

The second line is a string of length $N$ consisting only of these four lowercase letters $(t, e, b, $ and $ c)$ which represents (toys, electronics, books and CDs).

## Output

Print four integers indicating the number of toys, electronics, books and CDs, respectively.

## Examples

### Example 1
**Input:**
```
5
ttecb
```

**Output:**
```
2 1 1 1
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    int n;
    int  t = 0;
    int  e=0;
    int c=0;
    int b=0;
    char l;
    cin >> n;
    for(int i = 0; i < n ;i++)
    {
        cin >> l;
        if(l == 't')
        {
            t++;
        }
       else if(l == 'e')
        {
            e++;
        }
        else if(l == 'c')
        {
            c++;
        }   
        else if(l == 'b')
        {
            b++;
        }
    }
    cout << t <<" " << e <<" "<< b<<" "<< c;
}

```
