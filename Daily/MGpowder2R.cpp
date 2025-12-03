#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
vector<ll> a, b;

bool check(ll x, ll k) {
    __int128 need = 0;  // acumulador en int128 para evitar overflow
    for (int i = 0; i < n; i++) {
        __int128 req = (__int128)x * a[i] - b[i];
        if (req > 0) need += req;
        if (need > k) return false; // corte temprano
    }
    return need <= k;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k;
    cin >> n >> k;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    ll l = 0, r = 2000000000, ans = 0;
    while (l <= r) {
        ll mid = l + (r - l) / 2;
        if (check(mid, k)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }

    cout << ans << "\n";
    return 0;
}
