#include <iostream>
using namespace std;

#define int long long 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while(testcase--)
    {
        int x;
        cin >> x;

        if(x * x > 50 * 50)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
