#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int eCounter = 0;
int oCounter = 0;
typedef long long ll;
typedef vector<int> vi;

bool isEven(int n)
{
    if (n % 2 == 0)
        return true;
    else
        return false;
};

void checker(int arr1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (isEven(arr1[i]))
            eCounter++;
        else
            oCounter++;
    }
};

int main()
{
    fast;
    int n;
    cin >> n;
    int arr1[n];

    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    checker(arr1, n);

    if (eCounter > oCounter){
        for (int i = 0; i < n; i++)
            if (!isEven(arr1[i]))
                cout << i + 1;
    }
            else
                for (int i = 0; i < n; i++)
                    if (isEven(arr1[i]))
                        cout << i + 1;
}
