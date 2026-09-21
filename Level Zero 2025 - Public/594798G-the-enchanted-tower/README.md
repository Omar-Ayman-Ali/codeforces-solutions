# [594798G] The Enchanted Tower

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/G)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388858346](https://codeforces.com/group/vtfsyP8jkN/contest/594798/submission/388858346)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 31 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. The Enchanted Tower

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/594798/problem/G)
- **Time Limit:** 1 second
- **Memory Limit:** 256 megabytes

## Description

Once upon a time in the Kingdom of Blocks, there lived a master builder entrusted with a magical challenge. He was given exactly $n$ steps. In each step, he could either add one enchanted block to his tower or remove one block that had lost its charm. His goal? To complete all $n$ moves and finish with a tower exactly $m$ blocks tall. Can the builder master this feat?

## Input

The first line contains two space-separated integers $n$ and $m$ ($1 \le n, m \le 10^{18}$) — the total number of moves available and the desired number of blocks in the tower.

## Output

Print YES if it is possible to build a tower of exactly $m$ blocks in exactly $n$ moves. Otherwise, print NO.

You can output the answer in any case (for example, YES, Yes, yes, etc., are all acceptable)

## Examples

### Example 1
**Input:**
```
5 5
```

**Output:**
```
YES
```

## Note

In the first example, $m$ is 5 and $n$ is 5; the master builder can add the 5 blocks in 5 moves to get a tower of height 5.

In the second example, we can see that it's impossible to build a tower of 6 blocks using only 3 moves.

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

    unsigned long long n, x;
    cin >> n >> x;
    if (n >= x && (n - x) % 2 == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
```
