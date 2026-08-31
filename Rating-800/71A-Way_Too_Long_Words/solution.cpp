#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

typedef long long ll;
typedef vector<int> vi;

int counting(string x)
{
    int i = 0;
    int cntr = 0;
    while (x[i] != '\0')
    {
        cntr++;
        i++;
    }
    return cntr;
};
void display(string x)
{
    int i = counting(x);
    if (i > 10)
    {
        cout << x[0] << i - 2 << x[i - 1] << '\n';
    }
    else
        cout << x << '\n';
};

int main()
{
    fast;
    int t;
    cin >> t;
    string arr1[t];
    for (int i = 0; i < t; i++)
        cin >> arr1[i];
    for (int i = 0; i < t; i++)
        display(arr1[i]);
}