#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,x,w =0;
    x=0;
    cin >> n;
    int m = 0;
    int b[n];

    for(int i =0; i<n;i++)
    {
        cin >> b[i];
        x+=b[i];
    }
   for(int i =0; i<n;i++)
    {
       if(x % b[i] ==0)
       {
        m++;
       }
    }
    if (m == n)
    {
        cout <<"Yes";
    }
    else cout << "No";
}