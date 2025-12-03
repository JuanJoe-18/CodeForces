#include<bits/stdc++.h>
using namespace std;

vector<bool> visited;
vector<vector<int>> adj;

void dfs(int x){
  if (visited[x]) return;
  visited[x] = true;
  cout << "Pasando por: " << x << endl;
  for (auto u : adj[x]) {
    dfs(u);
  }
}



int main() {
  int N, E;
  cin >> N >> E; 
  visited.resize(N+1,false);
  adj.resize(N+1);
  for (int i = 0; i < E; ++i) {
    int u, v;
    cin >> u >> v; // Hay ida y vuelta, lo que lo hace no dirigido
    adj[u].push_back(v);
    adj[v].push_back(u);
  } 
  // si se quiere ordenar las visitas
  //for (int i = 0; i <= N; i++) sort(adj[i].begin(),adj[i].end());

  dfs(1);
}