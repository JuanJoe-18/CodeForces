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
    vector<int> visited;

    Graph(int _n) : n(_n) {
        adj.resize(n + 1);
        visited.resize(n + 1);
    }

    void add_directed_edge(int from, int to, T weight = 1, int id = -1) {
        adj[from].push_back(edges.size());
        edges.push_back({from, to, weight, id});
    }

    void dfs(int u) {
        visited[u] = 1;
        for (int id : adj[u]) {
            int v = edges[id].to; 
            if (!visited[v]) dfs(v);
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; 
    if (!(cin >> n >> m)) return 0;
    
    // Instanciamos los dos grafos
    Graph<ll> G_normal(n);
    Graph<ll> G_reverso(n);

    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        G_normal.add_directed_edge(u, v);
        G_reverso.add_directed_edge(v, u); // Arista invertida
    }

    // --- FASE 1: DFS de Ida ---
    G_normal.dfs(1);
    for (int u = 1; u <= n; u++) {
       if (!G_normal.visited[u]) {
           cout << "NO\n";
           cout << 1 << " " << u << "\n"; // 1 no pudo llegar a 'u'
           return 0;
       }
    }

    // --- FASE 2: DFS de Regreso ---
    G_reverso.dfs(1);
    for (int u = 1; u <= n; u++) {
       if (!G_reverso.visited[u]) {
           cout << "NO\n";
           cout << u << " " << 1 << "\n"; // 'u' no pudo llegar a 1
           return 0;
       }
    }

    // --- FASE 3: Éxito Absoluto ---
    cout << "YES\n";
    
    return 0;
}
