#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    map<pair<int,int>,int> m;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            if (i != j && a[i][j] != 0) {
                m[{i,j}] = 0;
                if (m.count({j,i})) ans++;
            }
        }
    }

    cout << ans << endl;





    return 0;
}