#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  string s;
  cin >> s;
  int q;
  cin >> q;
  vector<int> prefix(s.size());
  for (int i = 1; i < s.size(); i++) {
    prefix[i] = prefix[i - 1];
    if (s[i] == s[i - 1])
      prefix[i]++;
  }
  while (q--) {
	int l,r;
	cin >> l >> r;
	int ans = prefix[r - 1] - prefix[l - 1];
	cout << ans << endl;
  }

    return 0;
}
