#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
     long long  P1,P2,P3,N1,N2,N3,X;
     long long sum;
     long long l = 0;
    cin >> P1>>P2>> P3>> N1>> N2 >> N3>>X;
    sum = N1+N2+N3; 
    if(P1 > X)
    {
        l += N1;
    }
    if( P2 > X)
    {
        l += N2;
    }
     if( P3 >X)
    {
        l += N3;
    }
       cout   <<fixed << setprecision(6)<< (double)l / sum;
 
}
