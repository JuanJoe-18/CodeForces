#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll LINF = 1e18;

// ====================================================================
//  TEMPLATE::LAZY SEGMENT TREE (RMQ - Range Minimum Query)
// ====================================================================
class LazySegTree {
private:
    int n;
    vector<ll> st, lazy_add;
    const ll NEUTRAL = LINF; 

    ll combine(ll a, ll b) {
        return min(a, b);
    }

    void apply_add(int p, ll val) {
        st[p] += val;
        lazy_add[p] += val;
    }

    void push(int p) {
        if (lazy_add[p] != 0) {
            apply_add(p << 1, lazy_add[p]);
            apply_add((p << 1) | 1, lazy_add[p]);
            lazy_add[p] = 0;
        }
    }

    void build(int p, int L, int R, const vector<ll>& a) {
        if (L == R) {
            st[p] = a[L];
            return;
        }
        int mid = L + (R - L) / 2;
        build(p << 1, L, mid, a);
        build((p << 1) | 1, mid + 1, R, a);
        st[p] = combine(st[p << 1], st[(p << 1) | 1]);
    }

    void update(int p, int L, int R, int qL, int qR, ll val) {
        if (qL > R || qR < L) return;
        if (qL <= L && R <= qR) {
            apply_add(p, val);
            return;
        }
        push(p);
        int mid = L + (R - L) / 2;
        update(p << 1, L, mid, qL, qR, val);
        update((p << 1) | 1, mid + 1, R, qL, qR, val);
        st[p] = combine(st[p << 1], st[(p << 1) | 1]);
    }

    ll query(int p, int L, int R, int qL, int qR) {
        if (qL > R || qR < L) return NEUTRAL;
        if (qL <= L && R <= qR) return st[p];
        push(p);
        int mid = L + (R - L) / 2;
        return combine(query(p << 1, L, mid, qL, qR),
                       query((p << 1) | 1, mid + 1, R, qL, qR));
    }

public:
    LazySegTree(const vector<ll>& a) {
        n = a.size();
        st.assign(4 * n, NEUTRAL);
        lazy_add.assign(4 * n, 0);
        build(1, 0, n - 1, a);
    }

    void add_range(int L, int R, ll val) {
        if (L > R) return;
        update(1, 0, n - 1, L, R, val);
    }

    ll query(int L, int R) {
        if (L > R) return NEUTRAL;
        return query(1, 0, n - 1, L, R);
    }
};

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int q;
    cin >> q;

    vector<ll> X(q);
    vector<ll> coords;
    coords.reserve(q);

    for (int i = 0; i < q; i++) {
        cin >> X[i];
        coords.push_back(abs(X[i]));
    }
    sort(coords.begin(), coords.end());
    coords.erase(unique(coords.begin(), coords.end()), coords.end());
    int m = coords.size();

  
    LazySegTree tree(coords);

    int T_b = 0;

    for (int i = 0; i < q; i++) {
        ll val = abs(X[i]);
        int idx = lower_bound(coords.begin(), coords.end(), val) - coords.begin();

        if (X[i] > 0) {
            T_b++;
            tree.add_range(idx, m - 1, -1);
        } else {
            T_b--;
            tree.add_range(idx, m - 1, 1);
        }

        ll min_V = min(0LL, tree.query(0, m - 1));
        ll ans = T_b + min_V;

        cout << ans << (i == q - 1 ? "" : " ");
    }
    cout << "\n";

    return 0;
}