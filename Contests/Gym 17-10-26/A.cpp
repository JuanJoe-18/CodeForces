#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; ll L;
    if (!(cin >> n >> L)) return 0;

    vector<pair<ll,ll>> ats(n);
    for (int i = 0; i < n; ++i) cin >> ats[i].first;
    for (int i = 0; i < n; ++i) cin >> ats[i].second;

    sort(ats.begin(), ats.end());

    vector<ll> b_n(n);
    b_n[0] = ats[0].second;

    for (int i = 1; i < n; ++i) {
        ll diff = (ats[i].second - ats[0].second) % L;
        if (diff < 0) diff += L;
        b_n[i] = ats[0].second + diff;

        if (b_n[i] <= b_n[i-1]) {
            cout << "*\n";
            return 0;
        }
    }

    ll ans = LLONG_MAX;
    for (ll k = -1; k <= 1; ++k) {
        ll mx_dist = 0;
        for (int i = 0; i < n; ++i) {
            ll tar = b_n[i] + k * L;
            mx_dist = max(mx_dist, abs(ats[i].first - tar));
        }
        ans = min(ans, mx_dist);
    }

    cout << ans << "\n";
    return 0;
}