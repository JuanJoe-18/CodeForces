const int MXN = 200005;
vector<int> adj[MXN];
int childs[MXN];

void dfs(int c, int p) {
    childs[c] = 1;
    for (auto s : adj[c]) {
        if (s != p) {
            dfs(s, c);
            // Process childs[c] += childs[s];
        }
    }
}
