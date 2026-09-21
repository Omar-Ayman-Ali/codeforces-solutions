#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int t;
    int arr[7];
    cin >> t;
    while(t--)
    {
        for(int i=0; i < 7; i++)
            cin >> arr[i];

            cout << arr[0] << ' ' << arr[1] << ' ' << arr[6]-arr[0]-arr[1]<<endl;
    }
}