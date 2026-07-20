#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll LINF = 1e18;

// ====================================================================
// SPARSE TABLE (Consultas en Rango Estáticas)
// ====================================================================
class SparseTable {
private:
    int n, log_n;
    vector<vector<ll>> st;

public:
    /**
     * Inicializa y construye la Sparse Table.
     * @param a El arreglo de entrada (0-indexed).
     */
    SparseTable(const vector<ll>& a) {
        n = a.size();
        log_n = log2(n) + 1;
        st.assign(n, vector<ll>(log_n));

        for (int i = 0; i < n; i++) {
            st[i][0] = a[i];
        }

        for (int j = 1; j < log_n; j++) {
            for (int i = 0; i + (1 << j) <= n; i++) {
                // Cambiar min a max o __gcd dependiendo del problema
                st[i][j] = min(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    /**
     * Consulta el valor mínimo en el rango [L, R].
     * @param L Índice izquierdo del rango (0-indexed, inclusivo).
     * @param R Índice derecho del rango (0-indexed, inclusivo).
     * @return El valor mínimo en el rango.
     */
    ll query(int L, int R) {
        int j = log2(R - L + 1);
        // Cambiar min a max o __gcd dependiendo del problema
        return min(st[L][j], st[R - (1 << j) + 1][j]);
    }
};

// ====================================================================
// FENWICK TREE (Binary Indexed Tree)
// ====================================================================
class FenwickTree {
private:
    int n;
    vector<ll> bit;

public:
    /**
     * Inicializa un Fenwick Tree de tamaño n.
     * @param n Tamaño del árbol (internamente el arreglo es 1-indexed).
     */
    FenwickTree(int n) : n(n), bit(n + 1, 0) {}

    /**
     * Suma 'val' al elemento en el índice 'idx'.
     * @param idx Índice a actualizar (1-indexed).
     * @param val Valor a sumar.
     */
    void add(int idx, ll val) {
        for (; idx <= n; idx += idx & -idx) {
            bit[idx] += val;
        }
    }

    /**
     * Consulta la suma del prefijo desde 1 hasta 'idx'.
     * @param idx Índice final del prefijo (1-indexed).
     * @return Suma en el rango [1, idx].
     */
    ll sum(int idx) {
        ll res = 0;
        for (; idx > 0; idx -= idx & -idx) {
            res += bit[idx];
        }
        return res;
    }

    /**
     * Consulta la suma en el rango [L, R].
     * @param L Índice izquierdo (1-indexed, inclusivo).
     * @param R Índice derecho (1-indexed, inclusivo).
     * @return Suma en el rango [L, R].
     */
    ll query(int L, int R) {
        return sum(R) - sum(L - 1);
    }
};

// ====================================================================
// ITERATIVE SEGMENT TREE (Point Update, Range Query)
// ====================================================================
class IterativeSegTree {
private:
    int n;
    vector<ll> st;
    const ll NEUTRAL = -LINF; // Cambiar a LINF para min, -LINF para max

    ll combine(ll a, ll b) {
        return max(a, b); // Cambiar a min(a,b) o max(a,b)
    }

public:
    /**
     * Inicializa y construye el Segment Tree Iterativo.
     * @param a El arreglo de entrada (0-indexed).
     */
    IterativeSegTree(const vector<ll>& a) {
        n = a.size();
        st.assign(2 * n, NEUTRAL);
        for (int i = 0; i < n; i++) {
            st[n + i] = a[i];
        }
        for (int i = n - 1; i > 0; i--) {
            st[i] = combine(st[i << 1], st[i << 1 | 1]);
        }
    }

    /**
     * Actualiza el elemento en el índice 'pos' al valor 'val'.
     * @param pos Índice a actualizar (0-indexed).
     * @param val El nuevo valor.
     */
    void update(int pos, ll val) {
        for (st[pos += n] = val; pos > 1; pos >>= 1) {
            st[pos >> 1] = combine(st[pos], st[pos ^ 1]);
        }
    }

    /**
     * Consulta el valor combinado en el rango [L, R].
     * @param L Índice izquierdo (0-indexed, inclusivo).
     * @param R Índice derecho (0-indexed, inclusivo).
     * @return Resultado combinado en el rango.
     */
    ll query(int L, int R) {
        ll resL = NEUTRAL, resR = NEUTRAL;
        for (L += n, R += n + 1; L < R; L >>= 1, R >>= 1) {
            if (L & 1) resL = combine(resL, st[L++]);
            if (R & 1) resR = combine(st[--R], resR);
        }
        return combine(resL, resR);
    }
};

// ====================================================================
// LAZY SEGMENT TREE (Range Update, Range Query)
// ====================================================================
class LazySegTree {
private:
    int n;
    vector<ll> st, lazy_add, lazy_set;
    vector<bool> marked;
    const ll NEUTRAL = 0; // Cambiar a LINF para consultas de min

    ll combine(ll a, ll b) {
        return a + b; // Cambiar a min(a,b) si es RMQ
    }

    void apply_set(int p, ll val, int L, int R) {
        // Cambiar lógica según el tipo de combinación. 
        // Esto es para consultas de Suma en Rango:
        st[p] = val * (R - L + 1); 
        lazy_set[p] = val;
        lazy_add[p] = 0;
        marked[p] = true;
    }

    void apply_add(int p, ll val, int L, int R) {
        // Cambiar lógica según el tipo de combinación.
        // Esto es para consultas de Suma en Rango:
        st[p] += val * (R - L + 1);
        if (!marked[p]) lazy_add[p] += val;
        else lazy_set[p] += val;
    }

    void push(int p, int L, int R) {
        int mid = L + (R - L) / 2;
        int left = p << 1;
        int right = (p << 1) | 1;

        if (marked[p]) {
            apply_set(left, lazy_set[p], L, mid);
            apply_set(right, lazy_set[p], mid + 1, R);
            marked[p] = false;
        }
        if (lazy_add[p] != 0) {
            apply_add(left, lazy_add[p], L, mid);
            apply_add(right, lazy_add[p], mid + 1, R);
            lazy_add[p] = 0;
        }
    }

    void build(int p, int L, int R, const vector<ll>& a) {
        if (L == R) {
            st[p] = a[L];
            return;
        }
        int mid = L + (R - L) / 2;
        build(p << 1, L, mid, a);
        build((p << 1) | 1, mid + 1, R, a);
        st[p] = combine(st[p << 1], st[(p << 1) | 1]);
    }

    void update(int p, int L, int R, int qL, int qR, ll val, int type) {
        if (qL > R || qR < L) return;
        if (qL <= L && R <= qR) {
            if (type == 1) apply_add(p, val, L, R); // Tipo 1: Sumar al rango
            if (type == 2) apply_set(p, val, L, R); // Tipo 2: Asignar valor al rango
            return;
        }
        push(p, L, R);
        int mid = L + (R - L) / 2;
        update(p << 1, L, mid, qL, qR, val, type);
        update((p << 1) | 1, mid + 1, R, qL, qR, val, type);
        st[p] = combine(st[p << 1], st[(p << 1) | 1]);
    }

    ll query(int p, int L, int R, int qL, int qR) {
        if (qL > R || qR < L) return NEUTRAL;
        if (qL <= L && R <= qR) return st[p];
        push(p, L, R);
        int mid = L + (R - L) / 2;
        return combine(query(p << 1, L, mid, qL, qR),
                       query((p << 1) | 1, mid + 1, R, qL, qR));
    }

public:
    /**
     * Inicializa y construye el Lazy Segment Tree.
     * @param a El arreglo de entrada (0-indexed).
     */
    LazySegTree(const vector<ll>& a) {
        n = a.size();
        st.assign(4 * n, NEUTRAL);
        lazy_add.assign(4 * n, 0);
        lazy_set.assign(4 * n, 0);
        marked.assign(4 * n, false);
        build(1, 0, n - 1, a);
    }

    /**
     * Suma 'val' a todos los elementos en el rango [L, R].
     * @param L Índice izquierdo (0-indexed, inclusivo).
     * @param R Índice derecho (0-indexed, inclusivo).
     * @param val Valor a sumar.
     */
    void add_range(int L, int R, ll val) {
        update(1, 0, n - 1, L, R, val, 1);
    }

    /**
     * Asigna 'val' a todos los elementos en el rango [L, R].
     * @param L Índice izquierdo (0-indexed, inclusivo).
     * @param R Índice derecho (0-indexed, inclusivo).
     * @param val Nuevo valor a asignar.
     */
    void set_range(int L, int R, ll val) {
        update(1, 0, n - 1, L, R, val, 2);
    }

    /**
     * Consulta el valor combinado en el rango [L, R].
     * @param L Índice izquierdo (0-indexed, inclusivo).
     * @param R Índice derecho (0-indexed, inclusivo).
     * @return Resultado combinado en el rango.
     */
    ll query(int L, int R) {
        return query(1, 0, n - 1, L, R);
    }
};


void solve() {
    int n;
    cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    vector<ll> init_st(n + 1, 0);
    IterativeSegTree st(init_st);
    
    vector<ll> dp(n + 1, 0);
    ll max_global = 0;
    
    vector<vector<int>> e(n + 1);
    
    for (int i = 1; i <= n; i++) {
        for (int j : e[i]) {
            st.update(j, dp[j]);
        }
        int lim = i - a[i] - 1;
        ll mxp = 0;
        if (lim >= 1) {
            mxp = st.query(1, min(lim, n));
        }
        
        dp[i] = a[i] + mxp;
        max_global = max(max_global, dp[i]);
        
        ll u_day = i + a[i] + 1;
        if (u_day <= n) {
            e[u_day].push_back(i);
        }
    }
    
    cout << max_global << "\n";
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
