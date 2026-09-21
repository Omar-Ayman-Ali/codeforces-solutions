#include <iostream>

using namespace std;

#define int long long 

signed main()
{
    int n,a,b,sum;
    cin >> n >> a >> b;
    int k = n / a;
    sum = (n*(n+1))/2 - a*(k*(k+1))/2 + k*b + (k*(k-1))/2;
    cout << sum;
}