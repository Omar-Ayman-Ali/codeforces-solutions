# [593212G] Cucurella In El-Genena

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/G)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388773871](https://codeforces.com/group/vtfsyP8jkN/contest/593212/submission/388773871)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 46 ms
- **Memory Consumed:** 0 KB

## Problem Statement

# G. Cucurella In El-Genena

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/G](https://codeforces.com/group/vtfsyP8jkN/contest/593212/problem/G)
- **Time Limit:** 0.5 s
- **Memory Limit:** 256 MB

## Description

[Marc Cucurella](https://en.wikipedia.org/wiki/Marc_Cucurella) is a student at Mansoura University (He works in Chelsea Club as a part-time football player).

Cucurella challenged Mohamed (who lives in [El-Genena](https://www.viamichelin.com/maps/egypt/el_gharbia/el_mahalet_el_kobra/kafr_el_genena_el_qebly-31813)) To solve this problem. But unforitnitly Mohamed is lazy so he wants you to solve it for him.

The problem is that You are given a range represented by two integers L and R , and you should find the sum of the numbers in the range between $L$ and $R$ inclusive.

For example , for $L = 4$ , $R = 8$ , The answer is $4 + 5 + 6 + 7 + 8 = 30$.

## Input

Two integers $L$ , $R$ $(1 \leq L \leq R \leq 10^9)$.

## Output

A single integer representing the sum of the numbers in the range from $L$ to $R$ inclusive.

## Examples

### Example 1
**Input:**
```
4 8
```

**Output:**
```
30
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

    ll x, y;
    cin >> x >> y;
    ll sum1 = x * (x + 1) / 2;
    ll sum2 = y * (y + 1) / 2;

    cout << sum2 - sum1 + x;
    return 0;
}
```
