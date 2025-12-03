#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());

  int l = 0, r = n - 1;
  int gondolas = 0;
  while (l <= r) {
    if (a[l] + a[r] <= x) {
      ++l;
      --r;
    } else {
      --r;
    }
    ++gondolas;
  }

  cout << gondolas << endl;
  return 0;
}