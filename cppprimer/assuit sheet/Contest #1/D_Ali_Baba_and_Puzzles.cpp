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

    ll a, b, c, d;
    bool x = false;
    cin >> a >> b >> c >> d;
    if (a + b - c == d)
        x = true;
    else if (a + b * c == d)
        x = true;
    else if (a * b - c == d)
        x = true;
    else if (a * b + c == d)
        x = true;
    else if (a - b + c == d)
        x = true;
    else if(a - b * c == d)
        x = true;


    if(x)
        cout <<"YES";
    else
        cout <<"NO";
    return 0;
}