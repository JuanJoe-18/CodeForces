#include <algorithm>
#include <bits/stdc++.h>
#include <set>
using namespace std;
int main() {
  int n;
  cin >> n;
  multiset<int> a;
  for (int i = 0; i < n - 1; i++) {
    int val;
    cin >> val;
    a.insert(val);
  }
  for (int i = 1; i <= n; i++) {
    if (!a.count(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}
