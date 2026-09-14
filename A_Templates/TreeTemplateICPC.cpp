#include <bits/stdc++.h>
using namespace std;

struct Tree {
    int n;
    int log;
    int timer = 0;
    vector<vector<int>> adj;
    vector<vector<int>> up;
    vector<int> depth, tin, tout, subtree;

    explicit Tree(int size) : n(size), log(1), adj(n + 1), depth(n + 1),
                              tin(n + 1), tout(n + 1), subtree(n + 1, 1) {
        while ((1LL << log) <= max(1, n)) ++log;
        up.assign(n + 1, vector<int>(log));
    }

    void add_edge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void build(int root = 1) {
        timer = 0;
        fill(depth.begin(), depth.end(), 0);
        fill(tin.begin(), tin.end(), 0);
        fill(tout.begin(), tout.end(), 0);
        fill(subtree.begin(), subtree.end(), 1);
        for (auto& row : up) fill(row.begin(), row.end(), 0);
        dfs(root, root);
    }

    bool is_ancestor(int u, int v) const {
        return tin[u] <= tin[v] && tout[v] <= tout[u];
    }

    int lca(int u, int v) const {
        if (is_ancestor(u, v)) return u;
        if (is_ancestor(v, u)) return v;

        for (int j = log - 1; j >= 0; --j) {
            if (!is_ancestor(up[u][j], v)) u = up[u][j];
        }
        return up[u][0];
    }

    int distance(int u, int v) const {
        int ancestor = lca(u, v);
        return depth[u] + depth[v] - 2 * depth[ancestor];
    }

private:
    void dfs(int v, int parent) {
        tin[v] = ++timer;
        up[v][0] = parent;
        for (int j = 1; j < log; ++j) {
            up[v][j] = up[up[v][j - 1]][j - 1];
        }

        subtree[v] = 1;
        for (int to : adj[v]) {
            if (to == parent) continue;
            depth[to] = depth[v] + 1;
            dfs(to, v);
            subtree[v] += subtree[to];
        }
        tout[v] = timer;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n; cin >> n;
    // Tree tree(n);
    // for (int i = 1; i < n; ++i) {
    //     int u, v; cin >> u >> v;
    //     tree.add_edge(u, v);
    // }
    // tree.build();

    return 0;
}
