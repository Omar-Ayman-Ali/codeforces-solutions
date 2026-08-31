#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;
int t;
int fCoutner =0;
int main()
{
    fast;

    cin >> t;
    while (t--)
    {
        int counter = 0;
        for (int i = 0; i < 3; i++)
        {
            int arr1[3];
            cin >> arr1[i];
            if(arr1[i] >0)
                counter++;
        }
        if(counter > 1)
            fCoutner++;
    }
    cout << fCoutner;
    /*int arr1[t][3];
    for(int i=0; i < t; i++)
        for(int j=0; j < 3; j++)
            cin >> arr1[i][j];

    return 0;*/
}