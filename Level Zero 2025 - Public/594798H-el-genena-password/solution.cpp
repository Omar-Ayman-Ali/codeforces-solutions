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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            int maxV = s[i], maxI = i;
            for (int j = 1; j < 9 and i + j < s.length(); j++)
            {
                if (maxV < s[i + j] - j)
                {
                    maxV = s[i + j] - j;
                    maxI = i + j;
                }
            }
            for (int j = maxI; j > i; j--)
            {
                s[j]--;
                swap(s[j], s[j - 1]);
            }
        }
        cout << s << endl;
    }

    return 0;
}