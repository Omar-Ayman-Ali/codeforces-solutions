#include <iostream>

using namespace std;

int main()
{
    long long n = 0, r = 0, x = 0, b = 0, m = 0, z = 0, i;
   
    cin >> n;
    cin >> r;
    for(i=1; i<=n;i++)
    {
        
        cin >> x;
      
        if(x == r && z == 0)
        {
            b = i;
            z++;
        }
        else if (x == r){
            m=i;
            z++;
        }
}
    
    if(m == 0)
    {
        m=b;
    }
    if(z>=1)
    {
        cout << b <<" " << m <<" "<< z;
    }
    else{
        cout << "-1";
    }
}