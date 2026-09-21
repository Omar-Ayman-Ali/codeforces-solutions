#include <iostream>

using namespace std;

int main()
{
    int n;int counter =0;
    char b;

    cin >>n;
    for(int i=0; i<n; i++)
    {
        cin >> b;
        if(b == '*')counter++;
        else if(b == '>') counter = counter +2;
        if( counter > 20)
        {
            counter =counter -20;
        }
    }
    cout << counter;
}