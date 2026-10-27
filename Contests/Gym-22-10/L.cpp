#include <bits/stdc++.h>

using namespace std;

const int INF = 2e9;

struct Act {
    int s, e;
};





int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n,x; cin >> n >> x;
    vector<Act> acts(n);
    for (int i = 0; i < n; i++) {
        int s,d; cin >> s >> d;
        acts[i] = {s,s + d};
    }

    int best = 0;
    int mc = INF;

    for (int t = 0; t <= 480; t++) {
        int cc = 0;
        for (int i = 0; i < n; i++) {
            int s = acts[i].s;
            int e = acts[i].e;
            int kmin = (s <= t) ? 0:(s - t + x - 1) / x;

            int kmax = (e < t) ? -1:(e - t) / x;

            if (kmin <= kmax) {
                cc += (kmax - kmin +1);
            }
        }

        if (cc < mc) {
            mc = cc;
            best = t;
        }
    }


    cout << best << " " << mc << "\n";

    return 0;
}
