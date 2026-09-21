# [110A] Nearly Lucky Number

- **Problem Link:** [https://codeforces.com/contest/110/problem/A](https://codeforces.com/contest/110/problem/A)
- **Submission ID:** [https://codeforces.com/contest/110/submission/380161694](https://codeforces.com/contest/110/submission/380161694)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++17 (GCC 7-32)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Nearly Lucky Number

- **Problem Link:** [https://codeforces.com/contest/110/problem/A](https://codeforces.com/contest/110/problem/A)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number *n* is a nearly lucky number.

## Input

The only line contains an integer *n* (1 ≤ *n* ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.

## Output

Print on the single line "YES" if *n* is a nearly lucky number. Otherwise, print "NO" (without the quotes).

## Examples

### Example 1
**Input:**
```
40047
```

**Output:**
```
NO
```

## Note

In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "NO".

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    long long x;
    cin >> x;
    if (x == 4 or x == 7)
    {
        cout << "NO";
        return 0;
    }
    int cntr =0;
    while (x != 0)
    {
        long long digit = x % 10;
        if (digit == 7 or digit == 4)
            cntr++;
        x /= 10;
    }
    if(cntr == 4 or cntr == 7)
        cout << "YES";
    else 
        cout << "NO";
}
```
