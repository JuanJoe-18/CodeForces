#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll LINF = 1e18;

// ==========================================
// 🚀 ESTRUCTURA MAESTRA DE GRAFOS (ICPC)
// ==========================================
template <typename T = ll>
struct Edge {
    int from, to;
    T weight;
    int id; // Util para caminos Eulerianos o puentes
};

template <typename T = ll>
struct Graph {
    int n;
    vector<vector<int>> adj; // Guarda indices de las aristas
    vector<Edge<T>> edges;   // Guarda la informacion real de las aristas

    Graph(int _n) : n(_n) {
        adj.resize(n + 1);
    }

    // Agregar arista dirigida
    void add_directed_edge(int from, int to, T weight = 1, int id = -1) {
        adj[from].push_back(edges.size());
        edges.push_back({from, to, weight, id});
    }

    // Agregar arista bidireccional
    void add_undirected_edge(int u, int v, T weight = 1, int id = -1) {
        add_directed_edge(u, v, weight, id);
        add_directed_edge(v, u, weight, id);
    }

    // ---------------------------------------------------------
    // 🧠 ALGORITMOS INTEGRADOS
    // ---------------------------------------------------------
    
    // 1. Dijkstra O(E log V)
    vector<T> dijkstra(int src) {
        vector<T> dist(n + 1, LINF);
        priority_queue<pair<T, int>, vector<pair<T, int>>, greater<>> pq;
        dist[src] = 0;
        pq.push({0, src});

        while (!pq.empty()) {
            auto [d, u] = pq.top(); pq.pop();
            if (d > dist[u]) continue;
            for (int id : adj[u]) {
                auto& edge = edges[id];
                if (dist[u] + edge.weight < dist[edge.to]) {
                    dist[edge.to] = dist[u] + edge.weight;
                    pq.push({dist[edge.to], edge.to});
                }
            }
        }
        return dist;
    }

    // 2. Ordenamiento Topológico (Kahn's Algorithm)
    vector<int> topo_sort() {
        vector<int> in_degree(n + 1, 0), order;
        for (auto& e : edges) in_degree[e.to]++;
        
        queue<int> q;
        for (int i = 1; i <= n; i++) 
            if (in_degree[i] == 0) q.push(i);
            
        while (!q.empty()) {
            int u = q.front(); q.pop();
            order.push_back(u);
            for (int id : adj[u]) {
                if (--in_degree[edges[id].to] == 0)
                    q.push(edges[id].to);
            }
        }
        return (order.size() == n) ? order : vector<int>(); // Vacio si hay ciclo
    }

    // 3. Tarjan para Componentes Fuertemente Conexas (SCC)
    // Devuelve un arreglo donde comp[i] es el ID de la componente del nodo i
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

    // 4. Bellman-Ford O(V E)
    // Retorna: <bool (ok), vector<T> (distancias), vector<int> (padres), vector<int> (ciclo negativo)>
    tuple<bool, vector<T>, vector<int>, vector<int>> bellman_ford(int src) {
        vector<T> dist(n + 1, LINF);
        vector<int> p(n + 1, -1);
        dist[src] = 0;
        int x = -1;

        for (int i = 0; i < n; i++) {
            x = -1;
            for (auto& edge : edges) {
                if (dist[edge.from] < LINF) {
                    if (dist[edge.to] > dist[edge.from] + edge.weight) {
                        dist[edge.to] = max(-LINF, dist[edge.from] + edge.weight);
                        p[edge.to] = edge.from;
                        x = edge.to;
                    }
                }
            }
        }

        vector<int> cycle;
        bool ok = true;
        if (x != -1) {
            ok = false;
            int y = x;
            for (int i = 0; i < n; i++) y = p[y];
            for (int cur = y;; cur = p[cur]) {
                cycle.push_back(cur);
                if (cur == y && cycle.size() > 1) break;
            }
            reverse(cycle.begin(), cycle.end());
        }

        return {ok, dist, p, cycle};
    }

    // 5. Encontrar Ciclo Dirigido (Round Trip II)
    // Retorna: vector vacio si no hay ciclo. Si hay, retorna los nodos del ciclo en orden.
    vector<int> find_directed_cycle() {
        vector<int> state(n + 1, 0);
        vector<int> parent(n + 1, -1);
        vector<int> cycle;
        
        auto dfs = [&](auto& self, int u) -> bool {
            state[u] = 1; // Gris
            for (int id : adj[u]) {
                int v = edges[id].to;
                if (state[v] == 0) {
                    parent[v] = u;
                    if (self(self, v)) return true;
                } else if (state[v] == 1) { // Ciclo encontrado
                    cycle.push_back(v);
                    int curr = u;
                    while (curr != v) {
                        cycle.push_back(curr);
                        curr = parent[curr];
                    }
                    cycle.push_back(v);
                    reverse(cycle.begin(), cycle.end());
                    return true;
                }
            }
            state[u] = 2; // Negro
            return false;
        };

        for (int i = 1; i <= n; i++) {
            if (state[i] == 0) {
                if (dfs(dfs, i)) return cycle;
            }
        }
        return cycle;
    }

    // 6. Encontrar Ciclo No Dirigido (Round Trip I)
    // Retorna: vector vacio si no hay ciclo. Si hay, retorna los nodos del ciclo en orden.
    vector<int> find_undirected_cycle() {
        vector<bool> visited(n + 1, false);
        vector<int> parent(n + 1, -1);
        vector<int> cycle;
        
        auto dfs = [&](auto& self, int u, int p) -> bool {
            visited[u] = true;
            for (int id : adj[u]) {
                int v = edges[id].to;
                if (v == p) continue; // Ignorar la arista por la que vinimos
                if (!visited[v]) {
                    parent[v] = u;
                    if (self(self, v, u)) return true;
                } else { // Ciclo encontrado
                    cycle.push_back(v);
                    int curr = u;
                    while (curr != v) {
                        cycle.push_back(curr);
                        curr = parent[curr];
                    }
                    cycle.push_back(v);
                    reverse(cycle.begin(), cycle.end());
                    return true;
                }
            }
            return false;
        };

        for (int i = 1; i <= n; i++) {
            if (!visited[i]) {
                if (dfs(dfs, i, -1)) return cycle;
            }
        }
        return cycle;
    }
};

// ==========================================
// 🚀 BINARY LIFTING (Grafos Funcionales)
// ==========================================
struct FunctionalGraph {
    int n, log_k;
    vector<vector<int>> up;

    FunctionalGraph(int _n, int max_k_bits = 60) : n(_n), log_k(max_k_bits) {
        up.assign(n + 1, vector<int>(log_k, 0));
    }

    // succ[i] es el sucesor a 1 paso del nodo i
    void build(const vector<int>& succ) {
        for (int i = 1; i <= n; i++) up[i][0] = succ[i];
        for (int j = 1; j < log_k; j++) {
            for (int i = 1; i <= n; i++) {
                up[i][j] = up[up[i][j - 1]][j - 1];
            }
        }
    }

    int get_kth_successor(int u, ll k) {
        for (int j = 0; j < log_k; j++) {
            if (k & (1LL << j)) {
                u = up[u][j];
            }
        }
        return u;
    }
};

// ==========================================
// 🚀 LOWEST COMMON ANCESTOR (Árboles)
// ==========================================
struct LCA {
    int n, log_n;
    vector<vector<int>> up;
    vector<int> depth;

    LCA(int _n, int _log_n = 20) : n(_n), log_n(_log_n) {
        up.assign(n + 1, vector<int>(log_n, 0));
        depth.assign(n + 1, 0);
    }

    // adj = lista de adyacencia bidireccional del árbol
    void dfs(int u, int p, const vector<vector<int>>& adj) {
        up[u][0] = p;
        for (int j = 1; j < log_n; j++) {
            up[u][j] = up[up[u][j - 1]][j - 1];
        }
        for (int v : adj[u]) {
            if (v != p) {
                depth[v] = depth[u] + 1;
                dfs(v, u, adj);
            }
        }
    }

    void build(int root, const vector<vector<int>>& adj) {
        dfs(root, root, adj);
    }

    int get_lca(int u, int v) {
        if (depth[u] < depth[v]) swap(u, v);
        int k = depth[u] - depth[v];
        for (int j = 0; j < log_n; j++) {
            if (k & (1 << j)) u = up[u][j];
        }
        if (u == v) return u;
        for (int j = log_n - 1; j >= 0; j--) {
            if (up[u][j] != up[v][j]) {
                u = up[u][j];
                v = up[v][j];
            }
        }
        return up[u][0];
    }

    int get_dist(int u, int v) {
        return depth[u] + depth[v] - 2 * depth[get_lca(u, v)];
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q; 
    cin >> n >> q;
    
    vector<int> succ(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> succ[i];
    }
    
    Graph<ll> G(n);
    
    
    return 0;
}
