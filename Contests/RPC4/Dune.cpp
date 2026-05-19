#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

struct dot{
    int x, y;
};

ld dist (int x1 , int x2, int y1, int y2) {
    return sqrtl((ld)(x2-x1)*(x2-x1) + (ld)(y2-y1)*(y2-y1));
}

int main() {
    int n; cin >> n;
    vector<pair<long double, dot>> m;
    
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        m.push_back({0.0L, {x, y}});
    }
    
    auto q_x = m.front(); 
    for (auto& p : m) p.first = dist(p.second.x, q_x.second.x, p.second.y, q_x.second.y);
    sort(m.begin(), m.end(), [](const auto& a, const auto& b) { return a.first > b.first; });

    auto q1 = m[0]; 

    for (auto& p : m) p.first = dist(p.second.x, q1.second.x, p.second.y, q1.second.y);
    sort(m.begin(), m.end(), [](const auto& a, const auto& b) {return a.first < b.first;});
    
    ld ans = 0;
    for (int i = 0; i < n - 1; i++) {
        ans += dist(m[i].second.x, m[i+1].second.x, m[i].second.y, m[i+1].second.y);
    }
    
    printf("%.10Lf \n", ans);

    return 0;
}