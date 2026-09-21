#include <iostream> 

using namespace std;
#define int long long
signed main()
{
    int n,x; int sumAll =0 ; bool sum2 = true;
    cin >> n >> x;

    int a[n];
    for(int i=0; i < n ; i++) {
        
        cin >> a[i];
        sumAll+= a[i];
    }
    for(int i=0; i < n-1 ; i++) 
    {
        if((a[i]+a[i+1]) % x != 0 ) sum2 = false;    
    }
    
    if(sumAll % 2 == 0 and sum2) cout << "YES";
    else cout << "NO";
    
}