#include <bits/stdc++.h>
#include <map>
using namespace std;
typedef long long ll;

int main() {
  int n;
  ll x;
  cin >> n >> x;
  vector<pair<ll,int>> a(n);
  for (int i = 0; i < n; i++) {
    ll val;
    cin >> val;
    a[i] = {val, i+1};
  }
  sort(a.begin(), a.end());
  int l = 0, r = n - 1;
  bool found = false;
  ll sum = 0;
  while (l < r) {
    while (a[l].first + a[r].first <= x && l < r) {
      if (a[l].first + a[r].first == x) {
        found = true;
        cout << a[l].second <<" "<< a[r].second << endl;
        return 0;
      }
      l++; 
    }
    r--;
  }
  if (!found)
    cout << "IMPOSSIBLE" << endl;
  return 0;
}