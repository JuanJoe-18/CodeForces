#include<bits/stdc++.h>
#define all(x) x.begin(), x.end()
typedef long long ll;

using namespace std;
int main () {
    int n; cin >> n;
    vector<int> a(2*n);
    for (int i = 0; i < 2*n; i++) cin >> a[i];

    sort(all(a));
    ll minin = (ll)9e18;

    for (int i = 0; i < 2*n; i++) {
        for (int j = i+1; j < 2*n; j++) {
            vector<int> temp;
            temp.reserve(2*n-2);
            for (int k = 0; k < 2*n; k++) if (k!=i && k!=j) temp.push_back(a[k]);
            ll sum = 0;
            for (int p = 0; p+1 < (int)temp.size(); p += 2) sum += (ll)temp[p+1] - (ll)temp[p];
            if (sum < minin) minin = sum;
        }
    }

    cout << minin << '\n';
    



    return 0;
}