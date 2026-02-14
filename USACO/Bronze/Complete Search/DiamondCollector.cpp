#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
 

    int l=0 , r= 0;
    int ans = 0;
    while (l < n) {
        while(r < n && (a[r]-a[l]) <= k){
            r++;
        }

        ans = max( ans, (r - l ));
        l++;
    }

    cout << ans << endl;
    





    return 0;
}
