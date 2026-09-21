# [591913D] Repression

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/D)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677222](https://codeforces.com/group/vtfsyP8jkN/contest/591913/submission/388677222)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# D. Repression

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/D](https://codeforces.com/group/vtfsyP8jkN/contest/591913/problem/D)
- **Time Limit:** 2 seconds
- **Memory Limit:** 256 megabytes

## Description

There are three cards on the desk, each with a positive integer written on it. The integers on the cards are $A$, $B$, and $C$.

You have chosen two cards and picked them up.

Find the maximum possible sum of the integers written on the picked cards.

## Input

$(1 \le A,B,C \le 100)$ All values in input are integers.

## Output

Print the answer as an integer.

## Examples

### Example 1
**Input:**
```
3 4 5
```

**Output:**
```
9
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

    int a, b, c;
    cin >> a >> b >> c;
    cout << a + b + c - min({a, b, c});
}
```
