#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) v.begin(), v.end()

struct DSU {
    vector<int> p, sz;
    vector<vector<int>> members;
    int comps;

    DSU(int n) : p(n + 1), sz(n + 1, 1), members(n + 1), comps(0) {
        iota(all(p), 0);
        for (int i = 1; i <= n; i++) members[i].push_back(i);
    }

    int find(int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    }

    bool unite(int a, int b) {
        a = find(a); b = find(b);
        if (a == b) return false;
        if (sz[a] < sz[b]) swap(a, b);
        p[b] = a;
        sz[a] += sz[b];
        members[a].insert(members[a].end(), all(members[b]));
        vector<int>().swap(members[b]);
        comps--;
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("closing.in", "r", stdin);
    freopen("closing.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> order(n);
    for (int i = 0; i < n; i++) {
        cin >> order[i];
    }

    DSU dsu(n);
    vector<bool> active(n + 1, false);
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--) {
        int u = order[i];
        active[u] = true;
        dsu.comps++;

        for (int v : adj[u]) {
            if (active[v]) {
                dsu.unite(u, v);
            }
        }
        ans[i] = dsu.comps;
    }

    for (int i = 0; i < n; i++) {
        cout << (ans[i] == 1 ? "YES" : "NO"); cout << "\n";
    }



    return 0;
}
