#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Fenwik {
    ll n;
    vector<ll> tree;

    // Constructor: Inicializa el arreglo en 0, tamaño N + 1
    Fenwik(ll n) {
        this->n = n;
        tree.assign(n + 1, 0);
    }

    // Suma 'x' al valor existente en la posición 'k'
    void add(ll k, ll x) {
        while (k <= n) {
            tree[k] += x;
            k += k & -k;
        }
    }

    // Consulta la suma del prefijo desde 1 hasta 'k'
    ll sum(ll k) {
        ll s = 0;
        while (k >= 1) {
            s ^= tree[k];
            k -= k & -k;
        }
        return s;
    }

    // Consulta la suma en el rango [a, b]
    ll sum(ll a, ll b) {
        return sum(b) - sum(a - 1);
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
    
    int x = LSOne(2);

    while (q--) {        
        ll a,b; cin >> a >> b;
        ll ans = Fenwik.sum(a,b);
        cout << ans << endl;
    }

    return 0;
}