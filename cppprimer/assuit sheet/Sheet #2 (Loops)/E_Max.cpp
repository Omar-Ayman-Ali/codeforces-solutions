#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int t,mx= INT_MIN;
    cin >> t;
    while(t--)
    {
        long long x; 
        cin >> x;
        mx=max(mx,x);
    }
    cout << mx;

    return 0;
}