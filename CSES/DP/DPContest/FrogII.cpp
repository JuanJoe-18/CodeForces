#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

template<class T> bool chmin(T &a, T b) { return b < a ? a = b, true : false; }

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];

    vector<int> dp(n + 1, INF);
    dp[1] = 0;

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= k && i - j >= 1; ++j) {
            chmin(dp[i], dp[i - j] + abs(a[i] - a[i - j]));
        }
    }

    cout << dp[n] << "\n";
    return 0;
}