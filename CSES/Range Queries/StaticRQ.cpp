#include <bits/stdc++.h>
using namespace std;

int main() { //Sparse table, codigo fue modificado para hacer debugg
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    const int LOG = 19; // Suficiente para 2e5 (2^18 = 262144)
    vector<int> bin_log(n + 1);
    bin_log[1] = 0;
    for(int i = 2; i <= n; i++) {
        bin_log[i] = bin_log[i/2] + 1;
    }

    vector<vector<int>> m(n, vector<int>(LOG));

    for(int i = 0; i < n; i++) {
        cin >> m[i][0];
    }

    // 2) preprocessing, O(N*log(N))
    for(int k = 1; k < LOG; k++) {
        for(int i = 0; i + (1 << k) - 1 < n; i++) {
            m[i][k] = min(m[i][k-1], m[i+(1<<(k-1))][k-1]);
        }
    }

    auto query = [&](int L, int R) { // O(1)
        int length = R - L + 1;
        int k = bin_log[length];
        return min(m[L][k], m[R-(1<<k)+1][k]);
    };

    // 3) answer queries
    for(int i = 0; i < q; i++) {
        int L, R;
        cin >> L >> R;
        cout << query(L - 1, R - 1) << "\n";
    }
    return 0;
}