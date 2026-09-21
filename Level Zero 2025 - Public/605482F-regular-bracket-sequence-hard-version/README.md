# [605482F] Regular Bracket Sequence (Hard Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/F)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391304468](https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391304468)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# F. Regular Bracket Sequence (Hard Version)

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/F)
- **Time Limit:** 2.5 seconds
- **Memory Limit:** 256 megabytes

## Description

$This is the hard version of the problem. The only difference is that in this version the string may contain "{","["," \lt " and "(".$

A bracket sequence is called regular if it is possible to obtain correct arithmetic expressions by inserting characters «+» and «1» into this sequence. For example, sequences «({})<>», «[]» and «(<>)» are regular, while «)(», «><» and «(<{>}(» are not.

Help me to find if the sequence is regular or not.

## Input

Input consists of a single line with a non-empty string. Its length does not exceed $10^6$.

## Output

Print $"Yes"$ if the sequence is regular, and $"No"$ otherwise.

## Examples

### Example 1
**Input:**
```
{()}[<>]
```

**Output:**
```
Yes
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
        else if (s[i] == '{')
            c.push('}');
        else if (s[i] == '<')
            c.push('>');
        else if (s[i] == '[')
            c.push(']');

        else if (c.empty() || s[i] != c.top())
        {
            cout << "No";
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
