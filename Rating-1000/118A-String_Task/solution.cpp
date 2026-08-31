#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    string x;
    cin >> x;
    
    for(int i=0; i < x.length();i++)
        {
            char c = tolower(x[i]);
            if(c == 'a' or c == 'e' or c == 'i' or c == 'u' or c == 'o' or c == 'y')
                continue;
            else 
                cout << '.' << c;
        }

    return 0;
}