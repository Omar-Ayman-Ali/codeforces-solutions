#include <iostream>

using namespace std;

#define int long long 

signed main()
{
    bool chcekr = false;
    int n,x;
    int cnt =0;
    cin >> n >> x;
    int arr1[n];

    for(int i = 0; i < n; i++)
        cin >> arr1[i];
        
   for(int i =0; i < n; i++)
    {
        int sum =0;
        for(int j =i; j < n; j++)
        {
            sum += arr1[j];
            if(sum % x == 0)
                {
                    cnt++;
                }
        }
    }
    cout << cnt;
}   