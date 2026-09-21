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
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n],
            freq[999999] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        bool z = false;
        for (int i = 0; i < n; i++)
        {
            if (freq[arr[i]] >= 3)
            {
                cout << arr[i] << '\n';
                z = true;
                break;
            }
        }
        if (!z)
            cout << -1 << '\n';
    }
    return 0;
}