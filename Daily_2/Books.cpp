#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  int l = 0, r = 0;
  ll ans = 0, sum = 0;
  while (l < n) {
    while (r < n && sum + a[r] <= x) {
      sum += a[r];
      r++;
    }
    ans = fmax(ans, r - l);
    if(r < n && sum + a[r] > x) {
      sum -= a[l];
    }
    l++;
  }
  cout << ans << endl;
  return 0;
}