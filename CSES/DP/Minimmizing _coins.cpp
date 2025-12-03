#include <bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;

int solve(int x, vector<int>& coins) {
    vector<int> value(x + 1, INF);
    value[0] = 0;
    for (int i = 1; i <= x; i++) {
        for (auto c : coins) {
            if (i - c >= 0 && value[i - c] != INF) {
                value[i] = min(value[i], value[i - c] + 1);
            }
        }
    }
    return value[x] == INF ? -1 : value[x];
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int res = solve(x, a);
    cout << res << endl;
    return 0;
}