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

    double x;
    cin >> x;
    int z = x;
    x *= 1000;
    int y = x;
    
    if (y % 1000 > 0)
        cout << "float " <<z <<  " 0." << y % 1000;
    else
        cout << "int " << z;
}