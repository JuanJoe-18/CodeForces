#include<bits/stdc++.h>
using namespace std;
typedef long long ll;






int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll res_gcd = a[0];

    for (int i = 1; i < n; i++) {
        res_gcd = gcd(res_gcd, a[i]);
        if (res_gcd == 1) break;
    }

    ll count = 0;
    for (ll i = 1; i * i <= res_gcd; i++) {
        if (res_gcd % i == 0) {
            count++;
            if (i * i != res_gcd) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}
