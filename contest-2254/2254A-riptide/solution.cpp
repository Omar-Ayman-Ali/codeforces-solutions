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
        int a, b, c, min, max, counter = 0;
        cin >> a >> b >> c;
        bool x = false;
        while (!x)
        {
            if (a == b || b == c || a == c)
            {
                x = true;
                break;
            }
            else
            {
                if (a > b && a > c && b > c)
                {
                    a--;
                    c++;
                }
                else if (a > b && a > c && c > b)
                {
                    a--;
                    b++;
                }
                else if (b > c && b > a && a > c)
                {
                    b--;
                    c++;
                }
                else if (b > c && b > a && c > a)
                {
                    b--;
                    a++;
                }
                else if (c > b && c > a && a > b)
                {
                    c--;
                    b++;
                }
                else
                {
                    c--;
                    a++;
                }
                counter++;
            }
        }
        cout << counter << endl;
    }
}