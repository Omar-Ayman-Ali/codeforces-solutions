#include <iostream>
#include <algorithm>

using namespace std;
#define int long long

signed main()
{
    int n, t, ans,s;
    ans = 0;
    int currentNum = 0;
    int prevCounter = 0;
    int currentCounter = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t == currentNum)
            currentCounter++;
        else
        {
            prevCounter = currentCounter;
            currentCounter = 1;
            currentNum = t;
        }
        s = min(currentCounter, prevCounter);
        ans = max(ans, s);
    }
    cout << ans*2;
}