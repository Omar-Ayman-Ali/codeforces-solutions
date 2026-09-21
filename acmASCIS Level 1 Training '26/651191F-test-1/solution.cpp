    #include <iostream>

    using namespace std;

    #define int long long
    signed main ()
    {
        int n,k,ans,z,a,b;
        int sum =0;
        ans =0;
        cin >> n >> k;
        z=n;
        int arr1[n][n];
        for(int i=0; i < n; i++)for(int j=0; j < n ; j++) cin >> arr1[i][j];

        
            
                for(int i =0; i < n; i++)  
                {
                    for(int j=0; j <n ; j++)
                    {
                     sum=0;
                          for(int a = i; a < i+k and i+k-1<n; a++)
                            {
                            for(int b = j; b < j+k and j+k-1<n;b++)
                                    {
                                   sum+=arr1[a][b];
                                     }
                                        
                            }
                                          ans = max(ans,sum);

                    }
                
                

           }
           cout << ans;
        }