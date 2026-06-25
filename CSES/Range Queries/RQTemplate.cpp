// ====================================================================
// FENWICK TREE (BIT) - Point Update, Range Sum
// Complejidad: O(log N) | Espacio: O(N) | Arreglo 1-indexed
// ====================================================================
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
            s += tree[k];
            k -= k & -k;
        }
        return s;
    }

    // Consulta la suma en el rango [a, b]
    ll sum(ll a, ll b) {
        return sum(b) - sum(a - 1);
    }
};

/* NOTA TÁCTICA PARA REEMPLAZOS:
  Si el problema exige REEMPLAZAR un valor (a[k] = u) en lugar de sumarle, 
  debes llevar un arreglo 'v' paralelo:
  ll delta = u - v[k];
  fenwik.add(k, delta);
  v[k] = u;
*/