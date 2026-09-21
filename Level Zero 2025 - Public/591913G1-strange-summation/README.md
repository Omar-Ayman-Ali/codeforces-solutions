# [591913G1] Strange Summation

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G1](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G1)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677442](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677442)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# G1. Strange Summation

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G1](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/G1)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

In ICPC Mansoura Level 0 training. Coaches want you to sum two numbers.

As the numbers are too large and coaches are so kind so far huh :) , They asked you to find the sum of the last digit of each number.

Can you answer this dummy question so we can increase the difficulty level of the problems?

Given two numbers N and M. Print the summation of their last digits.

## Input

Only one line containing two numbers N, M (0 ≤ N, M ≤ $\textbf{10}^\textbf{18}$).

## Output

Print just one line "the answer to the problem".

## Examples

### Example 1
**Input:**
```
12 13
```

**Output:**
```
5
```

## Note

First Example:

The last digit in the first number is 3 and the last digit in the second number is 2.

So the answer is: (3 + 2 = 5)

CAUTION: DON'T GET A WRONG ANWER ON TEST 5!

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    ll n, m;
    cin >> m >> n;
    cout << m % 10 + n % 10;

    return 0;
}
```
