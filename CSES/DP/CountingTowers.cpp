#include <bits/stdc++.h>
using namespace std;
    const int MAXN = 1e6;
    const int MOD = 1e9 + 7;
int main () {
    vector<long long> A(MAXN + 1);
    vector<long long> B(MAXN + 1);
    A[1] = 1;
    B[1] = 1;




    for (int i = 2; i <= MAXN; i++) {
        A[i] = (4 * A[i - 1] + B[i - 1]) % MOD;
        B[i] = (A[i - 1] + 2 * B[i - 1]) % MOD;
    }

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (A[n] + B[n]) % MOD << "\n";
    }





    return 0;
}