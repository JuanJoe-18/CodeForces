#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("measurement.in","r",stdin);
    freopen("measurement.out","w",stdout);

    int n, g;
    if (!(cin >> n >> g)) return 0;

    vector<pair<int, pair<int, int>>> v(n);
    map<int, int> cows;

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second.first >> v[i].second.second;
        cows[v[i].second.first] = g; 
    }

    sort(v.begin(), v.end());
    set<int> lideres_actuales; 
    int ans = 0;
    for (auto const& p : v) {
        int id = p.second.first;
        int cambio = p.second.second;
        cows[id] += cambio;
        int mx = g;
        for (auto const& [vaca_id, puntaje] : cows) {
            mx = max(mx, puntaje);
        }
        set<int> nuevos_lideres;
        for (auto const& [vaca_id, puntaje] : cows) {
            if (puntaje == mx) {
                nuevos_lideres.insert(vaca_id);
            }
        }
        if (mx == g) {
            nuevos_lideres.clear(); 
        }
        if (nuevos_lideres != lideres_actuales) {
            ans++;
            lideres_actuales = nuevos_lideres; 
        }
    }
    //not finished tle

    cout << ans << "\n";
    return 0;
}
