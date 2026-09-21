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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, cntr = 0, tcntr = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
            {
                tcntr++;
            }
        }
        if (tcntr % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        tcntr /= 2;
        for(int i=0 ;i < n; i++)
        {
            if(arr[i] == 2)
                cntr++;
            if(cntr == tcntr )
                {
                    cout << i+1 << endl;
                    break;
                }
        }
    }

    return 0;
}