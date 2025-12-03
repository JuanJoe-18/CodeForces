#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> e, o;     
    e.reserve(n);
    o.reserve(n);

    for (int i = 0; i < n; i++) {
      int val;
      cin >> val;
      if (val % 2 == 0) e.push_back(val);
      else o.push_back(val);
    }

    sort(o.rbegin(), o.rend());

    ll sum = 0;
    if (!o.empty()) {
      for (int x : e) sum += x;         
    }
    int k = (int) ((o.size() + 1) / 2);   
    for (int i = 0; i < k; ++i) sum += o[i];

    cout << sum << endl;
  }

  return 0;
}