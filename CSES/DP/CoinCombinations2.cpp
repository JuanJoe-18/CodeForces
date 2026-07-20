#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
typedef long long ll;
int main() {
    int n, x; cin >> n >> x;
    vector<int> coins(n);
    for (int &c: coins) cin >> c;

    vector<ll> dp(x + 1, 0);
    dp[0] = 1;

    for (int coin : coins) {
        for (int s = coin; s <= x; s++) {
            dp[s] = (dp[s] + dp[s - coin]) % mod;
        }
    }

    cout << dp[x] << endl;
    return 0;
}