#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

vector<vector<string>> adj;
vector<bool> visited;


int main(){

	int n,m; cin >> n >> m;
	vector<string> b(n);;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[i][j] == '.') {
				if (i+1 < n && b[i+1][j] == '.') {
					adj[i][j] = i+""+j; 
					adj[i][j].push_back(i+""+j) 

				}else if (i-1 >= 0 && b[i-1][j] == '.') {

				}else if (j+1 < m && b[i][j+1] == '.') {

				}else if (j-1 >= 0 && b[i][j-1] == '.') {

				}
			
			}
			
		}
		
	}
	
	


	
	

    










	
	cin >> N >> E; // n Nodos y E aristas
	vector<vector<int>> adj(N);
	for (int i = 0; i < E; ++i) {
		int u, v;
		cin >> u >> v;   //Hay ida y vuelta, lo que lo hace no dirigido
		adj.at(u).push_back(v);
		adj.at(v).push_back(u);
	}
	{
		int u = 1;
		// print number of vertices adjacent to u
		cout << "deg(u) = " << adj.at(u).size() << endl;
		// print all edges with u as an endpoint
		for (int v : adj.at(u)) cout << "{" << u << ", " << v << "}" << "\n";
	}

    return 0;
}