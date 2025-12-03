#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> in_deg(n + 1, 0);
    unordered_map<int, unordered_set<int>> adj;

    for (int i = 0; i < n - 1; ++i) {
        int p, e;
        cin >> p >> e;
        adj[p].insert(e);
        in_deg[e]++;
    }

    int roots = 0;
    for (int i = 1; i <= n; ++i)
        if (in_deg[i] == 0) roots++;

    auto flip = [&](int a, int b) {
        if (adj[a].count(b)) {
            adj[a].erase(b);
            adj[b].insert(a);
            if (--in_deg[b] == 0) roots++;
            if (++in_deg[a] == 1) roots--;
        } else {
            adj[b].erase(a);
            adj[a].insert(b);
            if (--in_deg[a] == 0) roots++;
            if (++in_deg[b] == 1) roots--;
        }
    };

    int q;
    cin >> q;

    cout << (roots == 1 ? "DA" : "NE") << '\n';

    while (q--) {
        int a, b;
        cin >> a >> b;
        flip(a, b);
        cout << (roots == 1 ? "DA" : "NE") << '\n';
    }

    return 0;
}