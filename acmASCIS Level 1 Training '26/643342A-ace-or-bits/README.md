# [643342A] Ace or Bits

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/A)
- **Submission ID:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345097218](https://codeforces.com/group/tTJnpKpFzH/contest/643342/submission/345097218)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Ace or Bits

- **Problem Link:** [https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/A](https://codeforces.com/group/tTJnpKpFzH/contest/643342/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

This time $Onmi-man$ chooses ace, so here is an easy question. He will provide you with either two 1-digit numbers or two lowercase English letters along with a comparison operator.

The operators that $Onmi-man$ may use are: $ \lt $ , $ \gt $ and $=$

## Input

The input will consist of a single line containing two elements (either two numbers or two lowercase English letters) separated by a comparison operator (= , > and <).

## Output

Output a single word.

YES (case-insensitive) if the comparison is true.

NO (case-insensitive) if the comparison is false.

## Examples

### Example 1
**Input:**
```
i > u
```

**Output:**
```
NO
```

## Note

When comparing lowercase English alphabet letters, the comparison will follow their natural alphabetical order.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <iostream>


using namespace std;

int main()
    {
        char x,y,z;
        cin>> x>> y>> z;
        if(y == '<' and x < z)
        {   
            cout << "YES";
        }
        else if(y == '>' and x > z)
        {   
            cout << "YES";
        }
        else if(y == '=' and x == z)
        {   
            cout << "YES";
        }
        else 
        {
            cout << "NO";
        }
    }
```
