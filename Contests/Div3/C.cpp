#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, x, y;
    cin >> n >> x >> y;
    
    ll d = std::gcd((ll)x, (ll)y);
    bool posible = true; 
    
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        if (abs(val - i) % d != 0) posible = false;
    }
    if (posible) cout << "YES\n";
    else cout << "NO\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
