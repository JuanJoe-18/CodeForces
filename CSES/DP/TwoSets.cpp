#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    ll sum = 1LL * n * (n + 1) / 2;

    if (sum & 1) {
        cout << 0 << '\n';
        return 0;
    }

    int target = sum / 2;

    vector<vector<int>> dp(n, vector<int>(target + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i < n; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= target; j++) {
            dp[i][j] = dp[i - 1][j];

            if (j >= i)
                dp[i][j] = (dp[i][j] + dp[i - 1][j - i]) % MOD;
        }
    }

    cout << dp[n - 1][target] << '\n';

    return 0;
}