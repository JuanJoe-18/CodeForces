#include <bits/stdc++.h>
#include <map>
using namespace std;
int main() {
  string a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  string w = a + b + c;
  map<int, int> m;
  map<char, int> v;
  for (char c : w)
    m[c]++;
  string ans = "NEWYEARANDCHRISTMASMEN";
  sort(ans.begin(), ans.end());
  for (char c : ans)
    v[c]++;

  for (auto p : v) {
    cout << p.second << " ";
    // solve
  }
  cout << endl;

  return 0;
}
