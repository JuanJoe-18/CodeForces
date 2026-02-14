#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
int main(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll ans = 1;
    for (int i = 0; i < n; ++i) {
        if (a[i] > ans) {
            cout << ans << endl;
            return 0;
        }
        ans += a[i];

    }
    cout << ans << endl;

    /*

    5
    1 2 2 7 9 prefixArray -> 1 3 5 12 21
    1 2 3 4 5 (6)


    */












    return 0;
}