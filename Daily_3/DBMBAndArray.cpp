#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;
        ll sum = 0;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum > s) {
            cout << "no" << endl;
            continue;
        } else {
            if (abs(s - sum) % x == 0) cout << "yes" << endl;
            else cout << "no" << endl;
        }
    }


    return 0;
}
