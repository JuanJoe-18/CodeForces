#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pl;

#define endl "\n"

void solve() {
    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 1), b(m + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int j = 1; j <= m; j++) cin >> b[j];

    // dp[i] = can we match b[1..j] using a[1..i]? (rolling over j)
    // pre[i] = prefix OR of dp[0..i]
    vector<bool> dp(n + 1, false), ndp(n + 1, false);
    vector<bool> pre(n + 1, false);

    dp[0] = true;
    for (int i = 0; i <= n; i++) pre[i] = true; // dp[0]=true propagates

    for (int j = 1; j <= m; j++) {
        fill(ndp.begin(), ndp.end(), false);

        for (int i = j; i <= n; i++) {
            // Case 1: segment of length 1 (keep original or convert to 1)
            if (dp[i - 1] && (b[j] == 1 || b[j] == a[i])) {
                ndp[i] = true;
            }

            // Case 2: segment of length L >= 2 (can reach any value 1..L)
            if (!ndp[i]) {
                ll thr = (ll)i - max(2LL, b[j]);
                if (thr >= (ll)(j - 1)) {
                    if (pre[(int)thr]) {
                        ndp[i] = true;
                    }
                }
            }
        }

        swap(dp, ndp);
        pre[0] = dp[0];
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] || dp[i];
        }
    }

    cout << (dp[n] ? "YES" : "NO") << endl;
}

int main() {
    fastio
    int t;
    cin >> t;
    while (t--) solve();
}
