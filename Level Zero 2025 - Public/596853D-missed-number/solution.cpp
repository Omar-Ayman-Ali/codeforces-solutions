#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

void f()
{
    int a1, a2, a3, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int candidates[3] = {a1 + a2, a4 - a2, a5 - a4};
    int max_score = 0;

    for (int i = 0; i < 3; i++)
    {
        int a3 = candidates[i];
        int score = 0;

        if (a3 == a1 + a2)
            score++;
        if (a4 == a2 + a3)
            score++;
        if (a5 == a3 + a4)
            score++;

        max_score = max(max_score, score);
    }
    cout << max_score << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        f();
    }

    return 0;
}