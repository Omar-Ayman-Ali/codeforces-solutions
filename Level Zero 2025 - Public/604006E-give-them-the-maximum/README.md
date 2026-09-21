# [604006E] Give them the maximum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/E)
- **Submission ID:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389132032](https://codeforces.com/group/vtfsyP8jkN/contest/604006/submission/389132032)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 281 ms
- **Memory Consumed:** 100 KB

## Problem Statement

# E. Give them the maximum

- **Problem Link:** [https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/E](https://codeforces.com/group/vtfsyP8jkN/contest/604006/problem/E)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

Baby Omar's birthday party is near, so his brother Mina wants to give him a big amount of games as possible as, he went to a big mall which contains $n$ games, the cost of each is $0$, there are $a_i$ copies of game $i$.

If Mina allowed to get all the games of type between $l$ and $r$, what is the maximum number of games he can get?

Given an array a of size $n$, and $q$ queries, each query contains two integers $l$ and $r$, find the maximum number Mina can get in the range $l$, $r$?

## Input

The first line contains two integers $n$, and $q$ $(1  \lt = n, q  \lt = 10^5)$.

The next line contains array $a$ of $n$ integers $(1  \lt = a_i  \lt = 10^9)$.

The next $q$ queries contains two integers $l$ and $r$ $(1  \lt = l  \lt = r  \lt = n)$.

## Output

Print the answer of each query.

## Examples

### Example 1
**Input:**
```
5 3
2 1 3 5 2
1 1
3 3
5 5
```

**Output:**
```
2
3
2
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
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for (ll i = 0; i < n; i++)
        cin >> arr[i];
    for (ll i = 0; i < q; i++)
    {
        ll l, r, sum = 0;
        cin >> l >> r;
        for (ll j = l ; j <= r; j++)
        {
            sum += arr[j-1];
        }
        cout << sum << endl;
    }
}

int main()
{
    fast;
    solve();
    return 0;
}
```
