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

    char c;
    int n, x;
    cin >> c >> n;
    while (n--)
    {
        cin >> x;
        for (int i = 0; i < x; i++)
            cout << c;
        cout << endl;
    }
    return 0;
}