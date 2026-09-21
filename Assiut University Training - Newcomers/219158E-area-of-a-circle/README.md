# [219158E] Area of a Circle

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385506916](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385506916)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Area of a Circle

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E)

## Description

# E. Area of a Circle

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/E)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a number *R* calculate the area of a circle using the following formula:

Area = π * *R*2.

Note: consider π = 3.141592653.

## Input

Only one line containing the number *R* (1  ≤  *R*  ≤  100).

## Output

Print the calculated area, with 9 digits after the decimal point.

## Examples

### Example 1
**Input:**
```
2.00
```

**Output:**
```
12.566370612
```

## Note

* Use the data type double for this problem.

** Use setprecision(9) to print 9 digits after decimal point.

*** you can use function setprecision that are in #include<iomanip>  library for Example :

```
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     cout << fixed << setprecision(9);
     // your code.
}
```

## Examples

### Example 1
**Input:**
```
2.00
```

**Output:**
```
12.566370612
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double pi = 3.141592653;
    double r;
    cin >> r;
    cout <<fixed<<setprecision(9)<< r*r*pi;
}
```
