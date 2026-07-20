#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, q;
    cin >> n >> q;
    string s; cin >> s;
    vector<int> ch(n);
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i-1]) ch[i] = 1;
        else ch[i] = 0;
    }
    vector<int> pref(n);
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i-1] + ch[i];
    }

    while (q--) {
        int l, r, k; cin >> l >> r >> k;
        l--; r--;

        int chs = pref[r] - pref[l];
        int ops = (chs + 1) / 2;
        if (ops <= k) cout << "YES\n";
        else cout << "NO\n";

    }
    
    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
