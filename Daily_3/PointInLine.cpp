#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n;
    ll k;
    cin >> n >>  k;

    vector<ll> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    ll ans = 0;
    int l = 0, r = 0;

    while (r < n) {
        while (l < r && a[r] - a[l] > k) {
            l++;
        }
    ll m = r - l;
        if (m >= 2) {
            ans += m * (m - 1) / 2;
        }
     r++;
    }

    cout << ans << endl;

    return 0;
}