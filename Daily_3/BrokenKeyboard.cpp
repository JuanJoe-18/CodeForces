#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n , k;
    cin >> n >> k;
    map<int,int> key;
    string s; cin >> s;
    for (int i = 0; i<k; i++) {
        char val;
        cin >> val;
        key[val] = 1;
    }

    ll ans = 0;
    int l = 0, r = 0;
    while (l < n) {
        while (r < n && key.count(s[r])) {
            r++;
        }
        int w = r-l;
        ans += 1ll*w*(w+1)/2;
        if (r == n) break;
        r++;
        l = r;
    }
    cout << ans << endl;








    return 0;
}