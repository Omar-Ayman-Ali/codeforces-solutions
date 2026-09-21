#include <iostream>

using namespace std;

#define int long long 
signed main()
{
    int  x;
    int n[10];    
    bool checker = false;
    
    for(int i=0; i < 10; i++)cin >> n[i];
    cin >> x;
    for(int i=0; i < 10; i++)if( x == n[i]) checker = true;

    if(checker) cout << "Found";
    else cout << "Not Found";
}