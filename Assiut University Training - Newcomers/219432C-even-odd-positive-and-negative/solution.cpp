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

    int t, nCntr = 0, eCntr = 0, oCntr = 0, pCntr = 0;
    cin >> t;
    while (t--)
    {
        int i;
        cin >> i;
        if (i > 0)
            pCntr++;
        else if (i < 0)
            nCntr++;
        if (i % 2 == 0)
            eCntr++;
        else
            oCntr++;
    }
    cout <<"Even: " << eCntr
         << "\nOdd: " << oCntr
         << "\nPositive: " << pCntr
         << "\nNegative: " << nCntr <<endl;
}