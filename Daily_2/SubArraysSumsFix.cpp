#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n; cin >> n;
    int x; cin >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0;
    int ans = 0;
    long long sum = 0;
    while (l < n) {
        while (r < n && sum < x) {
            sum += a[r];
            r++;
        }
        if (sum == x) ans++;
        sum -= a[l];
        l++;
    }
    cout << ans << endl;
    return 0;

}