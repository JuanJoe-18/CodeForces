#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define all(v) v.begin(), v.end()
int main () {
    int n; cin >> n;

    vector<int> v1 (n);
    vector<int> v2 (n);
    vector<int> v3 (n);
    for (int i = 0; i < n; i++) {
        vector<int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(all(v));
        v1[i] = v[0];
        v2[i] = v[1];
        v3[i] = v[2];
    }

    ll a = *min_element(all(v1));
    ll b = *min_element(all(v2));
    ll c = *min_element(all(v3));

    cout << 1ll*a*b*c << endl;

    return 0;

}