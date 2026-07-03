#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define all(v) v.begin(), v.end()

struct Cow {int x; int y; int id;};

int main () {
    int m; cin >> m;
    vector<Cow> N;
    vector<Cow> E;

    for (int i = 0; i < m; i++) {
        char d; int x, y; cin >> d >> x >> y;
        if (d == 'N') N.pb({x, y, i});
        else E.pb({x, y, i});
    }

    vector<tuple<int, int, int, int>> events;

    for (auto e : E) {
        for (auto n : N) {
            if (e.x < n.x && n.y < e.y) {
                int te = n.x - e.x;
                int tn = e.y - n.y;

                if (te < tn) {
                    events.pb({tn,te, n.id, e.id});
                }
                else if (tn < te) {
                    events.pb({te,tn, e.id, n.id});
                }
            }
        }
    }

    sort(all(events));

    vector<int> ans(m,-1);
    for (auto i : events) {
        auto [dist_v, dist_b, id_v, id_b] = i;
        if (ans[id_v] != -1) continue;
        if (ans[id_b] != -1 && ans[id_b] < dist_b) continue;
        ans[id_v] = dist_v;
    }

    for (int i : ans) cout << ((i >= 0)? to_string(i).append("\n"):"Infinity\n");

    return 0;



}