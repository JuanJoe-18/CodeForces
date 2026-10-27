 #pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin() , v.end()
#define pb push_back
typedef long long ll;
typedef long double ld;

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<double> W(n + 1);
    double s = 0;
    for (int i = 1; i <= n; i++) {
        cin >> W[i]; s += W[i];
    }

    vector<double> D(n + 1,0.0);

    for (int d = 1; d <= n; d++) for (int m = d; m <= n; m+=d) D[m] += W[d];

    vector<vector<int>> divs(n + 1);
    for (int d = 1; d <= n; d++)
        for (int m = 2 * d; m <= n; m += d) {
            divs[m].push_back(d);
        }
    vector<double> E(n + 1,0.0);


    for (int x = n; x >= 1; x--) {
        int lim = n / x;
        vector<double> A(lim + 1, 0.0);

        double num = D[x];

        for (int k = 1; k <= lim; k++) {
            A[k] = D[x * k];
            for (int d: divs[k]) {
                A[k] -= A[d];
            }
            if (k >= 2) {
                num += A[k] * (1LL + E[x * k]);
            }
        }
        E[x] = num / (s - D[x]);
    }
    /*
        for (int m = 2 * x; m <= n; m += x) {
            for (int y = 1; y <= n; y++) {
                int g = gcd(x,y);
                ll z = 1LL * (x / g) * y;
                if (z == m) num += W[y] * (1LL + E[z]);
            }
        }
        E[x] = num/deno;
    }*/

    cout << fixed << setprecision(10) << E[1] << "\n";

    
    return 0;
}