#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end(), greater<int>());
    
    int total = accumulate(a.begin(), a.end(), 0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += a[i];
      if (sum > total - sum) {
          cout << i + 1 << endl;
          return 0;
       }
    }
    return 0;
}
