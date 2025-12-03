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
  ll count = 0, sum = 0;
  while (l < n) {
    while (r < n && sum + a[r] <= x) {
      sum += a[r];
      if (sum == x) {
        sum -= a[l];
        count++;
        l++;
      }
      r++;
    }

    if (r < n && sum + a[r] > x) {
      sum -= a[l];
    }
    l++;
  }
  cout << count << endl;
  return 0;
}