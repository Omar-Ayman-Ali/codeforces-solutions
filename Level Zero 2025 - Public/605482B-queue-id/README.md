# [605482B] Queue ID

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/B)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391298075](https://codeforces.com/group/vtfsyP8jkN/contest/605482/submission/391298075)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# B. Queue ID

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/B](https://codeforces.com/group/vtfsyP8jkN/contest/605482/problem/B)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Given (t) test cases, each one contains id and number (n).

if id = 1, push number (n) to queue.

else if id = 2 and queue is empty, print (no)

else if id = 2 and queue is not empty, remove number from queue, and check if that number equal to the number (n) print (yes) else print (no).

## Input

t (1≤t≤$10^3$) — the number of test cases. Description of each test follows.

(1≤id≤2), (1≤n≤$10^3$). id, number(n).

## Output

print the output due to the conditions.

## Examples

### Example 1
**Input:**
```
4
1 32
1 77
2 77
1 332
```

**Output:**
```
no
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
    queue<int> q;
    cin >> t;
    while (t--)
    {
        int id, n;
        cin >> id >> n;
        if (id == 1)
            q.push(n);
        else if (id == 2 && q.empty())
        {
            cout << "no\n";
        }
        else
        {
            int x = q.front();
            q.pop();
            if (x == n)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }

    return 0;
}
```
