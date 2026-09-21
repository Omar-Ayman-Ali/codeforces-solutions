# [650565B] Safe

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/B)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/357018088](https://codeforces.com/group/tTJnpKpFzH/contest/650565/submission/357018088)
- **Rating:** 2200
- **Tags:** brute force
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# B. Safe

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/B](https://codeforces.com/group/tTJnpKpFzH/contest/650565/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 64 megabytes

## Description

One night Mr. Steven was watching the TV and suddenly: "A breaking news Bank of New York Mellon Corp has got robbed for few hours” the news anchor said. Mr. Steven is a very rich man and he became so scared of robbing his money. Fortunately, Mr. Steven stored his money in another bank. So he decided to purchase a safe and store his money in. Mr. Steven set the safe to accept the number n such that n is the sum of power of two numbers. In other words n = 20 + 21 + 23 + ... + 2*k* whereas k is a nonnegative integer. For example if Mr. Steven insert 15, the safe will open because 15 = 20 + 21 + 22 + 23. But if he insert 11 the safe will not open because 11 = 20 + 21 + 23, there’s one term missing, which is 22, which makes the number 11 an invalid number to open the safe. Mr. Steven is not good in math he tried to insert the valid number twice. Unfortunately, he has not inserted the valid number yet and he has only one attempt to open the safe. Mr. Steven asks you to help him. He will give a number n, the number that he thinks that it is valid to open the safe and you will tell him “Valid” if it is the valid number. Otherwise tell him “Invalid”.

## Input

The input consists of an integer n (1 ≤ *n* ≤ 109) the number that Mr. Steven thinks that it is valid number.

## Output

Print “Valid” without quotes if n is a valid number. Print “Invalid” without quotes otherwise.

## Examples

### Example 1
**Input:**
```
7
```

**Output:**
```
Valid
```

## Note

In the first sample, 7 = 20 + 21 + 22, so it is a valid number. In the second sample, 8 = 23 , which means that the terms 20, 21 and 22 are not included, which makes 8 an invalid number.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <cmath>

using namespace std;

#define int long long

signed main()
{
    int n, x;
    cin >> n;
    x = 0;
    int i = 0;
    while (x < n)
    {
        x += pow(2, i);
        i++;
    }
    if (x == n)
        cout << "Valid";
    else
        cout << "Invalid";
}
```
