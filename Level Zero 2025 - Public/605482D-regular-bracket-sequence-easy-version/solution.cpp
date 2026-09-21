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

    string s;
    cin >> s;
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            c.push(')');
        else if (c.empty())
        {
            cout << "NO";
            return 0;
        }
        else
        {
            c.pop();
        }
    }
    if (c.empty())
        cout << "Yes";
    else
        cout << "No";

    return 0;
}