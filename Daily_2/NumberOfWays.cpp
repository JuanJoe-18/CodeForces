#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
typedef long long ll;
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  ll SUM = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    SUM += a[i];
  }
  if (n < 3 || SUM % 3 != 0) {
    cout << 0 << endl;
    return 0;
  }
  ll s1 = SUM / 3, s2 = 2 * s1;
  ll count_s1 = 0;
  ll sum = 0, ans = 0;

  for (int i = 0; i + 1 < n; i++) {
    sum += a[i];
    if (sum == s2)
      ans += count_s1;
    if (sum == s1)
      count_s1++;
  }

  cout << ans << endl;
  return 0;
}