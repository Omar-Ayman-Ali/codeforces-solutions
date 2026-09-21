#include <iostream>

using namespace std;

int main()
{
bool tru=false;
 int x=0;
 int y=0;
 int t,n;
char t1;

 cin >> t;
    for(int i =0;i < t; i++)
    {
        cin >> n;
    
        for(int l=0; l< n; l++)
        {
                cin >> t1;
                if(t1 == 'U')
                {
                    y++;
                }
                else if(t1 == 'D')
                {
                    y--;
                }
                else if(t1 == 'R')
                {
                    x++;
                }
                else if(t1 == 'L')
                {
                    x--;
                }
            if( x == 1 and y == 1)
            {
            tru=true;  
                
            }
        
         }
        if(tru == true){cout << "YES"<<endl;
        }else if(tru ==false ){ cout<< "NO"<< endl;
        }
        x=0;
        y=0;
        tru =false;
    
}      
}