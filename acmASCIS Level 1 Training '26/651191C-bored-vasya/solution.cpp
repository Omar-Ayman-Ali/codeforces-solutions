#include <iostream>
#include <algorithm>

using namespace std; 
#define int long long 
signed main()
{
    int n,m;int k=0;
    cin >> n >> m;
    int arr1[m];
    
    
    for(int i=0; i < m; i++) cin >> arr1[i];

    for(int i=0; i < m ; i++)
    {
        if(arr1[i] % n ==0) k++;
    }

    int arr2[k];
    int z=0;
    for(int i=0; i < m ; i++)
    {
        if(arr1[i] % n ==0)
         {    
            arr2[z] =i +1;
            z++;
        }
    }
    cout << k << endl;
    reverse(arr2, arr2 + k);
    for(int i=0; i < k ; i++) cout << arr2[i] << ' ';
    
}