# [596853G] My Last Sorting Problem

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/G)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389095009](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389095009)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 140 ms
- **Memory Consumed:** 5500 KB

## Problem Statement

# G. My Last Sorting Problem

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/G)
- **Time Limit:** 2 s.
- **Memory Limit:** 512 MB

## Description

3amasha and El-Abeh were given an assignment to tidy up their bookshelf of $n$ books. Each book is represented by the book title — a string $s_i$ numbered from $1$ to $n$, each with length $m$. 3amasha really wants to sort the book in ascending order according to their name, while El-Abeh wants to sort it in descending order according to their name.

Settling their fight, they decided to combine their idea and sort it asc-desc-endingly, where the odd-indexed characters will be compared ascendingly, and the even-indexed characters will be compared descendingly.

A string $a$ occurs before a string $b$ in asc-desc-ending order if and only if in the first position where $a$ and $b$ differ, the following holds:

- if it is an odd position, the string $a$ has a letter that appears earlier in the alphabet than the corresponding letter in $b$;
- if it is an even position, the string $a$ has a letter that appears later in the alphabet than the corresponding letter in $b$.

## Input

The first line contains two integers $n$ and $m$ ($1 \leq n \cdot m \leq 10^6$).

The $i$-th of the next $n$ lines contains a string $s_i$ consisting of $m$ uppercase Latin letters — the book title. The strings are pairwise distinct.

## Output

Output $n$ integers — the indices of the strings after they are sorted asc-desc-endingly.

## Examples

### Example 1
**Input:**
```
5 2
AA
AB
BB
BA
AZ
```

**Output:**
```
5 2 1 3 4
```

## Note

The following illustrates the first example.

![image](https://espresso.codeforces.com/fdb08c6639d17941c538ade36ceffd0bb810320d.png)

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
int n, m;
struct book
{
    string title;
    int index;
};
bool cmp(book &b1, book &b2)
{
    string s1 = b1.title;
    string s2 = b2.title;
    for (int i = 0; i < m; i++)
    {
        if (s1[i] == s2[i])
            continue;
        if (i % 2 == 0)
            return s1[i] < s2[i];
        else
            return s1[i] > s2[i];
    }
}
void solve()
{
    cin >> n >> m;
    book arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].title;
        arr[i].index = i + 1;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].index << ' ';
    }
}
int main()
{
    fast;
    solve();
    return 0;
}
```
