#include <iostream>

using namespace std;

int main()
{
    int t,k,z;

    cin >> t;
    for(int i =0; i < t ; i++)
    {
        cin >> k;
        int x=0;
        for(int y = 1; y <= k; y++)
        {
            if(k % y == 0)
            {
                x++;
            // 1 2 3
            }
        
        }
        cout << x<<endl;
    }
}