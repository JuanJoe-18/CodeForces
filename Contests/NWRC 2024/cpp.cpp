#include<bits/stdc++.h>

using namespace std;
#define endl "\n"

void solve() {

    int n, m; cin >> n >> m;

    int fow = 0;
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        if (u < v) {
            fow ++;
        }
    }

    if (fow >= (m + 1) / 2) {
        for (int  i = 1; i <= n; ++i) {
            cout << i << (i == n ? "":" ");
        }
    } else {
        for (int i = n; i >= 1; --i) {
            cout << i << (i == 1 ? "":" ");
        }
    }
    cout << endl;
}



int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}