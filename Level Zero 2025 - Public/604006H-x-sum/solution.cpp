#include <iostream>
#include <algorithm>

using namespace std;

int a[205][205];

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    long long max_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long current_sum = a[i][j];

            int r = i - 1, c = j - 1;
            while (r >= 0 && c >= 0) {
                current_sum += a[r][c];
                r--; c--;
            }

            r = i - 1; c = j + 1;
            while (r >= 0 && c < m) {
                current_sum += a[r][c];
                r--; c++;
            }

            r = i + 1; c = j - 1;
            while (r < n && c >= 0) {
                current_sum += a[r][c];
                r++; c--;
            }

            r = i + 1; c = j + 1;
            while (r < n && c < m) {
                current_sum += a[r][c];
                r++; c++;
            }

            max_sum = max(max_sum, current_sum);
        }
    }

    cout << max_sum << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}