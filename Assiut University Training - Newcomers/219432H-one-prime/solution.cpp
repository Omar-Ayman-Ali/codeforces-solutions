#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int n;
    cin >> n;
    bool x= true;
    for(int i=2; i < n; i++)
        if( n % i == 0)
            x= false;
    if(x)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}