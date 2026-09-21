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

    string f1, s1, f2, s2;
    cin >> f1 >> s1 >> f2 >> s2;

    if(s1 == s2)
        cout <<"ARE Brothers";
    else
        cout <<"NOT";
    
}