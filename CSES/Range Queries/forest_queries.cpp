#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++) {
            int arbol = (grid[y - 1][x - 1] == '*') ? 1 : 0;
            
            dp[y][x] = dp[y - 1][x] + dp[y][x - 1] - dp[y - 1][x - 1] + arbol;
        }
    }

    for (int i = 0; i < q; i++) {
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        ll ans = dp[y2][x2] - dp[y1 - 1][x2] - dp[y2][x1 - 1] + dp[y1 - 1][x1 - 1];
        cout << ans << "\n";
    }

    return 0;
}
