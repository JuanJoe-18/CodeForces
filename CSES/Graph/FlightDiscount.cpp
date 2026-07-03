#include <bits/stdc++.h>
using namespace std;

// ================================
// 🚀 Entrada/Salida rápida
// ================================
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const double EPS = 1e-9;

// ================================
// 🚀 Grafos
// ================================
vector<vi> adj;     // lista de adyacencia (sin peso)
vector<vector<pair<int,ll>>> adj_w; // lista de adyacencia (con peso)
vi visited;         // vector de visitados
vi parent;          // padres para reconstruir caminos

/**
 * @brief Algoritmo de Dijkstra para caminos minimos (CORREGIDO)
 */
vector<ll> dijkstra(int src, int n, const vector<vector<pair<int,ll>>>& locale_graph) {
    vector<ll> dist(n+1,LINF);
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<>> pq;
    dist[src]=0; pq.push({0,src});
    
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if(d>dist[u]) continue;
        
        for(auto edge : locale_graph[u]){
            int v = edge.first;
            ll peso = edge.second;
            if(dist[v]>d+peso){ 
                dist[v]=d+peso;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}

int main(){
    fastio;
    int n, m; cin >> n >> m;
    vector<vector<pair<int,ll>>> adj_normal(n + 1);
    vector<vector<pair<int,ll>>> adj_reverso(n + 1);

    struct Edg {
        int u, v;
        ll w;
    };

    vector<Edg> edges;

    while (m--) {
        int u, v; ll w; 
        cin >> u >> v >> w;
      
        adj_normal[u].pb({v, w});
        adj_reverso[v].pb({u, w});
        edges.pb({u, v, w});
    }

    vector<ll> disBegin = dijkstra(1, n, adj_normal);
    vector<ll> disEnd = dijkstra(n, n, adj_reverso);

    ll ans = LINF;

    for (auto edg: edges) {
        int u = edg.u; 
        int v = edg.v; 
        ll w  = edg.w;
        
        if (disBegin[u] != LINF && disEnd[v] != LINF) {
            ll costT = disBegin[u] + (w / 2) + disEnd[v];
            ans = min(ans, costT);
        }
    }

    cout << ans << "\n";

    return 0;
}
