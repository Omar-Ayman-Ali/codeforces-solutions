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
    int n, x = 1, y = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
            cout << ' ';
        for (int j = 0; j < x; j++)
            cout << '*';
        cout << endl;
        x += 2;
    }
    for (int i = n; i >= 0; i--)
    {
                x -= 2;

        for (int j = n ; j > i; j--)
            cout << ' ';
        for (int j = x; j > 0; j--)
            cout << '*';
        cout << endl;
    }
}