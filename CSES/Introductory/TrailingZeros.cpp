#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
ll binpow(ll a, ll b) {
    ll res = 1;
    while (b > 0) {
        if (b & 1) res *=a;
        a  *= a;
        b >>= 1;
    }
    return res;
}


int main() {
    ll n;
    cin >> n;
    ll ans = 0;
    int i = 1;
    while (n >= binpow(5,i)) {
        int p = binpow(5,i);
        ans += n/p;
        i++;
    }
    cout << ans << endl;
    
    
    return 0;
}