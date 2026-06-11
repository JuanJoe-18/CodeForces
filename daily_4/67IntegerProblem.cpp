#include<bits/stdc++.h>
using namespace std;
int main () {

        int t; cin >> t;
        while (t--) {
            int n = 7;
        vector<int> a(n);
        for (size_t i = 0; i < n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        sort(a.begin(),a.end());
        for (size_t i = 0; i < n-1; i++) {
            ans -= a[i];
        }
        ans += a[n-1];

        cout << ans << endl;
        }


    return 0;
}
