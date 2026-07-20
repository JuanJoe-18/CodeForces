
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                cnt++;
            } else {
                if (cnt > 0) {
                    ans = max(ans, (cnt + 1) / 2);
                    cnt = 0;
                }
            }
        }
        if (cnt > 0) {
            ans = max(ans, (cnt + 1) / 2);
        }
        cout << ans << "\n";
    }

    return 0;
}