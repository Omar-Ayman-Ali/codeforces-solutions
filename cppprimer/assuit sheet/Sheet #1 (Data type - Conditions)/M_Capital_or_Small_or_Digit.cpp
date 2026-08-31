#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    char x;
    cin >> x;
    if(x>=65 && x <=91)
        cout << "ALPHA"<< "\nIS CAPITAL";

    else if(x>=97 &&  x<=123)
        cout << "ALPHA"<< "\nIS SMALL";
    else 
    cout << "IS DIGIT";

}