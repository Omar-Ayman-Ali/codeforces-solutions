#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;
int n, m;
struct book
{
    string title;
    int index;
};
bool cmp(book &b1, book &b2)
{
    string s1 = b1.title;
    string s2 = b2.title;
    for (int i = 0; i < m; i++)
    {
        if (s1[i] == s2[i])
            continue;
        if (i % 2 == 0)
            return s1[i] < s2[i];
        else
            return s1[i] > s2[i];
    }
}
void solve()
{
    cin >> n >> m;
    book arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].title;
        arr[i].index = i + 1;
    }
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].index << ' ';
    }
}
int main()
{
    fast;
    solve();
    return 0;
}