#include <iostream>
#include <algorithm>
using namespace std;

#define int long long

signed main()
{

    int n;
    cin >> n;
    bool c[101] = {false};

    int p;
    cin >> p;

    for(int i=0; i < p; i++)
        {
            int x;
            cin >> x;
             c[x] = true;
        }
            int q;
            cin >> q;
            for (int i = 0; i < q; i++) 
            {
                int x;
                cin >> x;
                c[x] = true;
            }
            for(int i=1; i <= n; i++)
            {
                if(!c[i])
                {
                    cout <<"Oh, my keyboard!";
                    return 0;
                }
            }
            cout << " I become the guy.";
            }

    