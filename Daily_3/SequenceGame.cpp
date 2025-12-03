#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int x;
  cin >> x;
  if (x > *max_element(a.begin(), a.end()) ||
      x < *min_element(a.begin(), a.end())) {
        cout << "no";
  }else {

    
  
  }

  return 0;
}