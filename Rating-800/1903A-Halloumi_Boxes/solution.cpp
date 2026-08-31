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

    int k, n, t;
    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        int arr1[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n; i++)
            arr1[i] = arr[i];

        sort(arr1, arr1 + n);

        bool isSorted = true;
        for (int i = 0; i < n; i++)
            if (arr[i] != arr1[i])
                isSorted = false;

        if (isSorted)
        {
            cout << "YES" << endl;
            continue;
        }
        else if (k <= 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}