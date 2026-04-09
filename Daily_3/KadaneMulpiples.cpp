#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

using namespace std;

void solve() {
    int n;
    ll k; 
    cin >> n >> k;
    
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    
    vector<bool> exists(k + 1, false);
    vector<bool> cov(k + 1, false);
    
    for (ll x : a) {
        exists[x] = true;
    }
    vector<ll> b;
    for (ll x : a) {
        if (cov[x]) continue;
        b.push_back(x);
        for (ll m = x; m <= k; m += x) {
            if (!exists[m]) {
                cout << "-1\n";
                return; 
            }
            cov[m] = true;
        }
    }
    
    cout << b.size() << "\n";
    for (ll x : b) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}