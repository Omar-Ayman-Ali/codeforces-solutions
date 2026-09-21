#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int r,g,b;
    r =0;
    g = 0;
    b = 0;
 
    char x[101]{};
    for(int i=0; i < 101; i++)
        cin >> x[i];
    for(int i=0; i < 101; i++)
        {
            if(x[i] == 'R')
                r++;
            else if(x[i] == 'G')
                g++;
                else if(x[i] == 'B')
                    b++;
        }
        cout << "Red stones = " << r << "\n" << "Blue stones = " << b << "\n" << "Green stones = " << g << "\n";

}