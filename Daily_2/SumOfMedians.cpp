    #include <algorithm>
    #include <bits/stdc++.h>
    #include <cmath>
    #include <cstdio>
    #include <vector>
    typedef long long ll;
    using namespace std;
    int main() {
      int t;
      cin >> t;
      while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n * k);
        for (int i = 0; i < n * k; i++) {
          cin >> a[i];
        }
        ll ans = 0;
        int step = n / 2 + 1;
        int r = n * k;
        for (int i = 0; i < k; i++) {
          ans += a[r - step];
          r -= step;
        }
        cout << ans << endl;
      }
      return 0;
    }