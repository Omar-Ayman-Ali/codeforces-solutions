# [219432N] Numbers Histogram

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N)
- **Submission ID:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387882329](https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/387882329)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# Numbers Histogram

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N)

## Description

# N. Numbers Histogram

- **Problem Link:** [https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N](https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given 3 lines of input described as follow:

1. First line contains a symbol $S$.
2. Second line contains a number $N$.
3. Third line contains $N$ numbers.

For each number $X_i$ in the $N$ numbers print a new line that contains the symbol $S$ repeated $X_i$ time.

## Input

The first line contains a symbol $S$ can be $(+, -, *, /)$.

The second line an number $N$ $(1 \leq N \leq 50)$.

The third line contains $N$ numbers $(1 \leq X_i \leq 100)$.

## Output

Print the answer required above.

## Examples

### Example 1
**Input:**
```
+
5
5 2 4 3 7
```

**Output:**
```
+++++
++
++++
+++
+++++++
```

## Note

Don't print any extra spaces after symbol $S$.

## Examples

### Example 1
**Input:**
```
+
5
5 2 4 3 7
```

**Output:**
```
+++++
++
++++
+++
+++++++
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
    int n, x;
    cin >> c >> n;
    while (n--)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
            cout << c;
        cout << endl;
    }
    return 0;
}
```
