#include <iostream>

using namespace std;

#define int long long

signed main()
{
    int n;
    bool exist[101] ={false};
    cin >> n;
    int arr[n];
    int l = 0;
    int r = 2;
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            exist[arr[i]] = true;
        }
        for(int i=0; i < n-1; i++)
        {
            int product = arr[i]*arr[i+1];
            if(product > 100 or !exist[product] )
            {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
}
