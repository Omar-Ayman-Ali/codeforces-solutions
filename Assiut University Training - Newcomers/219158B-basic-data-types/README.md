# [219158B] Basic Data Types

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385504271](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385504271)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Basic Data Types

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B)

## Description

# B. Basic Data Types

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

The following lines show some C++ data types, their format specifiers and their most common bit widths:

- int : 32 Bit integer.
- long long : 64 bit integer
- Char : 8 bit Characters & symbols
- Float : 32 bit real value
- Double : 64 bit real value

Reading

To read a data type, use the following syntax:

```
cin >> VariableName;
```
 For example, to read a character followed by a double:

```
char ch;
  double d;
  cin >> ch >> d;
```

Printing

To print a data type, use the following syntax:

```
cout << VariableName;
```
 For example, to print a character followed by a double:
```
char ch = 'd';
double d = 234.432;
cout << ch << " "<< d;
```

## Input

Only one line containing the following space-separated values: int, long long, char, float and double respectively.

## Output

Print each element on a new line in the same order it was received as input.

Don't print any extra spaces.

## Examples

### Example 1
**Input:**
```
3 12345678912345 a 334.23 14049.30493
```

**Output:**
```
3
12345678912345
a
334.23
14049.3
```

## Examples

### Example 1
**Input:**
```
3 12345678912345 a 334.23 14049.30493
```

**Output:**
```
3
12345678912345
a
334.23
14049.3
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    long long l;
    char c;
    float f;
    double d;
    cin >> i >> l >> c >> f >> d;
    cout << i << '\n'
         << l << '\n'
         << c << '\n'
         << f << '\n'
         << d;
}
```
