#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {   
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0;
    if (a[0] % 2 != a[n-1] % 2) {
        int l = 0, r = n - 1;
        while (a[l] % 2 != a[n-1] % 2) l++;
        while (a[r] % 2 != a[0] % 2) r--;

        int _d = (n - 1) - r; 
        ans = min(l, _d);
    }
    
    cout << ans << endl;
}
    return 0;
}