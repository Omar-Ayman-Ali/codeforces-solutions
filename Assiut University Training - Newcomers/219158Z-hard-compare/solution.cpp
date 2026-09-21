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

    unsigned long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    if (b * log(a) > d * log(c))
        cout
            << "YES";
    else
        cout << "NO";

}