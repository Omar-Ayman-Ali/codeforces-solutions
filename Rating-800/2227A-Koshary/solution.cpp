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

    int t;
    cin >> t;
    int a, b;
    while (t--)
    {
            cin >> a >> b;
            if(a % 2 == 0 or b % 2 == 0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
    }

    return 0;
}