#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int node) {
    visited[node] = true;
    for (int u : adj[node]) {
        if (!visited[u])
            dfs(u);
    }
}

int main() {
    int N, E;
    cin >> N >> E;

    adj.resize(N + 1);
    visited.resize(N + 1, false);

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int componentes = 0;
    for (int i = 1; i <= N; ++i) {
        if (!visited[i]) {
            componentes++;
            dfs(i);
        }
    }

    cout << "Número de componentes conexas: " << componentes << endl;
}
