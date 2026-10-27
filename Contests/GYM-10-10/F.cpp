#include<bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define pb push_back()
#define fi first
#define se second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;


struct Fwk {
    int n;
    vll t;
    Fwk(int sz) {
        n = sz;
        t.assign(n + 1,0);
    }

    void update(int i, ll v) {
        for (; i <= n; i+=i&-i) t[i] = max(t[i],v);
    }

    ll query (int i) {
        ll r = 0;
        for (; i > 0; i-=i&-i) r = max(r, t[i]);
        return r;
    }
};


template<typename T>
pair<vector<T>, vector<int>> compress_coords(const vector<T>&a) {
    vector<T> vals = a;
    sort(all(vals));
    vals.erase(unique(all(vals)), vals.end());
    vector<int> ids(a.size());
    for (int i = 0; i < (int) a.size(); i++) ids[i] = lower_bound(all(vals), a[i]) - vals.begin();
    return {vals,ids};
}


struct P  {
    int b, f;
    ll d;
};




int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<P> a(n);
    for (int i = 0; i < n; i++) {
        int B, F, D; cin >> B >> F >> D;
        a[i].b = B; a[i].f = F; a[i].d = D;
    }
    sort (all(a), [](const P& x, const P& y) {
        if (x.b !=  y.b) return x.b < y.b;
        return x.f < y.f;
    });

    vector<P> p;
    for (int i = 0; i < n; i++) {
        if (!p.empty() && p.back().b == a[i].b &&  p.back().f == a[i].f) {
           p.back().d += a[i].d;
        } else {
            p.push_back(a[i]);
        }
    }

    vi fr;
    for (const auto& x: p) fr.push_back(x.f);
    auto [vs, id] = compress_coords(fr);

    int m =  vs.size();
    Fwk ft(m);

    int k = p.size();
    int i = 0;
    while (i < k) {
        int j = i;
        while (j < k  && p[j].b == p[i].b) j++;
        vll  dp(j - i);
        for (int x = i; x < j; x++) {
            int c = id[x] + 1;
            dp[x - i] = ft.query(c - 1) + p[x].d;
        }
        for (int x = i; x < j; x++) {
            int  c = id[x] + 1;
            ft.update(c, dp[x - i]);
        }
        i = j;

    }
    cout << ft.query(m) << "\n";

    return 0;
}
