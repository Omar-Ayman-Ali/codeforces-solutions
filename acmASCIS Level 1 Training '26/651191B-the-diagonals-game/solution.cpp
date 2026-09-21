#include <iostream>

using namespace std;

signed main ()
{
    int n,c,sumP,sumD,x,y;
    cin >> n;
    int a[n][n];
    x =0;
    y =0;
    sumP =0;
    sumD =0;
    c =n;
    for(int i =0; i <n ; i++)
        {
            for(int j=0; j < n; j++) cin >> a[i][j];
        }
    
        while(n--)
        {
         sumP += a[x][y];     
            ++x;
            ++y;
        }
        x= 0;
        y=c-1;
        while(c--)
        {
         sumD = sumD + a[x][y];     
            ++x;
            --y;
        }
        cout << sumP<<' '<<sumD ;

}