/**
 * @file TemplateBasico.cpp
 * @brief Plantilla basica para recorrer un grafo con DFS.
 * @details Construye una lista de adyacencia y marca nodos visitados.
 * @note Ajusta el nodo inicial y la indexacion segun el enunciado.
 */
//   ____ ___  ____  _____   ____  _   _
//  / ___/ _ \|  _ \| ____| / ___|| | | |
// | |  | | | | | | |  _|   \___ \| | | |
// | |__| |_| | |_| | |___   ___) | |_| |
//  \____\___/|____/|_____| |____/ \___/
//
//                 BASIC DFS TEMPLATE

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
