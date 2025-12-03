#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> b(n);
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  multiset<int> t;
  for (int x : b) {
    auto it = t.upper_bound(x);
    if (it != t.end()) t.erase(it);
    t.insert(x);
  }
  cout << t.size();

  return 0;
}