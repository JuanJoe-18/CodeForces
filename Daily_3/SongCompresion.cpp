#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n, m;
    cin >> n >> m;
    multimap<ll, ll> songs;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        sum += a;
        songs.insert({a - b, a});
    }
    ll ans = 0;

    if (sum <= m) {cout << 0;
         return 0;
    }else {
        for (auto it = songs.rbegin(); it != songs.rend(); ++it) {
            if (sum - m >= 0) {
                sum -= it->first;
                ans++;
                if (sum <= m) break;
            }
        }
    }

    if(sum > m) cout << -1 << endl;
    else{
        cout << ans << endl;
    }
    return 0;
}