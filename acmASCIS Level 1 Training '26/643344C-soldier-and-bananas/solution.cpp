#include <iostream>

using namespace std;

int main()
{               
    int k,n,w,b;
    cin >> k>>n>>w;
    b = (w*k*(w+1))/2;
    if(n >= b){
        cout << 0;
    }
    else{
    cout << b-n ;}
}