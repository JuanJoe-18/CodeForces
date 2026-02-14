#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        vector<ll> p(n);
        for (int i = 0; i < n; ++i) cin >> p[i];

        int ca = 0, cb = 0;
        ll am = 0, bm = 0;

        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                ca++;
            } else {
                cb++;
            }

            if (s[i] == '0') {
                ll a_min_i = p[i] / 2 + 1;
                ll b_min_i = p[i] - a_min_i;
                am += a_min_i;
                bm += b_min_i;
            } else {
                ll b_min_i = p[i] / 2 + 1;
                ll a_min_i = p[i] - b_min_i;
                am += a_min_i;
                bm += b_min_i;
            }
        }


        if (x < am || y < bm) {
            cout << "NO" << endl;
            continue;
        }


        if (cb == 0) {
            cout << ((x - y >= n) ? "YES\n" : "NO\n");
            continue;
        }
        if (ca == 0) {
            cout << ((y - x >= n) ? "YES\n" : "NO\n");
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}