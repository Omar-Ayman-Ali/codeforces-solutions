#include <iostream>

using namespace std;
#define int long long
signed main()
{
    int M,N;

    cin >> N >> M;
    int sum = N * M * (N + M - 2) / 2;
    cout << sum;
}