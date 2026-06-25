#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n; cin >> n;
    vector<pair<pair<int,int>,int>> v(n);
    int N = 0;
    for (size_t i = 0; i < n; i++) {
        int a, b, x; cin >> a >> b >> x;
        v[i] = {{a,b},x};
        N = max(N,b);    
    }
    sort(v.begin(),v.end());
    int baldes = 0;
    int ans = 0;
    for (size_t i = 1; i <= N; i++) {
        for (size_t j = 0; j < n; j++) {
            int start = v[j].first.first;
            int end = v[j].first.second;
            int x = v[j].second;
            if (start == i) {
                baldes+=x;
            }
            ans = max(ans,baldes);
            if (end == i) {
                baldes-=x;
            }
        }
    }


    cout << ans << endl;
    


         


    return 0;
}