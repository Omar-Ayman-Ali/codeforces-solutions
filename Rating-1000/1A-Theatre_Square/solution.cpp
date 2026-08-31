#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

 long long n,m,a;

 cin >> n >> m >> a;


 cout << ((n+a-1)/a)*((m+a-1)/a);
    return 0;
}