#include <bits/stdc++.h>
#define fastio  ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;

typedef long long ll;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pl;

#define endl "\n"

int main() {
    fastio
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> pref4(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref4[i + 1] = pref4[i] + (s[i] == '4' ? 1 : 0);
    }

    while (q--) {
        int l, r;
        ll x, y;
        cin >> l >> r >> x >> y;

        ll c4 = pref4[r] - pref4[l - 1];
        ll c8 = (r - l + 1) - c4;
        ll ax = abs(x);
        ll ay = abs(y);

        if (max(ax, ay) <= c4 + c8 && (ax + ay) <= c4 + 2 * c8) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
