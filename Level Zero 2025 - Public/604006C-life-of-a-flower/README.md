# [604006C] Life of a Flower

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389107889](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389107889)
- **Rating:** 800
- **Tags:** implementation
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. Life of a Flower

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/C)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Petya has got an interesting flower. Petya is a busy person, so he sometimes forgets to water it. You are given $n$ days from Petya's live and you have to determine what happened with his flower in the end.

The flower grows as follows:

- If the flower isn't watered for two days in a row, it dies.
- If the flower is watered in the $i$-th day, it grows by $1$ centimeter.
- If the flower is watered in the $i$-th and in the $(i-1)$-th day ($i  \gt  1$), then it grows by $5$ centimeters instead of $1$.
- If the flower is not watered in the $i$-th day, it does not grow.

At the beginning of the $1$-st day the flower is $1$ centimeter tall. What is its height after $n$ days?

## Input

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). Description of the test cases follows.

The first line of each test case contains the only integer $n$ ($1 \leq n \leq 100$).

The second line of each test case contains $n$ integers $a_1, a_2, \dots, a_n$ ($a_i = 0$ or $a_i = 1$). If $a_i = 1$, the flower is watered in the $i$-th day, otherwise it is not watered.

## Output

For each test case print a single integer $k$ — the flower's height after $n$ days, or $-1$, if the flower dies.

## Examples

### Example 1
**Input:**
```
4
3
1 0 1
3
0 1 1
4
1 0 0 1
1
0
```

**Output:**
```
3
7
-1
1
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

void solve()
{
    int n, max_cntr = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool state = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1 && arr[i + 1] == 1 && i < n - 1)
        {
            max_cntr += 5;
            state = true;
        }
        else if (arr[i] == 1)
        {
            max_cntr++;
            state = true;
        }

        else if (arr[i] == 0 && arr[i + 1] == 0 && i < n - 1)
        {
            state = false;
            break;
        }
    }
    if (state)
        cout << max_cntr << endl;
    else
        cout << -1 << endl;
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
```
