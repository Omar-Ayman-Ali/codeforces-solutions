#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    fast;

    int x,y;
    char c;
    bool cas = false;

    cin >> x >> c >> y;
    if(c == '<' && x < y)
        cas = true;
    else if (c == '=' && x == y)
        cas = true;
    else if (c == '>' && x > y)
        cas =true;
    if(cas)
        cout <<"Right";
    else
        cout <<"Wrong";

    return 0;
}