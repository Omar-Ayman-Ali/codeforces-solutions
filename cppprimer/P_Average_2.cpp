#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    long double  a,b,c;
    cin >> a >> b >> c;
    cout <<fixed <<setprecision(1) << "MEDIA = "<<(a*2+b*3+c*5)/10;

    return 0;
}