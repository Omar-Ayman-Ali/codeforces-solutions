# [596853C] The Fool Again

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/C)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389012013](https://codeforces.com/group/vtfsyP8jkN/contest/596853/submission/389012013)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# C. The Fool Again

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/C](https://codeforces.com/group/vtfsyP8jkN/contest/596853/problem/C)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Abdullah Hamed -the fool- has three digits $a$, $b$, and $c$.

Since his iq is by negative, he asks you to determine if you can choose any two digits to make a sum greater or equal to $10$.

Output "YES" if there is such a pair, and "NO" otherwise.

## Input

The first line contains a single integer $t$ ($1 \leq t \leq 1000$) — the number of test cases.

The only line of each test case contains three digits $a$, $b$, $c$ ($0 \leq a, b, c \leq 9$).

## Output

For each test case, output "YES" if such a pair exists, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

## Examples

### Example 1
**Input:**
```
5
8 1 2
4 4 5
9 9 9
0 0 0
8 5 3
```

**Output:**
```
YES
NO
YES
NO
YES
```

## Note

For the first test case, by choosing the digits $8$ and $2$ we can obtain a sum of $8 + 2 = 10$ which satisfies the condition, thus the output should be "YES".

For the second test case, any combination of chosen digits won't be at least $10$, thus the output should be "NO" (note that we can not choose the digit on the same position twice).

For the third test case, any combination of chosen digits will have a sum equal to $18$, thus the output should be "YES".

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

bool check(int x, int y, int z)
{
    if (x + y >= 10)
        return true;
    else if (x + z >= 10)
        return true;
    else if (y + z >= 10)
        return true;
    return false;
}
int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (check(x, y, z) == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
```
