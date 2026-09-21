#include <iostream>

using namespace std;

int main()
{
    int a,n;
    int b =0;
    cin >> n;
    for(int i=0; i < n; i++)
    {
        cin>>a;
        if(a % 2==0)
        {
            b+=a;
        }
    }
    cout << b;
}