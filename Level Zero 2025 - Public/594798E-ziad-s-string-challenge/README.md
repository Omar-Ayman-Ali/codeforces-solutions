# [594798E] Ziad's String Challenge

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388835575](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388835575)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Ziad's String Challenge

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/E)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Ziad eld3eef is known for his inability to solve even the simplest problems. He believes that not even you can solve this challenge. Let's see if you're up to the task!

Given a string $s$ of length at most $50$, consisting of a mix of lowercase and uppercase English letters, determine if it is possible to form the word "Yes" using the characters from $s$. You may rearrange the characters if necessary.

If you can form the word "Yes", print "Ziad eld3eef" otherwise, print "Ziad is weak"

## Input

A single line containing the string $s$ ($1\leq |s| \leq 50$).

## Output

Output the corresponding message based on whether the word "Yes" can be formed from $s$.

## Examples

### Example 1
**Input:**
```
Ydfdvsvcde
```

**Output:**
```
Ziad eld3eef
```

## Note

In the test we can find Y in the first index, e in the last index and s in sixth index so we can form "Yes".

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

    string x;
    cin >> x;
    bool y = false, e = false, s = false;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] == 'Y')
            y = true;
        if (x[i] == 's')
            s = true;
        if (x[i] == 'e')
            e = true;
    }
    if (y && s && e)
        cout << "Ziad eld3eef";
    else
        cout << "Ziad is weak";

            return 0;
}
```
