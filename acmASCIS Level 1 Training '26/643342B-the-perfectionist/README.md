# [643342B] The Perfectionist

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345200560](https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345200560)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 77 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. The Perfectionist

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/B)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 megabytes

## Description

After $OOZ$ woke up from his sleep, he found out he only had $k$ hours before his exams.

He has $2$ subjects to study. The first subject can be studied in $x$ hours and will give him $a$ marks if studied, the second subject can be studied in $y$ hours and will give him $b$ marks if studied.

$OOZ$ is a perfectionist, so he will either study the whole subject or he won't study that subject at all.

Can you tell $OOZ$ the maximum number of marks he can get if he studied optimally?

## Input

The first line of input contains a single integer $k$ $(1\leq k \leq 100)$ – the number of hours left before the exams.

The second line of input contains two integers $x$,$a$ $(1 \leq x,a \leq 100)$ – the number of hours needed to study the first subject and the number of marks earned if studied.

The third line of input contains two integers $y$,$b$ $(1 \leq y,b \leq 100)$ – the number of hours needed to study the second subject and the number of marks earned if studied.

## Output

Output the maximum number of marks that can be earned.

## Examples

### Example 1
**Input:**
```
5
2 3
4 2
```

**Output:**
```
3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
 
    using namespace std;
 
    int main()
    {
        int k,x,a,y,b;
        cin >> k>> x>> a>> y>> b;
       
        if(k>=x+y)
        {
            cout << b+a;
        }
        else if(k>=x && k>=y  )
        {
            cout << max(a,b);
        }
        else if (k>=x)
        {
         cout << a;         
        }
        else if (k>=y)
        {
        cout << b;         
        }
        else
        {
            cout <<0;
        }
    }
```
