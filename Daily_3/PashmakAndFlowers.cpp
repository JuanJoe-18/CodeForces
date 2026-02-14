#include<bits/stdc++.h>
using namespace  std;
typedef  long long ll;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll Mf = 0, mf = 0;
    ll M = *max_element(a.begin(),a.end());
    ll m = *min_element(a.begin(),a.end());

    for (ll x : a) {
        if (x == M) Mf++;
        if (x == m) mf++;
    }

    ll count = 0;

    if (M == m) {
        count = 1ll*n*(n-1)/2;
    } else {
        count = mf*Mf;
    }
    cout << M-m << " " << count << endl;



    return 0;
}