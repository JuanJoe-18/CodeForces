#include <bits/stdc++.h>
#include <map>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  map<int, int> m;
  for (int i = 1; i <= n; i++) {
    int j;
    cin >> j;
    m[j] = i;
  }

  for (int i = 1; i <= n; i++) {
    cout << m[i] << " ";
  }
  return 0;
}
