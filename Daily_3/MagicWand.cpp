#include <bits/stdc++.h>
#include <ostream>
using namespace std;
int main() {
  int q;
  cin >> q;
  while (q--) {
    int n;
    cin >> n;
    int even = 0, odd = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0)
        even++;
      else
        odd++;
    }
    if (even == n || odd == n) {
      for (int v : a)
        cout << v << " ";
      cout << "\n";
    } else {
      sort(a.begin(), a.end());
      for (int v : a)
        cout << v << " ";
      cout << "\n";
    }
  }
  return 0;
}
