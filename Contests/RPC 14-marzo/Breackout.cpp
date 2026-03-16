#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fastio;
    int n, x, m;
    cin >> n >> x >> m;
    vector<int> trap(n + 1, 0);
    for (int i = 0; i < m; i++) {
        int r;
        cin >> r;
        trap[r]++;
    }

    long long rcost = 0;
    for (int i = 1; i < x; i++) {
        rcost += trap[i];
    }

    long long lcots = 0;
    for (int i = x; i <= n; i++) {
        lcots += trap[i];
    }
    cout << min(rcost, lcots) << endl;
    return 0;
}