# [219158J] Multiples

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385519140](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385519140)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Multiples

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)

## Description

# J. Multiples

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given two numbers *A* and *B*. Print "Multiples" if *A* is multiple of *B* or vice versa. Otherwise print "No Multiples".

## Input

Only one line containing two numbers *A*, *B* (1  ≤  *A*, *B*  ≤  106)

## Output

Print the "Multiples" or "No Multiples" corresponding to the read numbers.

## Examples

### Example 1
**Input:**
```
9 3
```

**Output:**
```
Multiples
```

## Note

****A* is said to be Multiple of *B* if *B* is divisible by *A*.

First Example :

9 is divisible by 3 , So the answer is: Multiples.

Second Example :

6 is not divisible by 24 but

24 is divisible by 6 , So the answer is: Multiples.

Third Example :

12 is not divisible by 5 and 5 is not divisible by 12.

So the answer is: No Multiples.

## Examples

### Example 1
**Input:**
```
9 3
```

**Output:**
```
Multiples
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    if (x % y == 0 || y % x == 0)
        cout << "Multiples";
    else
        cout << "No Multiples";
}
```
