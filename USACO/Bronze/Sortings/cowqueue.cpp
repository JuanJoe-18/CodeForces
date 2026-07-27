#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<pair<int,int>> p;
    while (n--) {
        int a, b; cin >> a >> b;
        p.push_back({a,a+b});
    }
    sort(p.begin(),p.end());
    for (int i=1; i < p.size(); i++) {
        auto [ a_0 ,b_0 ] = p[i-1];
        auto [ a_1 ,b_1 ] = p[i];
        if (a_1 < b_0) {
            p[i].second += b_0-a_1;
        }
    }

    cout << p[p.size()-1].second << endl;


    return 0;
}