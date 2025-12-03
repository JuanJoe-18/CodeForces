#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  set<int> u;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 0;
  
  int size = 0;
  while (l < n) {
    while (r < n && !u.count(a[r])) {
      u.insert(a[r]);
      r++;
    }
    size = fmax(size,u.size());
    u.erase(a[l]);
    l++;
  }
  
  cout << size << endl;
  return 0;
}