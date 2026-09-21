# [326175C] Next Alphabet

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386530483](https://codeforces.com/group/MWSDmqGsZm/contest/326175/submission/386530483)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Next Alphabet

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C)

## Description

# C. Next Alphabet

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C](https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given a lowercase alphabet character. You have to print the next character in the alphabet.

## Input

Only one line containing a lowercase English letter $C$.

## Output

Print the next letter to $C$ in the alphabet.

## Examples

### Example 1
**Input:**
```
a
```

**Output:**
```
b
```

## Note

The next letter to z is a.

## Examples

### Example 1
**Input:**
```
a
```

**Output:**
```
b
```

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

    char c;
    cin >> c;
    if (c == 'z')
        cout << 'a';
    else
    {
        int x = c;
        x++;
        c= x;
        cout << c;
    }
    return 0;
}
```
