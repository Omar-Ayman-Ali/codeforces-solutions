#include <iostream>

using namespace std;

#define int long long
signed main()
{
    int n, x, y, x1, x2, y1, y2;
    bool c = true;
    cin >> n;

    cin >> x1 >> y1 >> x2 >> y2;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x >> y;
        if((y-y1)*(x2 - x1) != (y2-y1)*(x-x1))
            {
                c =false;
                break;
            }
    }
    if(c)
        cout <<"YES";
    else
        cout << "NO";
    
}