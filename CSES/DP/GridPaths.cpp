#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    if (grid[0][0] == '*' || grid[n - 1][n - 1] == '*') {
        cout << 0 << "\n";
        return 0;
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            
            if (grid[y][x] == '*') {
                dp[y][x] = 0;
                continue;
            }
            if (y > 0) {
                dp[y][x] = (dp[y][x] + dp[y - 1][x]) % MOD;
            }
            if (x > 0) {
                dp[y][x] = (dp[y][x] + dp[y][x - 1]) % MOD;
            }
        }
    }
    cout << dp[n - 1][n - 1] << "\n";

    return 0;
}
