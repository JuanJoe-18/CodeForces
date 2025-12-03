#include <bits/stdc++.h>
#include <map>
#include <utility>
#include <vector>
using namespace std;
typedef long long ll;
int main() {
  int k;
  cin >> k;
  vector<pair<int, int>> ans;
  map<int, pair<int, int>> seen;
  for (int i = 0; i < k; i++) {
    int n;
    cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for (int j = 0; j < n; j++) {
      cin >> a[j];
      sum += a[j];
    }
    for (int j = 0; j < n; j++) {
      ll sum_ij = sum - a[j];
      if (seen.count(sum_ij)) {
        auto [prev_i, prev_j] = seen[sum_ij];
        if (prev_i != i) {
          ans.push_back({prev_i, prev_j});
          ans.push_back({i, j});
        }
      }
      seen[sum_ij] = {i, j};
    }
  }
  if (ans.size()) {
    cout << "YES" << endl;
    for (int i = 0; i < 2; i++) {
        cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
    }
    
  } else {
    cout << "NO";
  }
  

  return 0;
}