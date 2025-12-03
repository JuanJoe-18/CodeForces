#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> d;
    for (int i = 1; i < n; i+=2) {
      d.push_back(a[i] - a[i - 1]);
    }
    int max = *max_element(d.begin(), d.end());
    cout << max << endl;
  }
  return 0;
}