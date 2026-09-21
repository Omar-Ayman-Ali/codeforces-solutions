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