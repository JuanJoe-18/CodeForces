#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}