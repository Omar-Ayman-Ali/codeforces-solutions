#include <iostream>

using namespace std;
#define int long long

signed main()
{
    int t, n, a;
    cin >> t;
    int maxValue, minValue;
    while (t--)
    {
        cin >> n;
        maxValue = LLONG_MIN;
        minValue = LLONG_MAX;
        while (n--)
        {

            cin >> a;
            maxValue = max(a, maxValue);
            minValue = min(a, minValue);
        }
        cout << maxValue - minValue << endl;
    }
}