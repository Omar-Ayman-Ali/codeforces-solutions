# [596853E] Mewwwwwwwwo

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389014304](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389014304)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# E. Mewwwwwwwwo

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/E)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

While Menna was busy solving some problems from the previous sheet, she found her cat ,Bana, saying some very wise words: "Meow, Mewo, Mewwwwwwwwo." After translating these wise words, Menna discovered that Bana was giving her a problem to solve.

She is given a binary array a of n elements. (A binary array is an array consisting only of 0s and 1s.)

A blank space is defined as a segment of consecutive elements consisting solely of 0s.

Her task is to find the length of the longest blank space.

Can you help Menna to give her cat what she needs?

## Input

The first line contains a single integer $t$ ($1 \leq t \leq 1000$) — the number of test cases.

The first line of each test case contains a single integer $n$ ($1 \leq n \leq 100$) — the length of the array.

The second line of each test case contains $n$ space-separated integers $a_i$ ($0 \leq a_i \leq 1$) — the elements of the array.

## Output

For each test case, output a single integer — the length of the longest blank space.

## Examples

### Example 1
**Input:**
```
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
```

**Output:**
```
2
1
1
0
3
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

int seg(int i, int a[])
{
    for (int j = 0; j < i; j++)
        cin >> a[j];
    int cntr = 0;
    int m = cntr;
    for (int j = 0; j < i; j++)
    {
        if (a[j] == 0)
            cntr++;
        else
        {
            cntr = 0;
        }
        m = max(cntr, m);
    }
    return m;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        int a[i];
        int x = seg(i, a);
        cout << x << endl;
    }

    return 0;
}
```
