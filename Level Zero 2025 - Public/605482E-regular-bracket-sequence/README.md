# [605482E] Regular Bracket Sequence

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391302346](https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391302346)
- **Rating:** 1400
- **Tags:** greedy
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 92 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Regular Bracket Sequence

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/E)
- **Time Limit:** 5 seconds
- **Memory Limit:** 256 megabytes
- **Input File:** stdin
- **Output File:** stdout

## Description

A bracket sequence is called regular if it is possible to obtain correct arithmetic expression by inserting characters «+» and «1» into this sequence. For example, sequences «(())()», «()» and «(()(()))» are regular, while «)(», «(()» and «(()))(» are not.

One day Johnny got bracket sequence. He decided to remove some of the brackets from it in order to obtain a regular bracket sequence. What is the maximum length of a regular bracket sequence which can be obtained?

## Input

Input consists of a single line with non-empty string of «(» and «)» characters. Its length does not exceed 106.

## Output

Output the maximum possible length of a regular bracket sequence.

## Examples

### Example 1
**Input:**
```
(()))(
```

**Output:**
```
4
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
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            c.push(')');
        else if (c.empty())
        {
            cnt++;
        }
        else
        {
            c.pop();
        }
    }
    cout << s.size() - (cnt + c.size());

    return 0;
}
```
