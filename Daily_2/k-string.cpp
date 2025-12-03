#include <bits/stdc++.h>
using namespace std;
int main() {
  int k;
  cin >> k;
  string s;
  cin >> s;

  map<char, int> f;
  for (char c : s) {
    f[c]++;
  }
  string part;
  for (auto [c, f] : f) {
    if (f % k != 0) {
      cout << -1 << endl;
      return 0;
    }
    part.append(f / k, c);
  }
  string res;
  for (int i = 0; i < k; i++) {
    res += part;
  }
  cout << res;
  return 0;
}