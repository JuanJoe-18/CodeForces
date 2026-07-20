#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll LINF = 1e18;

template <typename T = ll>
struct Edge {
    int from, to;
    T weight;
    int id; 
};

template <typename T = ll>
struct Graph {
    int n;
    vector<vector<int>> adj; 
    vector<Edge<T>> edges;

    Graph(int _n) : n(_n) {
        adj.resize(n + 1);
    }

    void add_directed_edge(int from, int to, T weight = 1, int id = -1) {
        adj[from].push_back(edges.size());
        edges.push_back({from, to, weight, id});
    }

    // Algoritmo de Tarjan para Strongly Connected Components (SCC)
    vector<int> get_scc() {
        vector<int> val(n + 1, 0), comp(n + 1, -1);
        vector<int> z; int timer = 0, ncomps = 0;
        
        auto dfs = [&](auto& self, int u) -> int {
            int low = val[u] = ++timer, x;
            z.push_back(u);
            for (int id : adj[u]) {
                int v = edges[id].to;
                if (comp[v] < 0) low = min(low, val[v] ?: self(self, v));
            }
            if (low == val[u]) {
                do {
                    x = z.back(); z.pop_back();
                    comp[x] = ncomps;
                } while (x != u);
                ncomps++;
            }
            return val[u] = low;
        };
        for (int i = 1; i <= n; i++) if (!val[i]) dfs(dfs, i);
        return comp;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; 
    if (!(cin >> n >> m)) return 0;
    
    Graph<ll> G(n);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        G.add_directed_edge(u, v);
    }

    // 1. Ejecutamos Tarjan en una sola línea
    vector<int> comp = G.get_scc();

    // 2. Buscamos si existe alguna componente con ID mayor a 0
    int nodo_comp_0 = -1;
    int nodo_comp_1 = -1;

    for (int i = 1; i <= n; i++) {
        if (comp[i] == 0) nodo_comp_0 = i;
        if (comp[i] == 1) nodo_comp_1 = i;
    }

    // 3. Imprimimos el veredicto
    if (nodo_comp_1 == -1) {
        // Todo el grafo es una sola componente (SCC 0)
        cout << "YES\n";
    } else {
        // La componente 0 es un "sumidero", jamás podrá llegar a la componente 1
        cout << "NO\n";
        cout << nodo_comp_0 << " " << nodo_comp_1 << "\n";
    }

    return 0;
}
