    #include <iostream>

    using namespace std;

    int main()
    {
        long long n,l;__int128 b=0;
        cin >> n >> l;

        for(int i =1; i <= n-1 ; i++)
        {
            b =b + ((n-i)*i);
        }
        b=b*l;
        b=b/(n-1);
        cout << (long long)b;
        
    }