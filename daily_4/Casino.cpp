#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    int n,m; cin >> n >> m;
    vector<vector<int>> a (m,vector<int> (n,0));
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin >> a[j][i];
        }
    }
    ll ans = 0;
    for (int k=0;k<m;k++) {
        sort(a[k].begin(),a[k].end());
        for (ll i=0;i<n;i++) { ll j = (n-1) - i;
            ans += (i *a[k][i])- (j * a[k][i]);
        }
    }
    cout << ans << endl;
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}
