#include <iostream>
#include <algorithm>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >>n;
    int arr1[n];
    for(int i=0; i < n; i++)
        cin >> arr1[i];
        sort(arr1,arr1 + n);
    cout << arr1[n-1] -arr1[n-2];
}