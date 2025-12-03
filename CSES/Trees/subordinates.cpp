#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
int subsize[N];

void dfs(int u, int p) {
    subsize[u] = 0;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        subsize[u] += subsize[v] + 1;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        int boss;
        cin >> boss;
        adj[boss].push_back(i);
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++)
        cout << subsize[i] << " ";
}