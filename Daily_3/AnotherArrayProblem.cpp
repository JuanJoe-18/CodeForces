#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> 

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int x = 2; x <= 100000; ++x) {
        bool found_coprime = false;
        for (ll v : a) {
            if (gcd(v, x) == 1) {
                found_coprime = true;
                break; 
            }
        }
        if (found_coprime) {
            cout << x << "\n"; 
            return;
        }
    }
    cout << -1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}