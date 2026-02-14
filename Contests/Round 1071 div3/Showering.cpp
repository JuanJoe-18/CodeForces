#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        ll total = 0;
        for (int i = 0; i < n; ++i) cin >> a[i];

        for (int i = 1; i < n; ++i) {
            total += abs(a[i] - a[i-1]);
        }

        ll mxa = 0;
        for (int i = 0; i < n; ++i) {
            ll am = 0;
            if (i == 0) {
                am = abs(a[1] - a[0]);
            } else if (i == n - 1) {
                am = abs(a[n - 1] - a[n - 2]);
            } else {
                am = (ll)abs(a[i] - a[i-1]) + abs(a[i+1] - a[i]) - abs(a[i+1] - a[i-1]);
            }
            mxa = max(mxa, am);
        }
        cout << total - mxa << endl;
    }
    return 0;
}