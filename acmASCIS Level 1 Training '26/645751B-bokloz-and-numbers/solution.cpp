#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    long long  n,l,m,b;
    cin >> n;
    m = LLONG_MIN;
    for(int x = 1; x<=n; x++)
    {
        cin >> l;
        if(l > m)
        {
            m =l;
        }
        else{
            m =m;
        }
    }
    cout << m<<endl;    
}