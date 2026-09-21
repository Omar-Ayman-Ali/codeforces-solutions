# [605482D] Regular Bracket Sequence (Easy Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391301293](https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391301293)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 62 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Regular Bracket Sequence (Easy Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/D)
- **Time Limit:** 2.5 seconds
- **Memory Limit:** 256 megabytes

## Description

A bracket sequence is called regular if it is possible to obtain correct arithmetic expressions by inserting characters «+» and «1» into this sequence. For example, sequences «(())()», «()» and «(()(()))» are balance, while «)(», «(()» and «(()))(» are not.

Help me to find if the sequence is regular or not.

## Input

Input consists of a single line with a non-empty string of $«(»$ and $«)»$ characters. Its length does not exceed $10^6$.

## Output

Print $"Yes"$ if the sequence is regular, and $"No"$ otherwise.

## Examples

### Example 1
**Input:**
```
((()())
```

**Output:**
```
No
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

    string s;
    cin >> s;
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            c.push(')');
        else if (c.empty())
        {
            cout << "NO";
            return 0;
        }
        else
        {
            c.pop();
        }
    }
    if (c.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
```
