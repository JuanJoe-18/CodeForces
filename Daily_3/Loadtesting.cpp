#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> l_val(n), l_cost(n);

    l_val[0] = a[0]; 
    l_cost[0] = 0;

    for (int i = 1; i < n; i++) {
        l_val[i] = max(a[i], l_val[i-1] + 1);

        ll current_cost = l_val[i] - a[i];
        l_cost[i] = l_cost[i-1] + current_cost;
    }

    vector<ll> r_val(n), r_cost(n);

    r_val[n-1] = a[n-1];
    r_cost[n-1] = 0;

    for (int i = n - 2; i >= 0; i--) {

        r_val[i] = max(a[i], r_val[i+1] + 1);
        ll c_cost = r_val[i] - a[i];
        r_cost[i] = r_cost[i+1] + c_cost;
    }


    ll ans = -1;

    for (int i = 0; i < n; i++) {
        

        ll cl = (i > 0) ? l_cost[i-1] : 0;

        ll cr = (i < n - 1) ? r_cost[i+1] : 0;

        ll val_left = (i > 0) ? l_val[i-1] + 1 : a[i];
        ll val_right = (i < n - 1) ? r_val[i+1] + 1 : a[i];

        ll fv = max(a[i], max(val_left, val_right));
        
        ll tc = cl + cr + (fv - a[i]);

        if (ans == -1 || tc < ans) {
            ans = tc;
        }
    }

    cout << ans << endl;

    return 0;
}