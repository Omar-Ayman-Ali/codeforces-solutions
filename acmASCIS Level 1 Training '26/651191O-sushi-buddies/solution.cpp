#include <iostream>
#include <algorithm>

using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    int a[n];

    for(int i=0; i < n; i++) {
        cin>> a[i];
    }

    for(int i=0; i < n ; i++)
    {
        for(int j =i+1; j < n; j++) {
            if(a[i] == a[j]) {
                a[j] = 1;
            }
        }
    }

    long long x = 1;
    
    for(int i=n-1; i >= 0 ; i--) {
        x = x * a[i];
    }
    cout << x; 

}