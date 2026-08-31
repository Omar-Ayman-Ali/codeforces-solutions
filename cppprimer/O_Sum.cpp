#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    ll t;
    cin>> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(max({a,b,c}) - (min({a,b,c}) + (a+b+c -(min({a,b,c})+max({a,b,c})))) == 0)
            cout << "YES" <<endl;
        else
            cout <<"NO"<<endl;
    }

    return 0;
}