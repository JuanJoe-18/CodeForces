#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  int l = 0, r = n - 1;
  ll sum1 = a[l];
  ll sum3 = a[r];

  ll ans = 0;

  while (l < r) {
	  if (sum1 == sum3) {
		  ans = fmax(ans, sum1);
		  l++;
		  sum1 += a[l];
		} else if (sum1 > sum3) {
			r--;
			sum3 += a[r];
		} else {
			l++;
			sum1 += a[l];
    }
  }

  cout << ans << endl;

  return 0;
}
