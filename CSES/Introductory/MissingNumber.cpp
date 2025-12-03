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

/* Este algoritmo presenta algunas inconsistencoas por el forzamiento del caso 1
int n;
cin >> n;
vector<int> a(n - 1);
for (int i = 0; i < n - 1; i++)
  cin >> a[i];
sort(a.begin(), a.end());
for (int i = 0; i < n ; i++) {
  if ( i == (n-1) - 1 && a[i] ==2) {
      cout << 1 << endl;
      return 0;
  }else if (i == (n-1) - 1) {
    cout << a[i] + 1 << endl;
    return 0;
  } else if (a[i] + 1 != a[i + 1]) {
    cout << a[i] + 1 << endl;
    return 0;
  }
}*/