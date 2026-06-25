#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Fenwik {
    ll n;
    vector<ll> tree;

    Fenwik(ll n) {
        this->n = n;
        tree.assign(n + 1, 0);
    }

    ll sum(ll k) {
        ll s = 0;
        while (k >= 1) {
            s += tree[k];
            k -= k&-k;
        }
        return s;
    }

    void add(ll k, ll x) {
        while (k <= n) {
            tree[k] += x;
            k += k&-k;
        }
    }
};

int main() {
    int n, q;
    cin >> n >> q;
    Fenwik Fenwik(n);
    vector<ll> v(n+1,0);
    for (ll i = 1; i <= n; i++) {
        ll x; cin >> x;
        v[i] = x;
        Fenwik.add(i,x);
    }

    while (q--) {        
        ll t,a,b; cin >> t >> a >> b;
        if (t == 1) {
            ll delta = b-v[a];
            Fenwik.add(a,delta);
            v[a] = b;
        } else {
            ll ans = Fenwik.sum(b) - Fenwik.sum(a-1);
            cout << ans << endl;
        }

    }

    return 0;
}