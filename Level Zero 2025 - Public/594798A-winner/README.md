# [594798A] Winner!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/A)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388822840](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388822840)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# A. Winner!

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/A](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/A)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Adham and Samer are playing a game , The winner is the one who has higher number of points.

You will be given two numbers $A$ and $S$ , Adham's points and Samer's points.

Print the winner of the game. if Samer is the winner print "Samer is the winner" , otherwise print "Adham is the winner".

## Input

Two integers $A$ and $S$ , $(1 \leq A , S \leq 100)$ , $A \neq S$.

## Output

Print the desired output.

## Examples

### Example 1
**Input:**
```
5 9
```

**Output:**
```
Samer is the winner
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

    int x, y;
    cin >> x >> y;
    if (x > y)
        cout << "Adham is the winner";
    else
        cout << "Samer is the winner";

    return 0;
}
```
