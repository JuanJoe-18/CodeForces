#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


struct Pt {
    ll x, y;
    Pt operator-(const Pt & o) const {
        return  {x - o.x ,y - o.y };
    }
};
    ll cross(Pt a, Pt b) {
        return a.x * b.y - a.y * b.x;
    }

    int half(Pt a) {
        return (a.y < 0 ||  (a.y == 0 && a.x > 0)) ? 1 : 0;
    }

    int cruces (Pt a, Pt b) {
        if (b.y == 0 && b.x > 0) return 1;
        if (a.y > 0  && b.y < 0) return 1;
        return 0;
    }



    void  solve () {
        ios_base::sync_with_stdio(0); cin.tie(0);
        int n; cin >> n;
        vector<Pt> p(n);
        for (int i = 0; i < n; i++) cin >> p[i].x >> p[i].y;

        vector<Pt> v(n-1);
        for (int i = 0; i < n - 1; i++)  v[i] = p[i + 1] - p[i];
        int ans = 0;
        int l = 0;
        int ic = 0;

        auto valid = [&](int l, int r) {
            if (r - l + 1 < 3) return true;
            Pt vclose = p[l] - p[r];
            if (cross (v[r-1],vclose) >= 0) return  false;
            if (cross(vclose, v[l]) >= 0) return false;
            int tc = ic + cruces(v[r - 1], vclose) + cruces(vclose, v[l]);
            return tc == 1;
        };



        for (int r = 1; r < n; r++) {
            if (r - l >= 2 && cross(v[r - 2], v[r-1]) >= 0) {
                l = r - 1;
                ic = 0;
            } else if (r - l >= 2) {
                ic += cruces(v[r - 2], v[r-1]);
            }


            while (r - l + 1 >= 3 && !valid(l,r)) {
                if (r - l >= 2) {
                    ic -= cruces(v[l], v[l + 1]);
                }
                l++;
            }
            if (r - l + 1 >= 3) {
                ans = max( ans , r - l + 1);
            }
        }
        cout << ans << "\n";

}

int main () {
        ios_base::sync_with_stdio(0); cin.tie(0);
        int t; cin >> t;
        while (t--) solve();
        return 0;
    }


