# [594798H] El-Genena Password

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/H)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/389006728](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/389006728)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# H. El-Genena Password

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/H](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/H)
- **Time Limit:** 2 s.
- **Memory Limit:** 256 MB

## Description

Adham wants to open the secret door to El-Genena City, but only Mohamed Sameh knows the real password. To help him, Mohamed gives Adham a hint: a string made up of digits from $0$ to $9$.

Adham can change the string by doing this operation any number of times: he can choose any digit (as long as it is not $0$ or the first digit), decrease it by $1$, and then swap it with the digit immediately to its left. For example, if the hint is $1023$, he can change it to $1103$ or $1022$.

Adham's goal is to get the largest possible string.

Help Adham find the largest string he can obtain by performing these operations any number of times.

- "Largest" means the string that would come last if you sort all strings as in a dictionary. In other words, when comparing two strings digit by digit from left to right, the string with the higher digit at the first place they differ is considered larger.

## Input

The first line of the input consists of an integer $t$ ($1 \le t \le 10^4$)  — the number of test cases.

Each test case consists of a single line consisting of a digital string $s$ ($1 \le |s| \le 2\cdot 10^5$), where $|s|$ denotes the length of $s$. The string does not contain leading zeroes.

It is guaranteed that the sum of $|s|$ of all test cases doesn't exceed $2\cdot 10^5$.

## Output

For each test case, print the answer on a separate line.

## Examples

### Example 1
**Input:**
```
6
19
1709
11555
51476
9876543210
5891917899
```

**Output:**
```
81
6710
33311
55431
9876543210
7875567711
```

## Note

In the first example, the following sequence of operations is suitable: $19 \rightarrow 81$.

In the second example, the following sequence of operations is suitable: $1709 \rightarrow 1780 \rightarrow 6180 \rightarrow 6710$.

In the fourth example, the following sequence of operations is suitable: $51476 \rightarrow 53176 \rightarrow 53616 \rightarrow 53651 \rightarrow 55351 \rightarrow 55431$.

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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            int maxV = s[i], maxI = i;
            for (int j = 1; j < 9 and i + j < s.length(); j++)
            {
                if (maxV < s[i + j] - j)
                {
                    maxV = s[i + j] - j;
                    maxI = i + j;
                }
            }
            for (int j = maxI; j > i; j--)
            {
                s[j]--;
                swap(s[j], s[j - 1]);
            }
        }
        cout << s << endl;
    }

    return 0;
}
```
