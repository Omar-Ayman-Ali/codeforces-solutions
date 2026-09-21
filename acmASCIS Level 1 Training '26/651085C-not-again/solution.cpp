#include <iostream>

using namespace std;

int main()
{
long long  n,x;long long counter = 0;
    cin >> n;
    for(int i =0; i < n; i++)
    {
        cin >> x;
        if(  x ==1 )
        {
            counter++;
        }
        else counter =0;
    }
    if(counter == n)
    {
        cout << "HAHA EZ";
    }
    else cout << "Tani ?";
}