#include <bits/stdc++.h>

using namespace std;

int main () {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)  cin >> a[i];

    int ans = 1;
    int c = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] <= x) c++;
        else c = 1;
        ans = max(ans,c);
    }

    cout << ans << endl;
    return 0;
}