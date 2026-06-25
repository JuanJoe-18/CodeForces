#include <bits/stdc++.h>
using namespace std;
// Template de CP Grafos
int main() {
  int N, E;
  cin >> N >> E; // n Nodos y E aristas
  vector<vector<int>> adj(N + 1);
  for (int i = 0; i < E; ++i) {
    int u, v;
    cin >> u >> v; // Hay ida y vuelta, lo que lo hace no dirigido
    adj.at(u).push_back(v);
    adj.at(v).push_back(u);
  }
  {
    int u = 1;
    // print number of vertices adjacent to u
    cout << "deg(u) = " << adj.at(u).size() << endl;
    // print all edges with u as an endpoint
    for (int v : adj.at(u)) {
      cout << "{" << u << ", " << v << "}" << "\n";
    }
  }
}