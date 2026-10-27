#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++ ) {
        cin >> a[i];
    }

    vector<int> dp(n + 1, 0);

    dp[1] = 0;
    dp[2] = abs(a[2]-a[1]);
    for (int i = 3; i <= n; i++) {
        for (int k = 1; i <= 100; k++) {
            dp[i] = min(dp[i-k] + abs(a[i]-a[i-k]), dp[i-2] + abs(a[i]-a[i-2]));
        }
    }

    cout << dp[n] << endl;



    return 0;
}


/*
 * mas solucion mas limpia
* #include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> h(n), dp(n, 1e9);

    for (int &x : h) cin >> x;

    dp[0] = 0;
    for (int i = 0; i < n; ++i) {
        if (i + 1 < n) dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
        if (i + 2 < n) dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
    }

    cout << dp[n - 1] << "\n";
    return 0;
}
 */
