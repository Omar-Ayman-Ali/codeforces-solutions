#include <iostream>

using namespace std;

int main()
{
    int n;
    int  t = 0;
    int  e=0;
    int c=0;
    int b=0;
    char l;
    cin >> n;
    for(int i = 0; i < n ;i++)
    {
        cin >> l;
        if(l == 't')
        {
            t++;
        }
       else if(l == 'e')
        {
            e++;
        }
        else if(l == 'c')
        {
            c++;
        }   
        else if(l == 'b')
        {
            b++;
        }
    }
    cout << t <<" " << e <<" "<< b<<" "<< c;
}
