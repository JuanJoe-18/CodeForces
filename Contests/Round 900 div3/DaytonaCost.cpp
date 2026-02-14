#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        multiset<int> a;
        for (int i = 0; i<n; i++) {
            int v; cin >> v;
            a.insert(v);
        }

        if (a.count(k) > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }


    return 0;
}