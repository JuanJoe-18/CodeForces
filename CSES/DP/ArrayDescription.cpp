#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int M = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m; 
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(m + 2, 0));

    if (a[0] != 0) {
        dp[1][a[0]] = 1;
    } else {
        for (int v = 1; v <= m; v++) {
            dp[1][v] = 1;
        }
    }

    for (int i = 2; i <= n; i++) {
        int xi = a[i - 1];
        for (int v = 1; v <= m; v++) {
            if (xi == 0 || xi == v) {
                ll adj_sum = (ll)dp[i - 1][v - 1] + dp[i - 1][v] + dp[i - 1][v + 1];
                dp[i][v] = adj_sum % M;
            }
        }
    }

    ll ans = 0;
    for (int v = 1; v <= m; v++) {
        ans = (ans + dp[n][v]) % M;
    }

    cout << ans << "\n";

    return 0;
}