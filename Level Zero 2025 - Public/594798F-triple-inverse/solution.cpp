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

    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        reverse(x.begin(), x.end());
        for (int i = 0; i < x.length(); i++)
        {
            if (isupper(x[i]))
                x[i] = tolower(x[i]);
            else
                x[i] = toupper(x[i]);
        }
        for (int i = 0; i < x.length(); i++)
        {
            if (islower(x[i]))
                x[i] = 'z' - x[i] + 'a';
            else
                x[i] = 'Z' - x[i] + 'A';
        }
        cout << x << endl;
    }
}