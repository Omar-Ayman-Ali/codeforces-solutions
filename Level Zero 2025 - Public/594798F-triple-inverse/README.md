# [594798F] Triple Inverse

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/F)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388993304](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388993304)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 203 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# F. Triple Inverse

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/F](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/F)
- **Time Limit:** 2 s
- **Memory Limit:** 256 megabytes

## Description

One day, Amr Elkhodari was setting on his sofa, watching TV, and thinking about his life. He was feeling that he has a bad life that needs some major changes. So, he suddenly stood up and decided to turn his life upside down.

Amr's life is a string $s$ that consists of lowercase letters, uppercase letters, or both. He knows only three ways to change his life

- Change the case of each letter in the string from lowercase to uppercase or vise versa
- Reverse the order of letters in the string
- Replace each letter in the string with its corresponding letter in the reversed English alphabet. That is, 
- 'A' ↔ 'Z', 'B' ↔ 'Y', 'C' ↔ 'X', ..., 'Y' ↔ 'B', 'Z' ↔ 'A'
- 'a' ↔ 'z', 'b' ↔ 'y', 'c' ↔ 'x', ..., 'y' ↔ 'b', 'z' ↔ 'a'

Amr was so excited. So, he decided to apply all the three great changes to his life. Given his old life, can you see how his life now is?

## Input

The first line contains the number $t$ ($1 \leq t \leq 10^3$) — the number of test cases.

The only line of each test case contains a single string $s$ ($1 \leq |s| \leq 10^4$) — Amr's old life

## Output

For each test case, you need to output one string — Amr's new life after applying changes to it

## Examples

### Example 1
**Input:**
```
6
Codeforces
LevelZero
cOMPUTERsCIENCE
prOBLemSolVInG
helloworld
AMRELKHODARI
```

**Output:**
```
HVXILUVWLx
LIVaOVEVo
vxmvrxHivgfknlX
tMreOLhNVoylIK
WOILDLOOVS
rizwlspovinz
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

    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        for (int i = 0; i < x.length(); i++)
        {
            if (isupper(x[i]))
                x[i] = tolower(x[i]);
            else
                x[i] = toupper(x[i]);
        }
        for (int i = 0; i < x.length(); i++)
        {
            if (islower(x[i]))
                x[i] = 'z' - x[i] + 'a';
            else
                x[i] = 'Z' - x[i] + 'A';
        }
        cout << x << endl;
    }
}
```
