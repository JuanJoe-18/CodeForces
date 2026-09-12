#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

typedef long long ll;
const int INF = 1e9;

vector<vector<int>> adj;
vector<int> dist1, distN;

void bfs(int src, vector<int>& dist) {
    queue<int> q;
    dist[src] = 0;
    q.push(src);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    fastio;
    int n, m;
    cin >> n >> m;

    adj.assign(n + 1, {});
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dist1.assign(n + 1, INF);
    distN.assign(n + 1, INF);

    bfs(1, dist1);
    bfs(n, distN);

    int d = dist1[n];

    bool possible = false;

    for (int u = 1; u <= n; u++) {
        for (int v : adj[u]) {
            if (dist1[u] + 1 + distN[v] == d + 1) {
                possible = true;
            }
        }
    }

    cout << (possible ? "possible" : "impossible") << endl;
    return 0;
}