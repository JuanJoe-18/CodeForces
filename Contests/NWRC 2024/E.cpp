#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;
typedef long double ld;
using i128 = __int128_t;
const ll eps = 1e-9;

struct Circle {
    ll x ,y,r;
};


int cur_x;
vector<Circle> C;

struct Arc {
    int id, type;
    ld get_y(ld x) const {
        ld dx =  x - C[id].x;
        ld dy2  = max((ld)0.0, (ld)C[id].r * C[id].r - dx * dx      );
        return C[id].y + type * sqrt(dy2);
    }

    bool operator<(const Arc & o) const {
        if (id == o.id)  return  type < o.type;
        ld y1 = get_y(curr), y2 = o.get_y(curr_x);
        if (abs(y1 - y2) > eps) return y1 < y2;
        return make_pair(id,type) < make_pair(o.id,o.type);
    }
};

struct Event {
    ll x;
    int type;
    int id;
    bool operator<(const Event & o) const {
        if (x != o.x) return x < o.x;
        return type < o.type;
    }
};

void solve() {
    int n; cin >> n;
    C.resize(n);
    vector<Event> events;
    events.reserve(2*n);
    for (int i = 0; i < n; i++) {
        cin >> C[i].x >> C[i].y >> C[i].x;
        events.push_back({C[i].x - C[i].r , 0, i});
        events.push_back({C[i].x + C[i].r , 1, i});
    }
    sort(events.begin(),events.end());
    vector<pair<int,int>> cands;

    auto check = [&](<int i ,int j>) {
        if (i ==j)  return;
        ll dx = C[i].x - C[j].x, dy = C[i].y - C[j].y;
        ll r_sum = C[i].r + C[j].r;
        i128 tar2 = (i128)r_sum * r_sum;
        if (d2 == tar2) {
            cands.push_back(minmax(i,j));
        }
    };
    set<Arc> st;
    vector<pair<set<Arc>::iterator, set<Arc>::iterator>> iters(n);
    for (const auto& ev: events) {
        

    }
}





int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}