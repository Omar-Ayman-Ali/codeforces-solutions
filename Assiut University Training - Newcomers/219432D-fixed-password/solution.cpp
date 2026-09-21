#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int x;
    while(cin >> x)
        {
            if(x == 1999)
                {
                    cout <<"Correct" <<endl;
                    return 0;
                }
            else
                cout <<"Wrong"<<endl;
        }

    return 0;
}