#include <bits/stdc++.h>
#include <codecvt>
#include <set>
#include <unordered_set>
#include <utility>
using namespace std;
int main() {
  string s;
  cin >> s;
  map<char, int> freq;
  for (char c : s) {
    freq[c]++;
  }
  int p = 0;
  set<pair<const char, int>> a;
  char impar;
  for (auto [c, f] : freq) {
    if (f % 2) {
      p++;
      impar = c;
    }
  }
  if (p > 1) {
    cout << "NO SOLUTION";
    return 0;
  }

  string ans;

  string left;
  for (auto [c, f] : freq) {
    left.append(f / 2, c);
  }
  ans.append(left);
  if (p == 1) ans.append(1, impar);

  reverse(left.begin(), left.end());
  string right = left;
  ans.append(right);
  cout << ans << endl;

  return 0;
}