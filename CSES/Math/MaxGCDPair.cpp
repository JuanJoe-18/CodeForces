#include <bits/stdc++.h>
using namespace std;

int cnt[1000001];

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int M = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        cnt[x]++;
        M = max(M,x);
    }

    for (int gcd = M; gcd >= 1; gcd--) {
        int mult = 0;
        for (int m = gcd; m <= M; m += gcd) {
            mult += cnt[m];
            if (mult >= 2) {
                cout << gcd << endl;
                return 0;
            }
        }
    }

    return 0;
}
