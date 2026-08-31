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

    int n;
    int k;
    cin >> n >> k;
    int counter = 0;
    int arr1[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] >= arr1[k-1] and arr1[i] > 0)
            counter++;
    }
    cout << counter;
    return 0;
}