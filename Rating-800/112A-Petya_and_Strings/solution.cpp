#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main()
{
    fast;

    string a;
    string c;

    
    bool x = false;
    cin >> a >> c;

    for (int i = 0; i < a.length(); i++)
    {
        if( tolower(a[i]) ==  tolower(c[i]))
            continue;
        else if(tolower(a[i]) >  tolower(c[i]))
            {
                cout << 1;
                x= true;
                break;
            }
        else
            {
                cout << -1;
                x= true;
                 break;
            }
    }
    if(!x)
        cout << 0;
}
    
    
