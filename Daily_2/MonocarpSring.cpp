#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n;
    cin >> s;
    vector<int> a(n);
    int k = 0;
    for (int i = 0; i < n; i++) {
      a[i] = (s[i] == 'a' ? 1 : -1);
      k += a[i]; 
    }
    
    map<int, int> last_pos;
    last_pos[0] = -1;
    
    int sum = 0;
    int ans = n + 1;
    if (k == 0) {
      ans = 0;
    }

    for (int i = 0; i < n; i++) {
      sum += a[i];
      int p = sum - k;
      if (last_pos.count(p)) {
        int currl = i - last_pos[p];
        ans = min(ans, currl);
      }
      last_pos[sum] = i;
    }
    if (ans >= n) {
      cout << -1 << endl;
    } else {
      cout << ans << endl;
    }
  }
  return 0;
}
