# [219158A] Say Hello With C++

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385503516](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385503516)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Say Hello With C++

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A)

## Description

# A. Say Hello With C++

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a name *S*. Print "Hello, (name)" without parentheses.

## Input

Only one line containing a string *S*.

## Output

Print "Hello, " without quotes, then print name.

## Examples

### Example 1
**Input:**
```
programmer
```

**Output:**
```
Hello, programmer
```

## Examples

### Example 1
**Input:**
```
programmer
```

**Output:**
```
Hello, programmer
```

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin >> x;
    cout << "Hello, " << x;
}
```
