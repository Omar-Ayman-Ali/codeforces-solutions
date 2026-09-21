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
    deque<int> dq;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "push_back")
        {
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if (s == "push_front")
        {
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if (s == "pop_front")
        {
            dq.pop_front();
        }
        else if (s == "pop_back")
        {
            dq.pop_back();
        }
        else if (s == "front")
            cout << dq.front() << endl;
        else if (s == "back")
            cout << dq.back() << endl;
        else
        {
            int n;
            cin >> n;
            cout << dq[n - 1] << endl;
        }
    }

    return 0;
}