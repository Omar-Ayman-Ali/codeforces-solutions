#include <iostream>

using namespace std;

int main ()
{
    int n,x ,z ;
    int highJump =0;
    int lowJump =0;

    cin >> n;
    cin >> z;
    for(int i=0; i < n-1; i++)
    {
        cin >> x;
        if(x>z )highJump++;
        else if(x < z ) lowJump++;
        z=x;
    }
    cout << highJump << ' ' << lowJump;
}