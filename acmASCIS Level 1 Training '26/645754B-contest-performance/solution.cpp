    #include <iostream>

    using namespace std;

    int main()
    {
        int t,n,a,x;
        int l =0;
        int z =0;
        cin >> t;
        for(int i =0; i< t ; i++)
        {
            x=0;
            l=0;
            cin >> n;
            for(int k=0; k<n ; k++)
            {
                cin >> a;
                if(a >= z)
                {
                    x++;
                    if(x >= l)
                    {
                        l = x;
                        
                    }
                    
                }                  
                    
                else if( a <z )
                {
                        x=1;
                }
                z = a;
            }
           cout << l<< endl;
           z=0;
        }

     
    }