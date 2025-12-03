#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n, m;
    cin >> n;
    
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    vector<int> s_o = s;
    sort(s_o.begin(), s_o.end());
    
    cin >> m;
    
    
    vector<ll> prefix(n + 1, 0);
    vector<ll> prefix_sorted(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + s[i - 1];
        prefix_sorted[i] = prefix_sorted[i - 1] + s_o[i - 1];
    }
    
    for (int i = 0; i < m; i++) {
        int type, l, r;
        cin >> type >> l >> r;

        if (l < 1 || r > n || l > r) {
            cout << "0\n";
            continue;
        }
        
        if (type == 1) {
            cout << prefix[r] - prefix[l - 1] << endl;
        } else {
            cout << prefix_sorted[r] - prefix_sorted[l - 1] << endl;
        }
    }
    
    return 0;
}