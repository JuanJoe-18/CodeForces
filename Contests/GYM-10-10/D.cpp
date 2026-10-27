#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef long double ld;

const ld EPS = 1e-9;
const ld PI = acosl(-1.0L);

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    if (!(cin >> n)) return 0;

    struct Star {
        ll x, y;
        int b;
    };

    vector<Star> a(n);
    for (auto &s : a) {
        cin >> s.x >> s.y >> s.b;
    }

    sort(all(a), [](const Star &u, const Star &v) {
        return u.b < v.b;
    });

    vector<ld> agls;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].b < a[j].b) {
                ll dx = a[j].x - a[i].x;
                ll dy = a[j].y - a[i].y;
                agls.pb(atan2l(static_cast<ld>(dy), static_cast<ld>(dx)));
            }
        }
    }
    if (agls.empty()) {
        cout << "Y\n";
        return 0;
    }

    sort(all(agls));
    size_t m = agls.size();
    for (size_t i = 0; i < m; i++) {
        agls.pb(agls[i] + 2.0L * PI);
    }
    bool ya = false;
    size_t r = 0;
    for (size_t l = 0; l < m; l++) {
        while (r < agls.size() && agls[r] - agls[l] <= PI + EPS) {
            r++;
        }
        if (r - l >= m) {
            ya = true;
            break;
        }
    }
    cout << (ya ? "Y\n" : "N\n");
    return 0;
}