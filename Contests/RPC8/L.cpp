#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define endl "\n"
int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1), b(n + 1);
  for (int i = 1; i <= n; i++) {
    cin >> a[i] >> b[i];
  }

  vector<int> dp(n + 2);

  for (int i = n - 2; i >= 1; i--) {
    dp[i] = dp[i + 1];
    for (int j = i + 1; j <= n - 1; ++j) {
      for (int k = j + 1; k <= n; ++k) {
        if (k <= b[i] && a[k] <= i) {
          dp[i] = max(dp[i], 1 + dp[k + 1]);
        }
      }
    }
  }

  cout << dp[1] << endl;

  return 0;
}
