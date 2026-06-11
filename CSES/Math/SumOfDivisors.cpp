#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 10e9+7;

int main() {
    int x; cin  >> x;
    ll ans = 0;

    for (int i = 1; i * i <= x; i++) {
        if (x % i == 0) { ans += i; }
    }
    ans += x;
    cout << ans << endl;
    return 0;
}
