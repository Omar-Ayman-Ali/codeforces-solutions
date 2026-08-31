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
    cin >> x;
    x /= 1000;
    if(x % 2 == 0)
        cout << "EVEN";
    else
        cout << "ODD";

    return 0;
}