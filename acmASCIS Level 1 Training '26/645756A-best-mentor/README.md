# [645756A] Best Mentor

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/347459080](https://codeforces.com/group/tTJnpKpFzH/contest/645756/submission/347459080)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 93 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Best Mentor

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/645756/problem/A)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 4 megabytes

## Description

After the recruitment of $acmASCIS$ ended, the $highboard$ decided to evaluate the newcomers using a new rating system.

The $highboard$ was so generous that they decided to test the ID number of each newcomer to use the results of this test in the rating system, so the new rating system works as follows:

1. The ID number which is a palindrome and could be divided by its sum of digits will be rated as Best mentor.
2. The ID number which is a palindrome and couldn't be divided by its sum of digits $or$ could be divided by its sum of digits and is not a palindrome will be rated as He's good.
3. The ID number which is not a palindrome and couldn't be divided by its sum of digits will be rated as He'll be fired.

## Input

The input consists of only one integer ID $(1 \leq ID \leq 10^{18})$.

## Output

If the ID matches the $1^{st}$ case print "Best mentor." (without the quotes), else if it matches the $2^{nd}$ case print "He's good." (without the quotes), else print "He'll be fired." (without the quotes).

## Examples

### Example 1
**Input:**
```
2112
```

**Output:**
```
Best mentor.
```

## Note

A palindromic number is a number that is the same when written forwards or backwards, $2113112, 454$ and $67876$ are palindromes while $1234, 54$ and $2142$ are not.

Examples on the mentioned cases in the statement:

For case $1$: $ID = 2112$ is a $palindrome$ as we can read it from left to right the same as from right to left and the sum of its digits is $6$ and $2112$ is $divisible$ by $6$.

For case $2$: $ID = 4664$ is a $palindrome$ but isn't $divisible$ by its sum of digits.

For case $3$: $ID = 41$ is not a $palindrome$ and is not $divisible$ by its sum of digits.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long id;
    cin >> id;
    long long  y =0;
    long long x =0;
    long long z =id;
    long long a =0;
    long long  n =id;
    long long b = 0;
    while(n>0)
    {
        x = n %10;
        y = y * 10 +x;
        n = n /10;
    }
     while(z>0)
     {
        x = z % 10;
        a = a+x; 
        z = z /10;
     }   
     b = id %a;   
     if(id == y and b == 0)
        {
            cout << "Best mentor.";
        }
        else if (id != y and b == 0 or id == y and b != 0 )
        {
            cout << "He's good.";
        }
        else if(id != y and b != 0)
        {
            cout << "He'll be fired.";
        }
        }
```
