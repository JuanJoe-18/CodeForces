#include <bits/stdc++.h>
typedef long long ll;
const ll LINF = 1e15+1;
using namespace std;

int n, m;
vector<int> adj[1005];
bitset<1005> visited;             
vector<int> pth;
vector<bitset<1005>> fails[1005];  

bool dfs(int u) {
    if (u == 2 * n) {
        pth.push_back(u);
        return true;
    }
    
    for (auto& fail : fails[u]) {
        if ((visited & fail) == fail) {
            return false; 
        }
    }
    
    visited[u] = true;    
    int twin = (u <= n) ? u + n : u - n;
    visited[twin] = true;
    
    for (int v : adj[u]) {
        if (!visited[v]) {
            if (dfs(v)) {
                pth.push_back(u);
                return true; 
            }
        }
    }
    
    visited[twin] = false;
    visited[u] = false; 
    fails[u].push_back(visited);
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    
    if (!(cin >> n >> m)) return 0;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    
    if (dfs(1)) {
        cout << pth.size() << "\n";
        for (int i = pth.size() - 1; i >= 0; i--) {
            cout << pth[i] << (i == 0 ? "" : " ");
        }
        cout << "\n";
    } else {
        cout << "*\n";
    }
    
    return 0;
}
