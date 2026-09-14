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

// ==========================================
// 🚀 DISJOINT SET UNION (DSU)
// ==========================================
struct DSU {
    vector<int> p, sz;
    
    DSU(int n) {
        p.resize(n);
        sz.assign(n, 1);
        iota(p.begin(), p.end(), 0);
    }
    
    int find(int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    }
    
    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        return true;
    }
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

    // 5. Encontrar Ciclo Dirigido (Round Trip II) - Blindado contra RE
    // Retorna: vector vacio si no hay ciclo. Si hay, retorna los nodos del ciclo en orden [c1, c2, ..., ck, c1].
    vector<int> find_directed_cycle() {
        vector<int> state(n + 1, 0); // 0: Blanco (no visitado), 1: Gris (en pila), 2: Negro (terminado)
        vector<int> parent(n + 1, -1);
        vector<int> cycle;
        
        auto dfs = [&](auto& self, int u) -> bool {
            state[u] = 1; // Gris
            for (int id : adj[u]) {
                int v = edges[id].to;
                if (state[v] == 0) {
                    parent[v] = u;
                    if (self(self, v)) return true;
                } else if (state[v] == 1) { // Ciclo dirigido encontrado
                    cycle.push_back(v);
                    int curr = u;
                    while (curr != -1 && curr != v) { // Blindado contra parent[-1]
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

    // 6. Encontrar Ciclo No Dirigido (Round Trip I) - Blindado contra multi-aristas y RE
    // Retorna: vector vacio si no hay ciclo. Si hay, retorna los nodos del ciclo en orden [c1, c2, ..., ck, c1].
    vector<int> find_undirected_cycle() {
        vector<int> state(n + 1, 0); // 0: Blanco, 1: Gris (en pila), 2: Negro
        vector<int> parent_node(n + 1, -1);
        vector<int> cycle;
        
        auto dfs = [&](auto& self, int u, int p_edge_idx) -> bool {
            state[u] = 1;
            for (int id : adj[u]) {
                // Si la arista es la inversa de la que usamos para llegar a u, la ignoramos
                if ((id ^ 1) == p_edge_idx) continue;
                int v = edges[id].to;

                if (state[v] == 0) {
                    parent_node[v] = u;
                    if (self(self, v, id)) return true;
                } else if (state[v] == 1) { // Ciclo encontrado (back-edge hacia un ancestro)
                    cycle.push_back(v);
                    int curr = u;
                    while (curr != -1 && curr != v) { // Blindado contra desbordamiento
                        cycle.push_back(curr);
                        curr = parent_node[curr];
                    }
                    cycle.push_back(v);
                    reverse(cycle.begin(), cycle.end());
                    return true;
                }
            }
            state[u] = 2;
            return false;
        };

        for (int i = 1; i <= n; i++) {
            if (state[i] == 0) {
                if (dfs(dfs, i, -1)) return cycle;
            }
        }
        return cycle;
    }

    // 7. Algoritmo de Kruskal para Minimum Spanning Tree (MST)
    pair<T, vector<int>> kruskal() {
        vector<int> edge_indices(edges.size());
        iota(edge_indices.begin(), edge_indices.end(), 0);
        
        sort(edge_indices.begin(), edge_indices.end(), [&](int a, int b) {
            return edges[a].weight < edges[b].weight;
        });
        
        DSU dsu(n + 1);
        T mst_weight = 0;
        vector<int> mst_edges;
        
        for (int idx : edge_indices) {
            auto& e = edges[idx];
            if (dsu.unite(e.from, e.to)) {
                mst_weight += e.weight;
                mst_edges.push_back(idx);
                if (mst_edges.size() == (size_t)(n - 1)) break;
            }
        }
        
        return {mst_weight, mst_edges};
    }

    // 8. Circuito Euleriano (Hierholzer's Algorithm) O(V + E)
    vector<int> eulerian_circuit(int start_node = 1, bool undirected = true) {
        vector<int> in_deg(n + 1, 0), out_deg(n + 1, 0);
        int max_id = -1;
        for (auto& e : edges) {
            out_deg[e.from]++;
            in_deg[e.to]++;
            max_id = max(max_id, e.id);
        }
        
        for (int i = 1; i <= n; i++) {
            if (undirected) {
                if (out_deg[i] % 2 != 0) return {};
            } else {
                if (in_deg[i] != out_deg[i]) return {};
            }
        }

        vector<bool> used_edge(max_id + 1, false);
        vector<int> circuit;
        vector<int> head(n + 1, 0);
        
        auto dfs = [&](auto& self, int u) -> void {
            while (head[u] < adj[u].size()) {
                int edge_idx = adj[u][head[u]++];
                auto& e = edges[edge_idx];
                
                if (e.id != -1) {
                    if (!used_edge[e.id]) {
                        used_edge[e.id] = true;
                        self(self, e.to);
                    }
                } else {
                    self(self, e.to);
                }
            }
            circuit.push_back(u);
        };
        
        dfs(dfs, start_node);
        reverse(circuit.begin(), circuit.end());
        
        int required_size = undirected ? (edges.size() / 2 + 1) : (edges.size() + 1);
        if (circuit.size() != required_size && edges.size() > 0) return {};
        
        return circuit;
    }
};
// ==========================================
// 🚀 BINARY LIFTING (Grafos Funcionales)
// ==========================================
// Cada nodo u tiene un único sucesor succ[u] (out-degree = 1).
// Incluye:
// - Descomposición de TODOS los ciclos en O(N) sin recursión profunda.
// - Binary Lifting para saltar K pasos en O(log K).
// - Identificación de nodos en ciclo, distancias a ciclo y tamaños de ciclo.
struct FunctionalGraph {
    int n, log_k;
    vector<vector<int>> up;
    vector<int> succ;
    
    // Información de ciclos
    vector<vector<int>> cycles;    // Lista con todos los ciclos [ [c1, c2, c3], ... ]
    vector<int> in_cycle;          // 1 si el nodo u pertenece a un ciclo, 0 si no
    vector<int> cycle_id;          // ID del ciclo al que pertenece o al que llega
    vector<int> cycle_pos;         // Posición (0-indexed) del nodo dentro de su ciclo
    vector<int> cycle_size;        // Tamaño del ciclo al que pertenece o al que llega
    vector<int> dist_to_cycle;     // Distancia en pasos desde u hasta entrar a su ciclo

    FunctionalGraph(int _n, int max_k_bits = 60) : n(_n), log_k(max_k_bits) {
        up.assign(n + 1, vector<int>(log_k, 0));
        succ.assign(n + 1, 0);
        in_cycle.assign(n + 1, 0);
        cycle_id.assign(n + 1, -1);
        cycle_pos.assign(n + 1, -1);
        cycle_size.assign(n + 1, 0);
        dist_to_cycle.assign(n + 1, 0);
    }

    // 1. Descomposición completa de ciclos en O(N) lineal e iterativo (cero riesgo de Stack Overflow)
    void decompose_cycles(const vector<int>& _succ) {
        succ = _succ;
        vector<int> state(n + 1, 0); // 0: No visitado, 1: En camino actual, 2: Terminado
        cycles.clear();

        for (int i = 1; i <= n; i++) {
            if (state[i] != 0) continue;
            
            int curr = i;
            vector<int> path;
            while (curr >= 1 && curr <= n && state[curr] == 0) {
                state[curr] = 1;
                path.push_back(curr);
                curr = succ[curr];
            }

            // Si chocamos con un nodo en la ruta actual, encontramos un ciclo nuevo
            if (curr >= 1 && curr <= n && state[curr] == 1) {
                vector<int> cyc;
                bool found_start = false;
                for (int u : path) {
                    if (u == curr) found_start = true;
                    if (found_start) cyc.push_back(u);
                }
                
                int cid = cycles.size();
                int c_sz = cyc.size();
                for (int pos = 0; pos < c_sz; pos++) {
                    int u = cyc[pos];
                    in_cycle[u] = 1;
                    cycle_id[u] = cid;
                    cycle_pos[u] = pos;
                    cycle_size[u] = c_sz;
                    dist_to_cycle[u] = 0;
                }
                cycles.push_back(cyc);
            }

            for (int u : path) state[u] = 2;
        }

        // Calcular distancias y ciclo destino para los nodos que no están en ciclo
        for (int i = 1; i <= n; i++) {
            if (in_cycle[i]) continue;
            int curr = i;
            vector<int> path;
            while (curr >= 1 && curr <= n && !in_cycle[curr] && cycle_id[curr] == -1) {
                path.push_back(curr);
                curr = succ[curr];
            }
            int target_cid = (curr >= 1 && curr <= n) ? cycle_id[curr] : -1;
            int target_csz = (curr >= 1 && curr <= n) ? cycle_size[curr] : 0;
            int d = (curr >= 1 && curr <= n) ? dist_to_cycle[curr] : 0;

            for (int j = (int)path.size() - 1; j >= 0; j--) {
                d++;
                int u = path[j];
                cycle_id[u] = target_cid;
                cycle_size[u] = target_csz;
                dist_to_cycle[u] = d;
            }
        }
    }

    // 2. Binary Lifting para consultas de saltos en O(log K)
    void build_binary_lifting(const vector<int>& _succ) {
        succ = _succ;
        for (int i = 1; i <= n; i++) up[i][0] = succ[i];
        for (int j = 1; j < log_k; j++) {
            for (int i = 1; i <= n; i++) {
                int p = up[i][j - 1];
                up[i][j] = (p >= 1 && p <= n) ? up[p][j - 1] : 0;
            }
        }
    }

    // Salto de K pasos en O(log K)
    int get_kth_successor(int u, ll k) {
        for (int j = 0; j < log_k; j++) {
            if (k & (1LL << j)) {
                u = up[u][j];
                if (u < 1 || u > n) return 0;
            }
        }
        return u;
    }

    // Verifica si existe al menos un ciclo de longitud exacta K en O(Número de Ciclos) <= O(N)
    bool has_cycle_of_length(int target_len) {
        for (auto& cyc : cycles) {
            if ((int)cyc.size() == target_len) return true;
        }
        return false;
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

// ==========================================
// 2-SAT (Satisfactibilidad Booleana)
// ================================================================
struct TwoSat {
    int n;
    Graph<ll> G;
    vector<bool> assignment;

    TwoSat(int _n) : n(_n), G(2 * _n) {
        assignment.assign(n + 1, false);
    }

    int get_node(int u, bool is_true) {
        return is_true ? u : u + n;
    }

    void add_clause(int u, bool is_u_true, int v, bool is_v_true) {
        int not_u = get_node(u, !is_u_true);
        int node_v = get_node(v, is_v_true);
        int not_v = get_node(v, !is_v_true);
        int node_u = get_node(u, is_u_true);
        
        G.add_directed_edge(not_u, node_v);
        G.add_directed_edge(not_v, node_u);
    }

    void force_value(int u, bool is_true) {
        add_clause(u, is_true, u, is_true);
    }

    void add_implication(int u, bool is_u_true, int v, bool is_v_true) {
        add_clause(u, !is_u_true, v, is_v_true);
    }

    void add_xor(int u, bool is_u_true, int v, bool is_v_true) {
        add_clause(u, is_u_true, v, is_v_true);
        add_clause(u, !is_u_true, v, !is_v_true);
    }

    void add_equivalence(int u, bool is_u_true, int v, bool is_v_true) {
        add_implication(u, is_u_true, v, is_v_true);
        add_implication(v, is_v_true, u, is_u_true);
    }

    bool solve() {
        vector<int> comp = G.get_scc();
        for (int i = 1; i <= n; i++) {
            if (comp[i] == comp[i + n]) return false;
            assignment[i] = comp[i] < comp[i + n];
        }
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> f(n + 1);
    for (int i = 1; i <= n; i++) cin >> f[i];


    FunctionalGraph fg(n);
    fg.decompose_cycles(f);

    if (fg.has_cycle_of_length(3)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
