#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int,int>> v;
        while (n--) {
            int l, r;
            cin >> l >> r;
            v.push_back({l,r});
        }
        v.push_back({0,0});
        v.push_back({m,m});
        sort(v.begin(), v.end());

        int ans = 0;
        for (int i = 1; i < v.size(); ++i) {
            ans =  max(ans ,(v[i].first-v[i-1].second));
        }

        if (ans >= s) cout << "yes" << endl;
        else cout << "no" << endl;




    }

    return 0;
}
