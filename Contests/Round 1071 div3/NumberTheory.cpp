#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        ll m = *min_element(a.begin(), a.end());

        ll d = 1ll*4e18;
        for (int i = 0; i < n; ++i) {
            if (a[i] == m) continue;
            d = min(d, a[i] - m);
        }

        ll ans = m;
        if (d > m) ans = d;

        cout << ans <<  endl;
    }
    return 0;
}