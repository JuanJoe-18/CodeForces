#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  vector<string> c(n);
  map<char, int> freq;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  vector<int> ann(m);
  for (int i = 0; i < m; i++) {
    cin >> ann[i];
  }
  vector<int> ans_i(m);
  for (int j = 0; j < m; j++) {
    for (int i = 0; i < n; i++) {
        freq[ c[i][j] ]++;
        ans_i[j] = max(freq[c[i][j]], ans_i[j]);
    }
    freq.clear();
  }
  int ans = 0;
  for (int i = 0; i < m; i++) {
    ans += ans_i[i] * ann[i];
  }
  cout << ans << endl;
  return 0;
}