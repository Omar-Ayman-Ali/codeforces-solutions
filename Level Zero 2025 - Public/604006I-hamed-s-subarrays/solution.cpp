#include <iostream>

using namespace std;

const int OFFSET = 1000000;
int freq[2 * OFFSET + 5];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    freq[0 + OFFSET] = 1;

    long long current_prefix = 0;
    long long zero_subarrays = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        current_prefix += x;

        zero_subarrays += freq[current_prefix + OFFSET];

        freq[current_prefix + OFFSET]++;
    }

    cout << zero_subarrays << "\n";

    return 0;
}