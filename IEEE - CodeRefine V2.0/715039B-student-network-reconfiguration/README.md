# [715039B] Student Network Reconfiguration

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/B](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/B)
- **Submission ID:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390186408](https://codeforces.com/group/Wpi4XHshsC/contest/715039/submission/390186408)
- **Rating:** Unrated
- **Tags:** untagged
- **Language:** C++23 (GCC 14-64, msys2)
- **Time Consumed:** 265 ms
- **Memory Consumed:** 4000 KB

## Problem Statement

# B. Student Network Reconfiguration

- **Problem Link:** [https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/B](https://codeforces.com/group/Wpi4XHshsC/contest/715039/problem/B)
- **Time Limit:** 1 s.
- **Memory Limit:** 256 MB

## Description

IEEE-Pulse's learning network has $n$ students connected by $m$ bidirectional connections. No connection connects a student to themselves, and each pair of students is connected by no more than one connection. It is not guaranteed that you can get from any student to any other one, using only the existing connections.

Before the next programming challenge, IEEE-Pulse decided to redesign this connection system and instructed the organizers to carry out the change. Now, each connection should be unidirectional (only lead from one student to another).

In order to keep the community as connected as possible, the change needs to be carried out so that there can be as few isolated students as possible. A student is considered isolated, if no connection leads into them, while it is allowed to have connections leading from this student.

Help the organizers find the minimum possible number of isolated students after the change.

## Input

The first line of the input contains two positive integers, $n$ and $m$ — the number of students and the number of connections in the network ($2 \le n \le 100\,000$, $1 \le m \le 100\,000$).

Next $m$ lines contain the descriptions of the connections: the $i$-th connection is determined by two distinct integers $x_i, y_i$ ($1 \le x_i, y_i \le n$, $x_i \neq y_i$), where $x_i$ and $y_i$ are the numbers of the students connected by the $i$-th connection.

It is guaranteed that there is no more than one connection between each pair of students, but it is not guaranteed that from any student you can get to any other one, using only connections.

## Output

Print a single integer — the minimum number of isolated students after the change.

## Examples

### Example 1
**Input:**
```
4 3
2 1
1 3
4 3
```

**Output:**
```
1
```

## Note

In the first sample the following connection orientation is allowed: $1 \rightarrow 2$, $1 \rightarrow 3$, $3 \rightarrow 4$.

The second sample: $1 \rightarrow 2$, $3 \rightarrow 1$, $2 \rightarrow 3$, $2 \rightarrow 5$, $3 \rightarrow 4$.

The third sample: $1 \rightarrow 2$, $2 \rightarrow 3$, $4 \rightarrow 5$, $5 \rightarrow 6$, $6 \rightarrow 4$.

## Solution

See [`solution.cpp`](./solution.cpp)

```cpp
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> adj;
vector<bool> vis (false);
ll e , node;
void dfs(ll x) {
    vis[x] = true;
    node++;
    for (auto v : adj[x]) {
        e++;
        if (!vis[v]) dfs(v);
    }

}


int main() {
    ll n, m; cin >> n >> m;
    adj.resize(n+1);
    vis.resize(n+1 , false);
    for (ll i = 1; i <= m; i++) {
        ll x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    ll ans =0 ;
    for (ll i = 1; i <= n; i++) {
        if (vis[i]) continue;
        e =0; node=0;
        dfs(i);
        e /=2;
        if (e == node-1) ans++;
    }
     cout << ans << "\n";


    return 0;
}
```
