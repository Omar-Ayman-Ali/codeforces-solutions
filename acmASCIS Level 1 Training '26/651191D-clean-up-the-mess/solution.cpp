#include <iostream>
#include <algorithm>

using namespace std;

#define int long long 
signed main()
{
    int n;
    cin >> n;
    char arr1[n];

    for(int i=0; i < n; i++) cin >> arr1[i];

    sort(arr1,arr1 + n);
     for(int i=0; i < n; i++) cout << arr1[i];
}