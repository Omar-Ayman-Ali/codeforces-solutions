# [645751A] Yan and Maths

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/345929486](https://codeforces.com/group/tTJnpKpFzH/contest/645751/submission/345929486)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 61 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Yan and Maths

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645751/problem/A)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 256 MB

## Description

Yan has just taken a lesson in Mathematics that discusses even and odd numbers. His assignment was to write whether a given number is even or odd. Yan thought that it is very easy, so he made a slight change in the assignment's task. He now wants to count the even and the odd digits in a given number $N.$ Can you solve Yan's new task?

## Input

You will be given an integer $N$ $(1 \leq N \leq 10^{18})$.

## Output

Print $2$ lines. The first contains "Even : $A$" (without quotes) and the second contains "Odd : $B$" (without quotes), where $A$ is the number of even digits in $N$ and $B$ is the number of odd digits in $N.$

Note that no extra spaces are allowed.

## Examples

### Example 1
**Input:**
```
33
```

**Output:**
```
Even : 0
Odd : 2
```

## Note

$33$ has two odd digits which are $3$ and $3$ and it doesn't have any even digits. As for $10$ it has one even digit which is $0$ and one odd digit which is $1.$

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>


using namespace std;

int main ()
{
    long long  n;
    cin >> n;
        int a = 0, b = 0, c;
    while(n > 0)
    {
         c = n % 10;
        if(c % 2 == 0)
        {
            a++;
        }
        else if (c % 2 != 0)
        {
        b++;
        }
     n = n / 10;
    }

    cout << "Even : " <<a<<endl;
    
    cout << "Odd : " <<b<<endl;

}
```
