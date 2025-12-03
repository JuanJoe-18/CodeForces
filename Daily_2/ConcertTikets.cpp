#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  multiset<int> p;
  cin >> n >> m;
  vector<int> c(m);
  for (int i = 0; i < n; i++) {
    int p_i;
    cin >> p_i;
    p.insert(p_i);
  }
  for (int i = 0; i < m; i++) {
    cin >> c[i];
    auto it = p.upper_bound(c[i]);
    if (it != p.begin()){
        it--;
        cout << *it << endl;
        p.erase(it);
    } else{
        cout << -1 << endl;
    }
  }
  
  return 0;
}