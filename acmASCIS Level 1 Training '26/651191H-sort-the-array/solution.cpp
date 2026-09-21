#include <iostream>
#include <algorithm>
using namespace std;

signed main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0;i<n;i++)cin>>arr[i];

    int L = 0 , R = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            L = i;
            break;
        }
    }

    for(int i = L ; i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            R = i+1;
        }
    }

    reverse(arr+L,arr+R+1);
    bool sorted = true;
    for(int i = 0;i<n-1;i++){
        sorted &= (arr[i]<arr[i+1]);
    }
    
    if(sorted){
        cout<<"yes\n";
        cout<<L+1<<" "<<R+1<<"\n";
    }else cout<<"no\n";
}