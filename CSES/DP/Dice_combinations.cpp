#include <bits/stdc++.h>
using namespace std;
typedef  long long ll;
int MOD = 1e9 + 7;
vector<int> dp;

long long solve(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;

    if (dp[n]) {
        return dp[n];
    }
    ll count = 0;
    for (int i = 1; i <= 6; ++i) {
        count = (count + solve(n - i)) % MOD;
    }
    dp[n] = count;
    return count;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    dp.assign(n + 1, 0);
    cout << solve(n) << endl;
    return 0;
}