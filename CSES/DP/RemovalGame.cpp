#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll INF = numeric_limits<ll>::max();
int n;
vector<vector<ll>> dp(n, vector<ll>(n, INF));
vector<int> a;

long long solve(int l, int r) {

    if (l == r)
        return a[l];

    if (dp[l][r] != INF)
        return dp[l][r];

    return dp[l][r] = max(
        a[l] - solve(l + 1, r),
        a[r] - solve(l, r - 1)
    );
}

int main() {
    cin >> n;

    a.resize(n);
    dp.assign(n, vector<ll>(n, INF));
    for ( int i = 0; i < n; i++ ) {
        cin >> a[i];
    }

    ll T = accumulate(a.begin(), a.end(), 0LL);

    ll D = solve(0, n - 1);
    cout << ((T+D) / 2) << endl;


}