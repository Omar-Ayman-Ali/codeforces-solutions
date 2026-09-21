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

    int n;
    cin >> n;
    int mid = n / 2;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == mid && j == mid)
            {
                cout << 'X';
            }
            else if (i == j)
            {
                cout << '\\';
            }
            else if (i + j == n - 1)
            {
                cout << '/';
            }
            else
            {
                cout << '*';
            }
        }
        cout << '\n';
    }
}
