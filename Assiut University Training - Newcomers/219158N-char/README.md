# [219158N] Char

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385983234](https://codeforces.com/group/MWSDmqGsZm/contest/219158/submission/385983234)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Char

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)

## Description

# N. Char

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N)
- **Time Limit:** 0.25 seconds
- **Memory Limit:** 64 megabytes

## Description

Given a letter *X*. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

## Input

Only one line containing a character X which will be a capital or small letter.

## Output

Print the answer to this problem.

## Examples

### Example 1
**Input:**
```
a
```

**Output:**
```
A
```

## Examples

### Example 1
**Input:**
```
a
```

**Output:**
```
A
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
    char x;
    cin >> x;
    if (x >= 65 && x <97)
    {
        x = x + 32;
        cout << x;
    }
    else if(x >= 97)
    {
        x = x - 32;
        cout << x;
    }
    return 0;
}
```
