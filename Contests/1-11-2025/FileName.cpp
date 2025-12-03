#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n;
  cin >> s;
  int xs = 0;
  int ans = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      if (s[i] == 'x') {
        xs++;
      }
    } else {
      if (xs+1 >= 3) {
        ans += xs + 1 - 2;
      }
      xs = 0;
    }
  }
  if (xs+1 >= 3) {
    ans += xs + 1 - 2;
  }
  cout << ans << endl;

  return 0;
}
