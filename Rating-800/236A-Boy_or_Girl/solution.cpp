#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

bool isEven(int x)
{
    if (x % 2 == 0)
        return true;
    else
        return false;
}
int main()
{
    fast;

    string x;
    cin >> x;
    int z[200] ={};
    int counter = 0;
    for (int i = 0; i < x.length(); i++)
        z[x[i]]++;
    for (int i = 64; i < 123; i++)
        if (z[i] >= 1)
            counter++;
    bool c = isEven(counter);
    if (!c)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}