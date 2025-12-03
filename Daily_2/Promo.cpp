#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  
  sort(p.rbegin(), p.rend()); 
  
  vector<long long> prefix(n + 1, 0);
  for (int i = 0; i < n; i++) {
    prefix[i + 1] = prefix[i] + p[i];
  }

  while (q--) {
    int x, y;
    cin >> x >> y;
    long long free_i = prefix[x] - prefix[x-y];
    cout << free_i << endl;
  }
  
  return 0;
}