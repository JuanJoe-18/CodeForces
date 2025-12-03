#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<pair<int,int>> idx(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    idx[i] = {a[i],i};
  }
  sort(idx.rbegin(),idx.rend());

  
  ll sum = 0;
  vector<int> cutPos; 
  cutPos.reserve(k);
  for (int i = 0; i < k; ++i) {
    sum += idx[i].first;
    cutPos.push_back(idx[i].second);
  }

 
  sort(cutPos.begin(), cutPos.end());

  vector<int> segSizes;
  segSizes.reserve(k);
  int prev = -1;
  for (int i = 0; i < k - 1; ++i) {
    segSizes.push_back(cutPos[i] - prev);
    prev = cutPos[i];
  }
  segSizes.push_back(n - 1 - prev);

  cout << sum << endl;
  for (int i = 0; i < k; ++i) {
    cout << segSizes[i] << " ";
  }
  return 0;
}