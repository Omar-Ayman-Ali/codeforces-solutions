#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int main() {
    float a,b,c,d;
    float area;
    cin>>a>>b>>c>>d;
    area=(a*b)-(0.5*(a-c)*(b-d));
    cout<<fixed<<setprecision(6)<<area;

    

    return 0;
}