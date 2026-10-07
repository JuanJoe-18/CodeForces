#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

// ================================
// Entrada/Salida rapida
// ================================
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

// ================================
// Atajos
// ================================
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

// ================================
// Constantes globales
// ================================
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;  // cambiar según el problema
const double EPS = 1e-9;
/**
 * Uso[1]: TreeEdge<T> e = {to, id, weight};
 * Arista de arbol con destino, identificador opcional y peso generico.
 * Complejidad: $O(1)$ por arista.
 */
template <typename T = ll> struct TreeEdge { int to, id; T weight; };

/**
 * Uso[1]: Tree<ll> t(n); t.add_edge(u, v, w); t.init(root); t.get_diameter(); t.get_centers();
 * Arbol con raiz: tiempos de entrada/salida (euler), tamanos de subarbol, diametro con camino y centros.
 * Las distancias mas lejanas de cada nodo se calculan aparte con la funcion all_farthest_distances(t).
 * Complejidad: init y diametro $O(N)$.
 */
template <typename T = ll> struct Tree {
  int n, root, timer;
  vector<vector<TreeEdge<T>>> adj;
  vi parent, depth, sz, tin, tout, euler_order;
  vector<T> dist_from_root;
  Tree(int n = 0) : n(n), root(1), timer(0), adj(n + 1), parent(n + 1), depth(n + 1),
    sz(n + 1), tin(n + 1), tout(n + 1), dist_from_root(n + 1) {}
  void add_edge(int u, int v, T w = 1, int id = -1) {
    adj[u].pb({v, id, w});
    adj[v].pb({u, id, w});
  }
  void add_directed_edge(int u, int v, T w = 1, int id = -1) { adj[u].pb({v, id, w}); }
  void dfs_init(int u, int p = 0, int d = 0, T cur = 0) {
    parent[u] = p; depth[u] = d; dist_from_root[u] = cur;
    sz[u] = 1; tin[u] = ++timer;
    euler_order.pb(u);
    for (auto& e : adj[u]) if (e.to != p) {
      dfs_init(e.to, u, d + 1, cur + e.weight);
      sz[u] += sz[e.to];
    }
    tout[u] = timer;
  }
  void init(int root = 1) {
    this->root = root; timer = 0;
    euler_order.clear();
    dfs_init(root, 0, 0, 0);
  }
  struct DiameterResult { T length; int u, v; vi path; };
  DiameterResult get_diameter() const {
    auto farthest = [&](int start) {
      vector<T> dist(n + 1, -1);
      queue<int> q;
      q.push(start); dist[start] = 0;
      int far = start;
      while (!q.empty()) {
        int u = q.front(); q.pop();
        if (dist[u] > dist[far]) far = u;
        for (auto& e : adj[u]) if (dist[e.to] == -1) dist[e.to] = dist[u] + e.weight, q.push(e.to);
      }
      return pair<int, T>(far, dist[far]);
    };
    int u = farthest(1).fi;
    auto [v, length] = farthest(u);
    vi prev(n + 1, -1);
    queue<int> q;
    q.push(u); prev[u] = 0;
    while (!q.empty()) {
      int cur = q.front(); q.pop();
      if (cur == v) break;
      for (auto& e : adj[cur]) if (prev[e.to] == -1) prev[e.to] = cur, q.push(e.to);
    }
    vi path;
    for (int cur = v; cur != 0; cur = prev[cur]) path.pb(cur);
    reverse(all(path));
    return {length, u, v, path};
  }
  // 1 o 2 nodos centrales del diametro
  vi get_centers() const {
    auto d = get_diameter();
    int m = d.path.size();
    if (m & 1) return {d.path[m / 2]};
    return {d.path[m / 2 - 1], d.path[m / 2]};
  }
};

/**
 * Uso[0]: auto dist = all_farthest_distances(t);
 * Distancia maxima desde cada nodo a cualquier otro nodo, usando los extremos del diametro como preprocesamiento.
 * Indexación: 0-indexado (dist[i] para el nodo i).
 * Complejidad: $O(N)$ (dos BFS sobre los extremos del diametro).
 */
template <typename T = ll>
vector<T> all_farthest_distances(const Tree<T>& t) {
  auto d = t.get_diameter();
  auto dist_from = [&](int start) {
    vector<T> dist(t.n + 1, -1);
    queue<int> q;
    q.push(start); dist[start] = 0;
    while (!q.empty()) {
      int cur = q.front(); q.pop();
      for (auto& e : t.adj[cur]) if (dist[e.to] == -1) dist[e.to] = dist[cur] + e.weight, q.push(e.to);
    }
    return dist;
  };
  auto du = dist_from(d.u), dv = dist_from(d.v);
  vector<T> res(t.n + 1);
  for (int i = 1; i <= t.n; i++) res[i] = max(du[i], dv[i]);
  return res;
}

/**
 * Uso[1]: BinaryLifting<ll> bl(t, root); bl.lca(u, v); bl.kth_ancestor(u, k); bl.path_sum(u, v); bl.dist_weighted(u, v);
 * Binary lifting sobre un arbol: lca, k-esimo ancestro, suma/max/min de aristas en el camino y distancias.
 * Complejidad: preproceso $O(N \log N)$, consulta $O(\log N)$.
 */
template <typename T = ll> struct BinaryLifting {
  int n, log_n;
  vi depth;
  vector<vi> up;
  vector<vector<T>> mx, mn, sum;
  vector<T> dist_root;
  BinaryLifting(const Tree<T>& tree, int root = 1) {
    n = tree.n;
    log_n = 32 - __builtin_clz(n) + 1;
    depth = tree.depth;
    dist_root = tree.dist_from_root;
    up.assign(n + 1, vi(log_n, 0));
    mx.assign(n + 1, vector<T>(log_n, -LINF));
    mn.assign(n + 1, vector<T>(log_n, LINF));
    sum.assign(n + 1, vector<T>(log_n, 0));
    for (int u = 1; u <= n; u++) up[u][0] = tree.parent[u] ? tree.parent[u] : u;
    for (int u = 1; u <= n; u++)
      for (auto& e : tree.adj[u]) if (e.to == tree.parent[u]) mx[u][0] = mn[u][0] = sum[u][0] = e.weight;
    for (int j = 1; j < log_n; j++)
      for (int i = 1; i <= n; i++) {
        int p = up[i][j - 1];
        up[i][j] = up[p][j - 1];
        mx[i][j] = max(mx[i][j - 1], mx[p][j - 1]);
        mn[i][j] = min(mn[i][j - 1], mn[p][j - 1]);
        sum[i][j] = sum[i][j - 1] + sum[p][j - 1];
      }
  }
  int kth_ancestor(int u, int k) {
    if (depth[u] < k) return 0;
    for (int j = 0; j < log_n; j++) if (k & (1 << j)) u = up[u][j];
    return u;
  }
  int lca(int u, int v) {
    if (depth[u] < depth[v]) swap(u, v);
    u = kth_ancestor(u, depth[u] - depth[v]);
    if (u == v) return u;
    for (int j = log_n - 1; j >= 0; j--) if (up[u][j] != up[v][j]) u = up[u][j], v = up[v][j];
    return up[u][0];
  }
  int dist_edges(int u, int v) { return depth[u] + depth[v] - 2 * depth[lca(u, v)]; }
  T dist_weighted(int u, int v) { return dist_root[u] + dist_root[v] - 2 * dist_root[lca(u, v)]; }
  // k-esimo nodo en el camino u->v (0-indexed: 0 = u)
  int kth_node_on_path(int u, int v, int k) {
    int anc = lca(u, v);
    int d1 = depth[u] - depth[anc], d2 = depth[v] - depth[anc];
    if (k <= d1) return kth_ancestor(u, k);
    k -= d1;
    if (k <= d2) return kth_ancestor(v, d2 - k);
    return 0;
  }
  T path_max(int u, int v) {
    int anc = lca(u, v);
    T res = -LINF;
    auto lift = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) if (steps & (1 << j)) res = max(res, mx[node][j]), node = up[node][j];
    };
    lift(u, depth[u] - depth[anc]);
    lift(v, depth[v] - depth[anc]);
    return res;
  }
  T path_min(int u, int v) {
    int anc = lca(u, v);
    T res = LINF;
    auto lift = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) if (steps & (1 << j)) res = min(res, mn[node][j]), node = up[node][j];
    };
    lift(u, depth[u] - depth[anc]);
    lift(v, depth[v] - depth[anc]);
    return res;
  }
  T path_sum(int u, int v) {
    int anc = lca(u, v);
    T res = 0;
    auto lift = [&](int node, int steps) {
      for (int j = 0; j < log_n; j++) if (steps & (1 << j)) res += sum[node][j], node = up[node][j];
    };
    lift(u, depth[u] - depth[anc]);
    lift(v, depth[v] - depth[anc]);
    return res;
  }
  bool is_ancestor(int u, int v) { return lca(u, v) == u; }
};

/**
 * Uso[1]: EulerTourTree<ll> et(t); et.subtree_range(u); et.subtree_size(u);
 * Mapea el subarbol de cada nodo a un rango contiguo de la secuencia de entrada (tin/tout).
 * Complejidad: $O(1)$ por consulta.
 */
template <typename T = ll> struct EulerTourTree {
  vi in, out;
  EulerTourTree(const Tree<T>& tree) : in(tree.tin), out(tree.tout) {}
  pair<int, int> subtree_range(int u) { return {in[u], out[u]}; }
  int subtree_size(int u) { return out[u] - in[u] + 1; }
};

/**
 * Uso[1]: HLD hld(n, true); hld.add_edge(u, v); hld.build(1); // 2o parametro: pesos en aristas
 * vll values(n+1); values[hld.pos[u]] = weights[u]; LazySegTree st(values);
 * hld.process_path(u, v, [&](int l, int r) { st.add_range(l, r, val); });
 * ll ans = 0; hld.process_path(u, v, [&](int l, int r) { ans += st.query(l, r); });
 * Convierte caminos y subarboles en rangos continuos para inyectar estructuras 1D.
 * El parametro values_on_edges del constructor indica si el peso esta en las aristas (true) o en los nodos (false); con aristas se ignora el LCA automaticamente.
 * process_path: Llama a tu lambda particionando el camino en O(log N) rangos [l, r].
 * process_subtree: Llama a tu lambda proporcionando el unico rango [l, r] del subarbol.
 */
struct HLD {
  const bool values_on_edges; // true si el peso esta en las aristas

  int n, timer;
  vector<vi> adj;
  vi parent, depth, sz, heavy, head, pos;

  HLD(int n, bool values_on_edges = false) : values_on_edges(values_on_edges), n(n), timer(0),
    adj(n + 1), parent(n + 1), depth(n + 1), sz(n + 1), heavy(n + 1, -1), head(n + 1), pos(n + 1) {}

  void add_edge(int u, int v) {
    adj[u].pb(v);
    adj[v].pb(u);
  }

  void dfs_sz(int u, int p, int d) {
    sz[u] = 1;
    parent[u] = p;
    depth[u] = d;
    heavy[u] = -1;
    int max_sub = 0;

    for (int v : adj[u]) {
      if (v != p) {
        dfs_sz(v, u, d + 1);
        sz[u] += sz[v];
        if (sz[v] > max_sub) {
          max_sub = sz[v];
          heavy[u] = v;
        }
      }
    }
  }

  void decompose(int u, int h) {
    head[u] = h;
    pos[u] = timer++;

    if (heavy[u] != -1) {
      decompose(heavy[u], h);
    }

    for (int v : adj[u]) {
      if (v != parent[u] && v != heavy[u]) {
        decompose(v, v);
      }
    }
  }

  void build(int root = 1) {
    timer = 0;
    dfs_sz(root, 0, 0);
    decompose(root, root);
  }

  template <class BinaryOperation>
  void process_path(int u, int v, BinaryOperation op) {
    while (head[u] != head[v]) {
      if (depth[head[u]] > depth[head[v]]) swap(u, v);
      op(pos[head[v]], pos[v]);
      v = parent[head[v]];
    }
    if (depth[u] > depth[v]) swap(u, v);
    if (values_on_edges && u == v) return;
    op(pos[u] + values_on_edges, pos[v]);
  }

  template <class BinaryOperation>
  void process_subtree(int u, BinaryOperation op) {
    op(pos[u] + values_on_edges, pos[u] + sz[u] - 1);
  }
};

/**
 * Uso[1]: CentroidPathProcessing cp(n); cp.K = 2; cp.add_edge(u, v); cp.solve(1); cout << cp.global.valid_pairs;
 * Divide and Conquer con patron Query-then-Add.
 * Problema resuelto por defecto: Conteo de caminos con exactamente K aristas.
 *
 * Modificables:
 * - PathState: Estructura que almacena las propiedades de un camino desde el centroide actual.
 * - GlobalState: Estructura que retiene los caminos de los subarboles ya procesados del centroide actual.
 * - extend: Crea un nuevo PathState al atravesar una arista hacia el nodo 'v'.
 * - query_and_merge: Combina el PathState actual con el GlobalState para contar respuestas validas.
 * - add_to_global: Registra el PathState actual dentro del GlobalState.
 * - clear_global: Revierte las adiciones iterando sobre los caminos para garantizar O(tamano subarbol).
 */
struct CentroidPathProcessing {
  struct PathState { ll dist; int edges; };

  struct GlobalState {
    vi freq_edges;
    ll valid_pairs = 0;
  } global;

  int K = 0;
  const PathState NEUTRAL_PATH = {0, 0};

  PathState extend(PathState p, int v, ll w) {
    return {p.dist + w, p.edges + 1};
  }

  void query_and_merge(PathState p) {
    if (p.edges <= K && K - p.edges <= n) { // K > n: no hay caminos validos
      global.valid_pairs += global.freq_edges[K - p.edges];
    }
  }

  void add_to_global(PathState p) {
    if (p.edges <= K) {
      global.freq_edges[p.edges]++;
    }
  }

  void clear_global(const vector<PathState>& all_paths) {
    for (const auto& p : all_paths) {
      if (p.edges <= K) {
        global.freq_edges[p.edges] = 0;
      }
    }
  }

  int n;
  vector<vector<pair<int, ll>>> adj;
  vi sz;
  vector<bool> removed;

  CentroidPathProcessing(int n) : n(n), adj(n + 1), sz(n + 1), removed(n + 1, false) {
    global.freq_edges.assign(n + 1, 0);
  }

  void add_edge(int u, int v, ll w = 1) {
    adj[u].pb({v, w});
    adj[v].pb({u, w});
  }

  void get_sizes(int u, int p) {
    sz[u] = 1;
    for (auto [v, w] : adj[u]) {
      if (v != p && !removed[v]) {
        get_sizes(v, u);
        sz[u] += sz[v];
      }
    }
  }

  int get_centroid(int u, int p, int total_size) {
    for (auto [v, w] : adj[u]) {
      if (v != p && !removed[v] && sz[v] > total_size / 2) {
        return get_centroid(v, u, total_size);
      }
    }
    return u;
  }

  void get_paths(int u, int p, PathState cur, vector<PathState>& paths) {
    paths.pb(cur);
    for (auto [v, w] : adj[u]) {
      if (v != p && !removed[v]) {
        get_paths(v, u, extend(cur, v, w), paths);
      }
    }
  }

  void solve(int u = 1) {
    get_sizes(u, 0);
    int c = get_centroid(u, 0, sz[u]);

    vector<PathState> all_paths_in_centroid;
    add_to_global(NEUTRAL_PATH);
    all_paths_in_centroid.pb(NEUTRAL_PATH);

    for (auto [v, w] : adj[c]) {
      if (!removed[v]) {
        vector<PathState> sub_paths;
        get_paths(v, c, extend(NEUTRAL_PATH, v, w), sub_paths);

        for (auto& p : sub_paths) query_and_merge(p);
        for (auto& p : sub_paths) {
          add_to_global(p);
          all_paths_in_centroid.pb(p);
        }
      }
    }

    clear_global(all_paths_in_centroid);

    removed[c] = true;
    for (auto [v, w] : adj[c]) {
      if (!removed[v]) solve(v);
    }
  }
};

/**
 * Uso[1]: CentroidTree<ll> ct(n); ct.add_edge(u, v); ct.build(1);
 * auto dist_lca = [&](int a, int b) { return lca.dist_weighted(a, b); };
 * ct.update(u, dist_lca); cout << ct.query(v, dist_lca);
 * Arbol topologico explicito inyectando la funcion de distancia.
 * Problema resuelto por defecto: Consulta de la distancia minima al nodo rojo mas cercano.
 *
 * Modificables:
 * - State: Tipo de dato o estructura almacenada en cada centroide (ej. ll, multiset).
 * - NEUTRAL: Valor que representa la ausencia de datos o el peor caso.
 * - merge: Como se acumulan dos estados al actualizar o consultar (por defecto min).
 * - combine: Como se une la distancia al centroide con el dato guardado para formar el candidato de respuesta (por defecto distancia + dato).
 */
template <typename State = ll>
struct CentroidTree {
  const State NEUTRAL = LINF;

  State merge(State a, State b) {
    return min(a, b);
  }

  State combine(State dist, State data) {
    return dist + data; // camino u -> centroide -> dato
  }

  int n;
  vector<vi> adj;
  vi sz, c_parent;
  vector<bool> removed;
  vector<State> node_data;

  CentroidTree(int n) : n(n), adj(n + 1), sz(n + 1), c_parent(n + 1, 0),
                        removed(n + 1, false), node_data(n + 1, NEUTRAL) {}

  void add_edge(int u, int v) {
    adj[u].pb(v);
    adj[v].pb(u);
  }

  void get_sizes(int u, int p) {
    sz[u] = 1;
    for (int v : adj[u]) {
      if (v != p && !removed[v]) {
        get_sizes(v, u);
        sz[u] += sz[v];
      }
    }
  }

  int get_centroid(int u, int p, int total_size) {
    for (int v : adj[u]) {
      if (v != p && !removed[v] && sz[v] > total_size / 2) {
        return get_centroid(v, u, total_size);
      }
    }
    return u;
  }

  void build(int u = 1, int p = 0) {
    get_sizes(u, 0);
    int c = get_centroid(u, 0, sz[u]);
    c_parent[c] = p;
    removed[c] = true;
    for (int v : adj[c]) {
      if (!removed[v]) build(v, c);
    }
  }

  template<typename DistFunc>
  void update(int u, DistFunc dist_func) {
    for (int cur = u; cur; cur = c_parent[cur]) {
      State d = dist_func(u, cur);
      node_data[cur] = merge(node_data[cur], d);
    }
  }

  template<typename DistFunc>
  State query(int u, DistFunc dist_func) {
    State ans = NEUTRAL;
    for (int cur = u; cur; cur = c_parent[cur]) {
      State d = dist_func(u, cur);
      ans = merge(ans, combine(d, node_data[cur]));
    }
    return ans;
  }
};


/**
 * Uso[1]: CentroidBinarySearch cbs(n); cbs.add_edge(u, v); int hidden_node = cbs.solve(1);
 * Busca un unico nodo reduciendo el arbol a la mitad en cada paso.
 * Problema resuelto por defecto: Encontrar un nodo oculto interactivamente preguntando distancias.
 *
 * Modificables:
 * - EvalState: La informacion recopilada de un nodo al evaluarlo.
 * - evaluate: Contiene la logica para consultar al juez o procesar el costo del nodo.
 * - get_direction: Oraculo que compara el estado del centroide actual con sus adyacentes
 *   para determinar el vecino que contiene la solucion, o retorna el centroide si es la respuesta.
 */
struct CentroidBinarySearch {
  struct EvalState {
    int dist;
  };

  EvalState evaluate(int u) {
    cout << "? " << u << endl;
    int d;
    cin >> d;
    return {d};
  }

  int get_direction(int c) {
    EvalState current_state = evaluate(c);

    if (current_state.dist == 0) return c;

    int best_nxt = c;

    for (int v : adj[c]) {
      if (!removed[v]) {
        EvalState neighbor_state = evaluate(v);

        if (neighbor_state.dist < current_state.dist) {
          current_state = neighbor_state;
          best_nxt = v;
        }
      }
    }
    return best_nxt;
  }

  int n;
  vector<vi> adj;
  vi sz;
  vector<bool> removed;

  CentroidBinarySearch(int n) : n(n), adj(n + 1), sz(n + 1), removed(n + 1, false) {}

  void add_edge(int u, int v) {
    adj[u].pb(v);
    adj[v].pb(u);
  }

  void get_sizes(int u, int p) {
    sz[u] = 1;
    for (int v : adj[u]) {
      if (v != p && !removed[v]) {
        get_sizes(v, u);
        sz[u] += sz[v];
      }
    }
  }

  int get_centroid(int u, int p, int total_size) {
    for (int v : adj[u]) {
      if (v != p && !removed[v] && sz[v] > total_size / 2) {
        return get_centroid(v, u, total_size);
      }
    }
    return u;
  }

  int solve(int u = 1) {
    get_sizes(u, 0);
    int c = get_centroid(u, 0, sz[u]);

    int nxt = get_direction(c);
    if (nxt == c) return c;

    removed[c] = true;
    return solve(nxt);
  }
};

/**
 * Uso[1]: DSUOnTree s(n); s.add_edge(u, v); s.set_colors(color_1index); s.solve(root); s.ans[u];
 * Small-to-large (sack) para responder estadisticas de colores en cada subarbol.
 * Complejidad: $O(N \log N)$.
 */
struct DSUOnTree {
  int n, timer, distinct;
  vector<vi> adj;
  vi sz, heavy, tin, tout, euler_node, color, ans, cnt;
  DSUOnTree(int n) : n(n), timer(0), distinct(0), adj(n + 1), sz(n + 1), heavy(n + 1, -1),
    tin(n + 1), tout(n + 1), euler_node(n + 1), color(n + 1), ans(n + 1), cnt(n + 1) {}
  void add_edge(int u, int v) { adj[u].pb(v); adj[v].pb(u); }
  void set_colors(const vi& c) {
    for (int i = 1; i <= n; i++) color[i] = c[i];
  }
  void dfs_size(int u, int p = 0) {
    sz[u] = 1;
    tin[u] = ++timer;
    euler_node[timer] = u;
    int max_sz = 0;
    for (int v : adj[u]) if (v != p) {
      dfs_size(v, u);
      sz[u] += sz[v];
      if (sz[v] > max_sz) max_sz = sz[v], heavy[u] = v;
    }
    tout[u] = timer;
  }
  void add_node(int u) { if (!cnt[color[u]]++) distinct++; }
  void remove_node(int u) { if (!--cnt[color[u]]) distinct--; }
  void dfs_sack(int u, int p, bool keep) {
    for (int v : adj[u]) if (v != p && v != heavy[u]) dfs_sack(v, u, false);
    if (heavy[u] != -1) dfs_sack(heavy[u], u, true);
    add_node(u);
    for (int v : adj[u]) if (v != p && v != heavy[u])
      for (int t = tin[v]; t <= tout[v]; t++) add_node(euler_node[t]);
    ans[u] = distinct;
    if (!keep) for (int t = tin[u]; t <= tout[u]; t++) remove_node(euler_node[t]);
  }
  void solve(int root = 1) { timer = 0; dfs_size(root); dfs_sack(root, 0, false); }
};

/**
 * Uso[1]: VirtualTree vt(n);
 *         auto [root, nodes] = vt.build(query_nodes,
 *             [&](int u, int v) { return lca.lca(u, v); },
 *             [&](int u, int v) { return lca.is_ancestor(u, v); },
 *             [&](int u, int v) { return lca.dist_weighted(u, v); },
 *             [&](int a, int b) { return tree.tin[a] < tree.tin[b]; });
 *         // Hacer DP usando vt.virt_adj[u] iterando sobre 'nodes'
 *
 * Construye un arbol comprimido sobre un subconjunto de nodos manteniendo la topologia.
 * Recibe las funciones de lca, ancestro, distancia y orden de tin como lambdas para adaptarse a cualquier implementacion de LCA.
 * Complejidad: preproceso $O(N)$, construccion $O(K \log K)$ por query.
 */
struct VirtualTree {
  int n;
  vector<vector<pair<int, ll>>> virt_adj;

  VirtualTree(int n) : n(n), virt_adj(n + 1) {}

  template <class LcaFunc, class IsAncFunc, class DistFunc, class TinCmp>
  pair<int, vi> build(vi nodes, LcaFunc get_lca, IsAncFunc is_anc, DistFunc get_dist, TinCmp tin_cmp) {
    if (nodes.empty()) return {0, {}};

    sort(all(nodes), tin_cmp);
    int k = nodes.size();
    for (int i = 0; i + 1 < k; i++) {
      nodes.pb(get_lca(nodes[i], nodes[i + 1]));
    }

    sort(all(nodes), tin_cmp);
    nodes.erase(unique(all(nodes)), nodes.end());

    for (int u : nodes) {
      virt_adj[u].clear();
    }

    vi stk = {nodes[0]};
    for (int i = 1; i < (int)nodes.size(); i++) {
      int u = nodes[i];
      while (!stk.empty() && !is_anc(stk.back(), u)) {
        stk.pop_back();
      }
      if (!stk.empty()) {
        int anc = stk.back();
        ll w = get_dist(anc, u);
        virt_adj[anc].pb({u, w});
        virt_adj[u].pb({anc, w});
      }
      stk.pb(u);
    }

    return {nodes[0], nodes};
  }
};

/**
 * Uso[1]: TreeHashing<ll>::are_isomorphic(t1, t2);
 * Determina si dos arboles son isomorfos (sin considerar etiquetas) mediante hashing y los centroides del struct Tree (reusa get_centers/get_diameter).
 * Indexación: nodos 1-indexados.
 * Complejidad: $O(N)$.
 */
template <typename T = ll> struct TreeHashing {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  static uint64_t hash_node(uint64_t x) { return splitmix64(x + 0x517cc1b727220a95); }
  static uint64_t rooted_hash(int u, int p, const Tree<T>& t) {
    vector<uint64_t> child;
    for (auto& e : t.adj[u]) if (e.to != p) child.pb(rooted_hash(e.to, u, t));
    sort(all(child));
    uint64_t h = 1;
    for (uint64_t c : child) h += hash_node(c);
    return splitmix64(h);
  }
  static bool are_isomorphic(const Tree<T>& t1, const Tree<T>& t2) {
    if (t1.n != t2.n) return false;
    auto c1 = t1.get_centers(), c2 = t2.get_centers();
    for (int r1 : c1)
      for (int r2 : c2)
        if (rooted_hash(r1, 0, t1) == rooted_hash(r2, 0, t2)) return true;
    return false;
  }
};

/**
 * Uso[1]: RerootingDP r(n); r.add_edge(u, v); auto ans = r.solve(root);
 * DP con rerooting para calcular la solucion para todas las posibles raices; ajustar merge, extend y finalize.
 * Complejidad: $O(N)$.
 */
struct RerootingDP {
  struct State { ll val; };
  int n;
  vector<vi> adj;
  vector<State> dp_down, ans;
  const State NEUTRAL = {0};
  State merge(State a, State b) { return {max(a.val, b.val)}; }
  State extend(State s, int v, int u) { return {s.val + 1}; } // transicion por arista
  State finalize(State s, int u) { return s; }
  RerootingDP(int n) : n(n), adj(n + 1), dp_down(n + 1, NEUTRAL), ans(n + 1, NEUTRAL) {}
  void add_edge(int u, int v) { adj[u].pb(v); adj[v].pb(u); }
  void dfs_down(int u, int p) {
    State cur = NEUTRAL;
    for (int v : adj[u]) if (v != p) dfs_down(v, u), cur = merge(cur, extend(dp_down[v], v, u));
    dp_down[u] = finalize(cur, u);
  }
  void dfs_reroot(int u, int p, State from_parent) {
    vi children;
    for (int v : adj[u]) if (v != p) children.pb(v);
    int k = children.size();
    vector<State> pref(k + 1, NEUTRAL), suff(k + 1, NEUTRAL);
    for (int i = 0; i < k; i++) pref[i + 1] = merge(pref[i], extend(dp_down[children[i]], children[i], u));
    for (int i = k - 1; i >= 0; i--) suff[i] = merge(suff[i + 1], extend(dp_down[children[i]], children[i], u));
    ans[u] = finalize(merge(pref[k], from_parent), u);
    for (int i = 0; i < k; i++) {
      State outside = merge(merge(pref[i], suff[i + 1]), from_parent);
      dfs_reroot(children[i], u, extend(finalize(outside, u), u, children[i]));
    }
  }
  vector<State> solve(int root = 1) {
    dfs_down(root, 0);
    dfs_reroot(root, 0, NEUTRAL);
    return ans;
  }
};

/**
 * Uso[1]: FastLCA<ll> fl(t); fl.lca(u, v); fl.dist_edges(u, v);
 * LCA por Euler + RMQ con respuesta en tiempo constante por consulta.
 * Complejidad: preproceso $O(N \log N)$, consulta $O(1)$.
 */
template <typename T = ll> struct FastLCA {
  const Tree<T>& tree;
  vi tin, euler, euler_depth, log_table;
  vector<vi> st;
  FastLCA(const Tree<T>& tree) : tree(tree), tin(tree.n + 1) {
    auto dfs = [&](auto&& self, int u, int p, int d) -> void {
      tin[u] = euler.size();
      euler.pb(u);
      euler_depth.pb(d);
      for (auto& e : tree.adj[u]) if (e.to != p) {
        self(self, e.to, u, d + 1);
        euler.pb(u);
        euler_depth.pb(d);
      }
    };
    dfs(dfs, tree.root, 0, 0);
    int m = euler.size();
    log_table.assign(m + 1, 0);
    for (int i = 2; i <= m; i++) log_table[i] = log_table[i / 2] + 1;
    int K = log_table[m] + 1;
    st.assign(K, vi(m));
    for (int i = 0; i < m; i++) st[0][i] = i;
    for (int i = 1; i < K; i++)
      for (int j = 0; j + (1 << i) <= m; j++) {
        int l = st[i - 1][j], r = st[i - 1][j + (1 << (i - 1))];
        st[i][j] = euler_depth[l] < euler_depth[r] ? l : r;
      }
  }
  int lca(int u, int v) {
    int l = tin[u], r = tin[v];
    if (l > r) swap(l, r);
    int i = log_table[r - l + 1];
    int a = st[i][l], b = st[i][r - (1 << i) + 1];
    return euler_depth[a] < euler_depth[b] ? euler[a] : euler[b];
  }
  int dist_edges(int u, int v) { return tree.depth[u] + tree.depth[v] - 2 * tree.depth[lca(u, v)]; }
};

/**
 * Uso[1]: MoOnTrees<ll> mo(n); mo.dfs_euler(root, 0, t); auto ans = mo.solve(queries, fast_lca);
 * Algoritmo de Mo sobre caminos de un arbol; se implementa toggle(u) (frecuencia de colores, suma de valores, etc.) y se leen ans[i] por query.
 * Una query real es un par de nodos (u, v); por ejemplo, para contar colores distintos en el camino u-v se guarda cnt[color] y current_ans = numero de colores con cnt > 0.
 * Complejidad: $O((N + Q)\sqrt{N})$ toggle esperados.
 */
template <typename T = ll> struct MoOnTrees {
  struct Query {
    int l, r, lca, id, block_size;
    bool operator<(const Query& o) const {
      int b1 = l / block_size, b2 = o.l / block_size;
      if (b1 != b2) return b1 < b2;
      return (b1 & 1) ? (r < o.r) : (r > o.r);
    }
  };
  int n, timer;
  vi tin, tout, euler;
  vector<bool> in_path;
  ll current_ans = 0;
  MoOnTrees(int n) : n(n), timer(0), tin(n + 1), tout(n + 1), euler(2 * n + 1), in_path(n + 1, false) {}
  void dfs_euler(int u, int p, const Tree<T>& tree) {
    tin[u] = ++timer;
    euler[timer] = u;
    for (auto& e : tree.adj[u]) if (e.to != p) dfs_euler(e.to, u, tree);
    tout[u] = ++timer;
    euler[timer] = u;
  }
  void toggle(int u) {
    // TODO: actualizar respuesta al agregar/remover el nodo u (p.ej. frecuencias de colores)
    in_path[u] = !in_path[u];
  }
  vll solve(vector<pair<int, int>>& raw_queries, const FastLCA<T>& fast_lca) {
    int q = raw_queries.size();
    int bs = max(1, (int)(2 * n / sqrt(max(1, q))));
    vector<Query> queries;
    for (int i = 0; i < q; i++) {
      auto [u, v] = raw_queries[i];
      if (tin[u] > tin[v]) swap(u, v);
      int anc = fast_lca.lca(u, v);
      queries.pb(anc == u ? Query{tin[u], tin[v], 0, i, bs} : Query{tout[u], tin[v], anc, i, bs});
    }
    sort(all(queries));
    vll ans(q);
    int curr_l = 1, curr_r = 0;
    for (auto& mq : queries) {
      while (curr_l > mq.l) toggle(euler[--curr_l]);
      while (curr_r < mq.r) toggle(euler[++curr_r]);
      while (curr_l < mq.l) toggle(euler[curr_l++]);
      while (curr_r > mq.r) toggle(euler[curr_r--]);
      if (mq.lca) toggle(mq.lca);
      ans[mq.id] = current_ans;
      if (mq.lca) toggle(mq.lca);
    }
    return ans;
  }
};


int main() {
  fastio;
  int n;
  cin >> n;

  Tree<ll> t(n);
  for (int i = 0; i < n - 1; i++) {
    int u, v;
    cin >> u >> v;
    t.add_edge(u, v);
  }

  auto diametre = t.get_diameter();
  cout << diametre.length << "\n";
  return 0;
}




