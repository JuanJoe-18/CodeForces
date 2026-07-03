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
};

int main() {
    int n, m; 
    if(!(cin >> n >> m)) return 0;
    
    Graph<ll> G(n);
    
    while (m--) {
        int u, v; ll w=1; 
        cin >> u >> v;
        G.add_directed_edge(u, v, w); 
    }

    vector<int> cycle = G.find_directed_cycle();
    
    if (!cycle.empty()) {
        cout << cycle.size() <<"\n";
        for (int u: cycle) {
            cout << u << " ";
        }
        cout << "\n";
    } else {
       cout << "IMPOSSIBLE\n";
    }
    
    return 0;
}
