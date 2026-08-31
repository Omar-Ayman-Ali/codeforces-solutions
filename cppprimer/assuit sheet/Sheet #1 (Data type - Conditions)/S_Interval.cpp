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

    double x;
    cin >> x;
    if (x > 0 && x <= 25)
        cout << "Interval [0,25]";
    else if (x > 25 && x <= 50)
        cout << "Interval (25,50]";

    else if (x > 50 && x <= 75)
        cout << "Interval (50,75]";
    else if (x > 75 && x <= 100)
        cout
            << "Interval (75,100]";
    else
        cout << "Out of Intervals";

    return 0;
}