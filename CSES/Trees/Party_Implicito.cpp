#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> parent(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> parent[i];
    }

    int max_depth = 0;

    for (int i = 1; i <= n; i++) {
        int current_depth = 1;
        int j = i;
        while (parent[j] != -1) {
            current_depth++;
            j = parent[j];
        }

        max_depth = max(max_depth, current_depth);
    }

    cout << max_depth << "\n";

    return 0;
}