#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    
    sort(b.begin(), b.end());
    
    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + a[i];
    }
    
    long long T_prod = 0;
    int lc = 0;
    
    for (int i = 0; i < m; i++) {
        int c_cut = b[i]; 
        long long block_sum = pref[c_cut] - pref[lc];
        
        T_prod += abs(block_sum);
        lc = c_cut;
    }
    
    long long e_sum = pref[n] - pref[lc];
    T_prod += e_sum;
    
    cout << T_prod << "\n";

    
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
