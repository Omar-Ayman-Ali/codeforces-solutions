# [596853D] Missed Number

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389087299](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389087299)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 15 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Missed Number

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/D)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

There is an array of $5$ integers. Initially, you only know $a_1,a_2,a_4,a_5$. You may set $a_3$ to any positive integer, negative integer, or zero. The Fibonacciness of the array is the number of integers $i$ ($1 \leq i \leq 3$) such that $a_{i+2}=a_i+a_{i+1}$. Find the maximum Fibonacciness over all integer values of $a_3$.

## Input

The first line contains an integer $t$ ($1 \leq t \leq 500$) — the number of test cases.

The only line of each test case contains four integers $a_1, a_2, a_4, a_5$ ($1 \leq a_i \leq 100$).

## Output

For each test case, output the maximum Fibonacciness on a new line.

## Examples

### Example 1
**Input:**
```
6
1 1 3 5
1 3 2 1
8 10 28 100
100 1 100 1
1 100 1 100
100 100 100 100
```

**Output:**
```
3
2
2
1
1
2
```

## Note

In the first test case, we can set $a_3$ to $2$ to achieve the maximal Fibonacciness of $3$.

In the third test case, it can be shown that $2$ is the maximum Fibonacciness that can be achieved. This can be done by setting $a_3$ to $18$.

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

void f()
{
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int candidates[3] = {a1 + a2, a4 - a2, a5 - a4};
    int max_score = 0;

    for (int i = 0; i < 3; i++)
    {
        int a3 = candidates[i];
        int score = 0;

        if (a3 == a1 + a2)
            score++;
        if (a4 == a2 + a3)
            score++;
        if (a5 == a3 + a4)
            score++;

        max_score = max(max_score, score);
    }
    cout << max_score << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        f();
    }

    return 0;
}
```
