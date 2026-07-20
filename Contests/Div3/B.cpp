#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
    
    ll sum = 0;
    bool possible = true;
    
    for (ll i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        sum += a;
 
        ll required = (i * (i + 1)) / 2;
        
        if (sum < required) {
            possible = false;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
    return 0;
}
