#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll LINF = 1e18;
const int INF = 1e9 + 7;

// ====================================================================
//  ESTRUCTURA MAESTRA DE ÁRBOLES (ICPC TEMPLATE)
// ====================================================================
// Contenido:
// 1. Base Tree (1-indexed, pesos, diámetros, centros, distancias)
// 2. Binary Lifting / LCA + Path Queries (Dist, K-ésimo ancestro, Min/Max/Sum
// en caminos)
// 3. Euler Tour / Subtree flattening (Subtree updates & queries)
// 4. Heavy-Light Decomposition (HLD) con Segment Tree (Path & Subtree
// updates/queries)
// 5. Centroid Decomposition (Descomposición en Centroides para caminos)
// 6. DSU on Tree (Sack / Small-to-Large en árboles O(N log N))
// 7. Virtual Tree / Auxiliary Tree (Árbol virtual O(K log K))
// 8. Tree Hashing / Isomorphism (Hashes de árboles con subárboles)
// 9. Rerooting DP (DP en todas las direcciones / Todas las raíces)
// ====================================================================

template <typename T = ll> struct Edge {
  int to;
  T weight;
  int id;
};

// ====================================================================
// 1. ÁRBOL BASE: RECORRIDOS, DIÁMETRO, CENTRO Y DISTANCIAS
// ====================================================================
template <typename T = ll> struct Tree {
  int n;
  int root;
  vector<vector<Edge<T>>> adj;
  vector<int> parent, depth, sz, tin, tout, euler_order;
  vector<T> dist_from_root;
  int timer;

  Tree(int _n = 0) : n(_n), root(1), timer(0) {
    adj.resize(n + 1);
    parent.assign(n + 1, 0);
    depth.assign(n + 1, 0);
    sz.assign(n + 1, 0);
    tin.assign(n + 1, 0);
    tout.assign(n + 1, 0);
    dist_from_root.assign(n + 1, 0);
  }

  void add_edge(int u, int v, T w = 1, int id = -1) {
    adj[u].push_back({v, w, id});
    adj[v].push_back({u, w, id});
  }

  void add_directed_edge(int u, int v, T w = 1, int id = -1) {
    adj[u].push_back({v, w, id});
  }

  void dfs_init(int u, int p = 0, int d = 0, T cur_dist = 0) {
    parent[u] = p;
    depth[u] = d;
    dist_from_root[u] = cur_dist;
    sz[u] = 1;
    tin[u] = ++timer;
    euler_order.push_back(u);

    for (auto &edge : adj[u]) {
      int v = edge.to;
      if (v != p) {
        dfs_init(v, u, d + 1, cur_dist + edge.weight);
        sz[u] += sz[v];
      }
    }
    tout[u] = timer;
  }

  void init(int _root = 1) {
    root = _root;
    timer = 0;
    euler_order.clear();
    dfs_init(root, 0, 0, 0);
  }

  // Diámetro del árbol O(N): Retorna {longitud, {u, v}, camino_completo}
  struct DiameterResult {
    T length;
    int u, v;
    vector<int> path;
  };

  DiameterResult get_diameter() {
    auto bfs_farthest = [&](int start) -> pair<int, T> {
      vector<T> dist(n + 1, -1);
      queue<int> q;
      q.push(start);
      dist[start] = 0;
      int farthest = start;

      while (!q.empty()) {
        int u = q.front();
        q.pop();
        if (dist[u] > dist[farthest])
          farthest = u;
        for (auto &edge : adj[u]) {
          int v = edge.to;
          if (dist[v] == -1) {
            dist[v] = dist[u] + edge.weight;
            q.push(v);
          }
        }
      }
      return {farthest, dist[farthest]};
    };

    int u = bfs_farthest(1).first;
    auto [v, length] = bfs_farthest(u);

    // Reconstruir camino
    vector<int> prev(n + 1, -1);
    queue<int> q;
    q.push(u);
    prev[u] = 0;
    while (!q.empty()) {
      int curr = q.front();
      q.pop();
      if (curr == v)
        break;
      for (auto &edge : adj[curr]) {
        int nxt = edge.to;
        if (prev[nxt] == -1) {
          prev[nxt] = curr;
          q.push(nxt);
        }
      }
    }

    vector<int> path;
    for (int curr = v; curr != 0; curr = prev[curr]) {
      path.push_back(curr);
    }
    reverse(path.begin(), path.end());

    return {length, u, v, path};
  }

  // Centros del árbol (1 o 2 nodos en el centro del diámetro)
  vector<int> get_centers() {
    auto diam = get_diameter();
    int sz_path = diam.path.size();
    if (sz_path % 2 == 1) {
      return {diam.path[sz_path / 2]};
    } else {
      return {diam.path[sz_path / 2 - 1], diam.path[sz_path / 2]};
    }
  }

  // Tree Distances I: Distancia máxima desde cada nodo hacia cualquier otro
  // O(N)
  vector<T> all_farthest_distances() {
    auto diam = get_diameter();
    int u = diam.u, v = diam.v;

    auto get_dist_array = [&](int start) {
      vector<T> d(n + 1, -1);
      queue<int> q;
      q.push(start);
      d[start] = 0;
      while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto &e : adj[curr]) {
          if (d[e.to] == -1) {
            d[e.to] = d[curr] + e.weight;
            q.push(e.to);
          }
        }
      }
      return d;
    };

    vector<T> dist_u = get_dist_array(u);
    vector<T> dist_v = get_dist_array(v);
    vector<T> max_dist(n + 1, 0);
    for (int i = 1; i <= n; i++) {
      max_dist[i] = max(dist_u[i], dist_v[i]);
    }
    return max_dist;
  }
};

// ====================================================================
// 2. BINARY LIFTING / LCA & PATH QUERIES
// ====================================================================
template <typename T = ll> struct BinaryLifting {
  int n, log_n;
  vector<int> depth;
  vector<vector<int>> up;
  vector<vector<T>> mx, mn, sum;
  vector<T> dist_root;

  BinaryLifting(const Tree<T> &tree, int root = 1) {
    n = tree.n;
    log_n = 32 - __builtin_clz(n) + 1;
    depth = tree.depth;
    dist_root = tree.dist_from_root;

    up.assign(n + 1, vector<int>(log_n, 0));
    mx.assign(n + 1, vector<T>(log_n, -LINF));
    mn.assign(n + 1, vector<T>(log_n, LINF));
    sum.assign(n + 1, vector<T>(log_n, 0));

    // Inicializar padres directos
    for (int u = 1; u <= n; u++) {
      up[u][0] = tree.parent[u] ? tree.parent[u] : u;
    }

    // Si hay pesos en las aristas:
    for (int u = 1; u <= n; u++) {
      for (auto &e : tree.adj[u]) {
        if (e.to == tree.parent[u]) {
          mx[u][0] = mn[u][0] = sum[u][0] = e.weight;
        }
      }
    }

    // Construir tabla 2^k
    for (int j = 1; j < log_n; j++) {
      for (int i = 1; i <= n; i++) {
        int p = up[i][j - 1];
        up[i][j] = up[p][j - 1];
        mx[i][j] = max(mx[i][j - 1], mx[p][j - 1]);
        mn[i][j] = min(mn[i][j - 1], mn[p][j - 1]);
        sum[i][j] = sum[i][j - 1] + sum[p][j - 1];
      }
    }
  }

  // K-ésimo ancestro de u (O(log N))
  int kth_ancestor(int u, int k) {
    if (depth[u] < k)
      return 0;
    for (int j = 0; j < log_n; j++) {
      if (k & (1 << j))
        u = up[u][j];
    }
    return u;
  }

  // Ancestro común más bajo (LCA) en O(log N)
  int lca(int u, int v) {
    if (depth[u] < depth[v])
      swap(u, v);
    u = kth_ancestor(u, depth[u] - depth[v]);
    if (u == v)
      return u;

    for (int j = log_n - 1; j >= 0; j--) {
      if (up[u][j] != up[v][j]) {
        u = up[u][j];
        v = up[v][j];
      }
    }
    return up[u][0];
  }

  // Distancia en número de aristas entre u y v
  int dist_edges(int u, int v) {
    return depth[u] + depth[v] - 2 * depth[lca(u, v)];
  }

  // Distancia con pesos entre u y v
  T dist_weighted(int u, int v) {
    return dist_root[u] + dist_root[v] - 2 * dist_root[lca(u, v)];
  }

  // K-ésimo nodo en el camino de u hacia v (0-indexed: 0 = u)
  int kth_node_on_path(int u, int v, int k) {
    int anc = lca(u, v);
    int d1 = depth[u] - depth[anc];
    int d2 = depth[v] - depth[anc];
    if (k <= d1)
      return kth_ancestor(u, k);
    k -= d1;
    if (k <= d2)
      return kth_ancestor(v, d2 - k);
    return 0; // Fuera del camino
  }

  // Máximo peso de arista en el camino entre u y v
  T path_max(int u, int v) {
    int anc = lca(u, v);
    T res = -LINF;
    auto lift_max = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) {
        if (steps & (1 << j)) {
          res = max(res, mx[node][j]);
          node = up[node][j];
        }
      }
    };
    lift_max(u, depth[u] - depth[anc]);
    lift_max(v, depth[v] - depth[anc]);
    return res;
  }

  // Mínimo peso de arista en el camino entre u y v
  T path_min(int u, int v) {
    int anc = lca(u, v);
    T res = LINF;
    auto lift_min = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) {
        if (steps & (1 << j)) {
          res = min(res, mn[node][j]);
          node = up[node][j];
        }
      }
    };
    lift_min(u, depth[u] - depth[anc]);
    lift_min(v, depth[v] - depth[anc]);
    return res;
  }

  // Suma de pesos de aristas en el camino entre u y v
  T path_sum(int u, int v) {
    int anc = lca(u, v);
    T res = 0;
    auto lift_sum = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) {
        if (steps & (1 << j)) {
          res += sum[node][j];
          node = up[node][j];
        }
      }
    };
    lift_sum(u, depth[u] - depth[anc]);
    lift_sum(v, depth[v] - depth[anc]);
    return res;
  }

  // Verifica si 'u' es ancestro de 'v'
  bool is_ancestor(int u, int v) { return lca(u, v) == u; }
};

// ====================================================================
// 3. EULER TOUR TECHNIQUE (Subtree Flattening para SegTree/Fenwick)
// ====================================================================
// Mapea cada subárbol a un intervalo continuo [tin[u], tout[u]].
// Actualizar/consultar subárbol se convierte en una consulta en rango 1D.
template <typename T = ll> struct EulerTourTree {
  int n;
  Tree<T> &tree;
  vector<int> in, out;

  EulerTourTree(Tree<T> &_tree) : tree(_tree) {
    n = tree.n;
    in = tree.tin;
    out = tree.tout;
  }

  // Intervalo inclusivo [L, R] en 1D correspondiente al subárbol de u
  pair<int, int> subtree_range(int u) { return {in[u], out[u]}; }

  // Tamaño del subárbol de u
  int subtree_size(int u) { return out[u] - in[u] + 1; }
};

// ====================================================================
// 4. HEAVY-LIGHT DECOMPOSITION (HLD) + SEGMENT TREE INTEGRADO
// ====================================================================
// Permite actualizaciones y consultas en caminos y subárboles en O(log^2 N) o
// O(log N).
template <typename T = ll> struct HLD {
  int n;
  vector<vector<int>> adj;
  vector<int> parent, depth, heavy, head, pos;
  vector<T> node_val;
  int cur_pos;

  // Segment Tree integrado para operaciones de suma y máximo en caminos
  struct SegTree {
    int size;
    vector<T> tree, lazy;

    void init(int _n) {
      size = 1;
      while (size < _n)
        size <<= 1;
      tree.assign(2 * size, 0);
      lazy.assign(2 * size, 0);
    }

    void push(int node, int l, int r) {
      if (lazy[node] == 0)
        return;
      tree[node] += lazy[node] * (r - l + 1);
      if (l != r) {
        lazy[2 * node] += lazy[node];
        lazy[2 * node + 1] += lazy[node];
      }
      lazy[node] = 0;
    }

    void update(int node, int l, int r, int ql, int qr, T val) {
      push(node, l, r);
      if (ql > r || qr < l)
        return;
      if (ql <= l && r <= qr) {
        lazy[node] += val;
        push(node, l, r);
        return;
      }
      int mid = (l + r) / 2;
      update(2 * node, l, mid, ql, qr, val);
      update(2 * node + 1, mid + 1, r, ql, qr, val);
      tree[node] = tree[2 * node] + tree[2 * node + 1];
    }

    T query(int node, int l, int r, int ql, int qr) {
      push(node, l, r);
      if (ql > r || qr < l)
        return 0;
      if (ql <= l && r <= qr)
        return tree[node];
      int mid = (l + r) / 2;
      return query(2 * node, l, mid, ql, qr) +
             query(2 * node + 1, mid + 1, r, ql, qr);
    }
  } seg;

  HLD(int _n) : n(_n), cur_pos(1) {
    adj.resize(n + 1);
    parent.assign(n + 1, 0);
    depth.assign(n + 1, 0);
    heavy.assign(n + 1, -1);
    head.assign(n + 1, 0);
    pos.assign(n + 1, 0);
    node_val.assign(n + 1, 0);
    seg.init(n + 1);
  }

  void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int dfs_size(int u, int p, int d) {
    int sz = 1, max_c_size = 0;
    depth[u] = d;
    parent[u] = p;
    heavy[u] = -1;

    for (int v : adj[u]) {
      if (v != p) {
        int c_size = dfs_size(v, u, d + 1);
        sz += c_size;
        if (c_size > max_c_size) {
          max_c_size = c_size;
          heavy[u] = v;
        }
      }
    }
    return sz;
  }

  void decompose(int u, int h) {
    head[u] = h;
    pos[u] = cur_pos++;
    if (heavy[u] != -1) {
      decompose(heavy[u], h); // Misma cadena pesada
    }
    for (int v : adj[u]) {
      if (v != parent[u] && v != heavy[u]) {
        decompose(v, v); // Nueva cabeza de cadena ligera
      }
    }
  }

  void init(int root = 1) {
    cur_pos = 1;
    dfs_size(root, 0, 0);
    decompose(root, root);
  }

  // Actualiza el camino de u a v sumando 'val' a los nodos
  void update_path(int u, int v, T val) {
    while (head[u] != head[v]) {
      if (depth[head[u]] > depth[head[v]])
        swap(u, v);
      seg.update(1, 1, n, pos[head[v]], pos[v], val);
      v = parent[head[v]];
    }
    if (depth[u] > depth[v])
      swap(u, v);
    seg.update(1, 1, n, pos[u], pos[v], val);
  }

  // Consulta la suma en el camino de u a v en O(log^2 N)
  T query_path(int u, int v) {
    T res = 0;
    while (head[u] != head[v]) {
      if (depth[head[u]] > depth[head[v]])
        swap(u, v);
      res += seg.query(1, 1, n, pos[head[v]], pos[v]);
      v = parent[head[v]];
    }
    if (depth[u] > depth[v])
      swap(u, v);
    res += seg.query(1, 1, n, pos[u], pos[v]);
    return res;
  }

  // Actualiza el subárbol completo de u en O(log N)
  void update_subtree(int u, int sz_u, T val) {
    seg.update(1, 1, n, pos[u], pos[u] + sz_u - 1, val);
  }

  // Consulta el subárbol completo de u en O(log N)
  T query_subtree(int u, int sz_u) {
    return seg.query(1, 1, n, pos[u], pos[u] + sz_u - 1);
  }

  // Actualiza un nodo individual
  void update_node(int u, T val) { seg.update(1, 1, n, pos[u], pos[u], val); }

  // LCA usando HLD en O(log N)
  int lca(int u, int v) {
    while (head[u] != head[v]) {
      if (depth[head[u]] > depth[head[v]])
        swap(u, v);
      v = parent[head[v]];
    }
    return depth[u] < depth[v] ? u : v;
  }
};

// ====================================================================
// 5. CENTROID DECOMPOSITION (Árbol de Centroides)
// ====================================================================
// Descompone el árbol recursivamente en O(N log N) con altura <= log2(N).
// Ideal para contar caminos con propiedad K, distancias mínimas a nodos
// marcados, etc.
struct CentroidDecomposition {
  int n;
  vector<vector<int>> adj;
  vector<int> sz, c_parent;
  vector<bool> removed;

  CentroidDecomposition(int _n) : n(_n) {
    adj.resize(n + 1);
    sz.assign(n + 1, 0);
    c_parent.assign(n + 1, 0);
    removed.assign(n + 1, false);
  }

  void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  int get_sizes(int u, int p = 0) {
    sz[u] = 1;
    for (int v : adj[u]) {
      if (v != p && !removed[v]) {
        sz[u] += get_sizes(v, u);
      }
    }
    return sz[u];
  }

  int get_centroid(int u, int p, int tree_size) {
    for (int v : adj[u]) {
      if (v != p && !removed[v] && sz[v] > tree_size / 2) {
        return get_centroid(v, u, tree_size);
      }
    }
    return u;
  }

  int build_tree(int u, int p = 0) {
    int tree_size = get_sizes(u, 0);
    int centroid = get_centroid(u, 0, tree_size);
    removed[centroid] = true;
    c_parent[centroid] = p;

    for (int v : adj[centroid]) {
      if (!removed[v]) {
        build_tree(v, centroid);
      }
    }
    return centroid;
  }

  int init() { return build_tree(1, 0); }
};

// ====================================================================
// 6. DSU ON TREE / SACK (Small-to-Large en Árboles)
// ====================================================================
// Resuelve consultas de subárboles fuera de línea en O(N log N).
// Ejemplo: Contar colores distintos o frecuencias en cada subárbol.
struct DSUOnTree {
  int n;
  vector<vector<int>> adj;
  vector<int> sz, heavy, tin, tout, euler_node;
  vector<int> color, ans;
  vector<int> cnt; // Frecuencias
  int timer, distinct_colors;

  DSUOnTree(int _n) : n(_n), timer(0), distinct_colors(0) {
    adj.resize(n + 1);
    sz.assign(n + 1, 0);
    heavy.assign(n + 1, -1);
    tin.assign(n + 1, 0);
    tout.assign(n + 1, 0);
    euler_node.assign(n + 1, 0);
    color.assign(n + 1, 0);
    ans.assign(n + 1, 0);
    cnt.assign(n + 1, 0);
  }

  void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  void set_colors(const vector<int> &c) {
    for (int i = 1; i <= n; i++)
      color[i] = c[i];
  }

  void dfs_size(int u, int p = 0) {
    sz[u] = 1;
    tin[u] = ++timer;
    euler_node[timer] = u;
    int max_sz = 0;

    for (int v : adj[u]) {
      if (v != p) {
        dfs_size(v, u);
        sz[u] += sz[v];
        if (sz[v] > max_sz) {
          max_sz = sz[v];
          heavy[u] = v;
        }
      }
    }
    tout[u] = timer;
  }

  void add_node(int u) {
    int c = color[u];
    if (cnt[c] == 0)
      distinct_colors++;
    cnt[c]++;
  }

  void remove_node(int u) {
    int c = color[u];
    cnt[c]--;
    if (cnt[c] == 0)
      distinct_colors--;
  }

  void dfs_sack(int u, int p, bool keep) {
    // 1. Procesar hijos ligeros (sin mantener datos)
    for (int v : adj[u]) {
      if (v != p && v != heavy[u]) {
        dfs_sack(v, u, false);
      }
    }

    // 2. Procesar hijo pesado (mantener datos)
    if (heavy[u] != -1) {
      dfs_sack(heavy[u], u, true);
    }

    // 3. Agregar el nodo actual y los hijos ligeros
    add_node(u);
    for (int v : adj[u]) {
      if (v != p && v != heavy[u]) {
        for (int t = tin[v]; t <= tout[v]; t++) {
          add_node(euler_node[t]);
        }
      }
    }

    // 4. Guardar respuesta para el subárbol u
    ans[u] = distinct_colors;

    // 5. Limpiar datos si no somos hijo pesado de nuestro padre
    if (!keep) {
      for (int t = tin[u]; t <= tout[u]; t++) {
        remove_node(euler_node[t]);
      }
    }
  }

  void solve(int root = 1) {
    timer = 0;
    dfs_size(root);
    dfs_sack(root, 0, false);
  }
};

// ====================================================================
// 7. VIRTUAL TREE / AUXILIARY TREE (Árbol Virtual)
// ====================================================================
// Dado un conjunto K de nodos especiales, construye un árbol comprimido
// de tamaño O(K) que contiene solo los nodos especiales y sus LCAs.
// Complejidad: O(K log K)
struct VirtualTree {
  int n;
  Tree<ll> &tree;
  BinaryLifting<ll> &bl;
  vector<vector<pair<int, ll>>> virt_adj;

  VirtualTree(Tree<ll> &_t, BinaryLifting<ll> &_bl) : tree(_t), bl(_bl) {
    n = tree.n;
    virt_adj.resize(n + 1);
  }

  // Construye el árbol virtual a partir de un subconjunto de nodos especiales
  // Retorna la raíz del árbol virtual y el vector con todos los nodos presentes
  pair<int, vector<int>> build(vector<int> nodes) {
    // Ordenar por orden DFS de entrada
    sort(nodes.begin(), nodes.end(),
         [&](int a, int b) { return tree.tin[a] < tree.tin[b]; });

    int k = nodes.size();
    for (int i = 0; i < k - 1; i++) {
      nodes.push_back(bl.lca(nodes[i], nodes[i + 1]));
    }

    // Eliminar duplicados y re-ordenar por tin
    sort(nodes.begin(), nodes.end(),
         [&](int a, int b) { return tree.tin[a] < tree.tin[b]; });
    nodes.erase(unique(nodes.begin(), nodes.end()), nodes.end());

    // Limpiar adyacencias
    for (int u : nodes)
      virt_adj[u].clear();

    // Construir usando una pila
    vector<int> st;
    st.push_back(nodes[0]);

    for (size_t i = 1; i < nodes.size(); i++) {
      int u = nodes[i];
      while (!st.empty() && !bl.is_ancestor(st.back(), u)) {
        st.pop_back();
      }
      if (!st.empty()) {
        int p = st.back();
        ll weight = bl.dist_weighted(p, u);
        virt_adj[p].push_back({u, weight});
        virt_adj[u].push_back({p, weight});
      }
      st.push_back(u);
    }

    return {nodes[0], nodes};
  }
};

// ====================================================================
// 8. TREE HASHING / ISOMORPHISM (Isomorfismo de Árboles)
// ====================================================================
// Comprueba si dos árboles o subárboles tienen la misma estructura sin importar
// etiquetado.
struct TreeHashing {
  // Generador aleatorio para mapear pares/subárboles a enteros únicos
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }

  static uint64_t hash_node(uint64_t x) {
    return splitmix64(x + 0x517cc1b727220a95);
  }

  // Calcula el hash de un árbol enraizado en 'root'
  static uint64_t get_rooted_hash(int u, int p,
                                  const vector<vector<int>> &adj) {
    uint64_t h = 1;
    vector<uint64_t> child_hashes;
    for (int v : adj[u]) {
      if (v != p) {
        child_hashes.push_back(get_rooted_hash(v, u, adj));
      }
    }
    sort(child_hashes.begin(), child_hashes.end());
    for (uint64_t ch : child_hashes) {
      h += hash_node(ch);
    }
    return splitmix64(h);
  }

  // Comprueba isomorfismo en árboles no enraizados usando sus centros
  static bool are_isomorphic(int n1, const vector<vector<int>> &adj1, int n2,
                             const vector<vector<int>> &adj2) {
    if (n1 != n2)
      return false;

    auto get_tree_centers = [&](int n, const vector<vector<int>> &adj) {
      vector<int> deg(n + 1, 0);
      queue<int> leaves;
      for (int i = 1; i <= n; i++) {
        deg[i] = adj[i].size();
        if (deg[i] <= 1)
          leaves.push(i);
      }
      int remaining = n;
      while (remaining > 2) {
        int sz = leaves.size();
        remaining -= sz;
        for (int i = 0; i < sz; i++) {
          int u = leaves.front();
          leaves.pop();
          for (int v : adj[u]) {
            if (--deg[v] == 1)
              leaves.push(v);
          }
        }
      }
      vector<int> centers;
      while (!leaves.empty()) {
        centers.push_back(leaves.front());
        leaves.pop();
      }
      return centers;
    };

    vector<int> c1 = get_tree_centers(n1, adj1);
    vector<int> c2 = get_tree_centers(n2, adj2);

    uint64_t h1 = get_rooted_hash(c1[0], 0, adj1);
    for (int root2 : c2) {
      if (h1 == get_rooted_hash(root2, 0, adj2))
        return true;
    }
    if (c1.size() > 1) {
      uint64_t h1_alt = get_rooted_hash(c1[1], 0, adj1);
      for (int root2 : c2) {
        if (h1_alt == get_rooted_hash(root2, 0, adj2))
          return true;
      }
    }
    return false;
  }
};

// ====================================================================
// 9. REROOTING DP (DP en todas las direcciones O(N))
// ====================================================================
// Resuelve problemas donde se necesita calcular la respuesta considerando
// cada nodo como la raíz del árbol en O(N).
// Ejemplo implementado: Suma de distancias a todos los demás nodos (Tree
// Distances II).
struct RerootingDP {
  int n;
  vector<vector<int>> adj;
  vector<ll> sz, dp_down, ans;

  RerootingDP(int _n) : n(_n) {
    adj.resize(n + 1);
    sz.assign(n + 1, 0);
    dp_down.assign(n + 1, 0);
    ans.assign(n + 1, 0);
  }

  void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  // Paso 1: DP abajo (Bottom-up)
  void dfs_down(int u, int p = 0) {
    sz[u] = 1;
    dp_down[u] = 0;
    for (int v : adj[u]) {
      if (v != p) {
        dfs_down(v, u);
        sz[u] += sz[v];
        dp_down[u] += dp_down[v] + sz[v];
      }
    }
  }

  // Paso 2: Rerooting (Top-down)
  void dfs_reroot(int u, int p = 0) {
    for (int v : adj[u]) {
      if (v != p) {
        // Al mover la raíz de u hacia v:
        // Los nodos en el subárbol de v están 1 paso más cerca (- sz[v])
        // El resto de los nodos (n - sz[v]) están 1 paso más lejos (+ (n -
        // sz[v]))
        ans[v] = ans[u] - sz[v] + (n - sz[v]);
        dfs_reroot(v, u);
      }
    }
  }

  vector<ll> solve(int root = 1) {
    dfs_down(root);
    ans[root] = dp_down[root];
    dfs_reroot(root);
    return ans;
  }
};

int main() {

  int n;
  cin >> n;

  for (size_t i = 0; i < n; i++) {
    cout << 2 * i << endl;
  }

  return 0;
}
