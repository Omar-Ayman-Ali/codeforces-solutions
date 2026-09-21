#include <iostream>

using namespace std;

#define int unsigned long long

signed main()
{
    int n,x;
    cin >> n >> x;
    int frq[10]{};
    int frqx[18]{};
    for(int i=0; i < n; i++)
        {
        int z;
            cin >>z; 
        frq[z]++;
        }
                    int edge;

        while(x > 0)
        {
         edge = x%10;
            x /=10;
            frqx[edge]++;
        }
        int m = __LONG_LONG_MAX__;
        for(int i=0; i < 10; i++)
        {
            if(frqx[i]== 0) continue;
            if(frq[i] / frqx[i] < m)
                m = frq[i] / frqx[i];
        }
        cout << m;
    }