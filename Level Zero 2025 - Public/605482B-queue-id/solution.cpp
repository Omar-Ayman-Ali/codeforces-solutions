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
    queue<int> q;
    cin >> t;
    while (t--)
    {
        int id, n;
        cin >> id >> n;
        if (id == 1)
            q.push(n);
        else if (id == 2 && q.empty())
        {
            cout << "no\n";
        }
        else
        {
            int x = q.front();
            q.pop();
            if (x == n)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }

    return 0;
}