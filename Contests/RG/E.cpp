
#include <iostream>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;

  string s;
  cin >> s;

  for (int i = 0; i < q; i++) {
    int l, r, x, y;
    cin >> l >> r >> x >> y;

    int c4 = 0;
    int c8 = 0;

    for (int j = l - 1; j < r; j++) {
      if (s[j] == '4') {
        c4++;
      } else {
        c8++;
      }
    }

    if (max(abs(x), abs(y)) <= c4 + c8 && abs(x) + abs(y) <= c4 + 2 * c8) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
