class MaxFenwickTree {
private:
    int n;
    vector<ll> bit;
    const ll NEUTRAL = -LINF; // Usa 0 si todos los valores posibles son >= 0

public:
    /**
     * Inicializa un Fenwick Tree de Máximos de tamaño n.
     * @param n Tamaño del árbol (internamente el arreglo es 1-indexed).
     */
    MaxFenwickTree(int n) : n(n), bit(n + 1, NEUTRAL) {}

    /**
     * Actualiza el elemento en 'idx' haciéndolo max(actual, val).
     * IMPORTANTE: 'val' debe ser >= al valor previo en 'idx'.
     * @param idx Índice a actualizar (1-indexed).
     * @param val Nuevo valor candidato a máximo.
     */
    void update(int idx, ll val) {
        for (; idx <= n; idx += idx & -idx) {
            bit[idx] = max(bit[idx], val);
        }
    }

    /**
     * Consulta el valor máximo en el prefijo [1, idx].
     * @param idx Índice final del prefijo (1-indexed).
     * @return El máximo en el rango [1, idx].
     */
    ll query_prefix(int idx) {
        ll res = NEUTRAL;
        for (; idx > 0; idx -= idx & -idx) {
            res = max(res, bit[idx]);
        }
        return res;
    }
};