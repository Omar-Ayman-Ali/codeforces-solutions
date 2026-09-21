    #include <iostream>
    #include <cmath>
    using namespace std;

    #define int long long

    signed main()
    {
    int n;
    cin >> n;
    int arr1[n][n] = {};

        for(int i=0; i <n ;i++)
        {
            arr1[0][0] =1;
            for(int j=0; j<n;j++)
            {
            if(j == 0 || j == i)
                arr1[i][j] = 1;
            else
                arr1[i][j] = arr1[i-1][j-1] + arr1[i-1][j];

            }
        }
        for(int i=0; i <n;i++)
        {
            for(int j = 0; j <= i; j++)
                cout << arr1[i][j] << ' ';
            
                
            
                    cout << endl;

        }
    }