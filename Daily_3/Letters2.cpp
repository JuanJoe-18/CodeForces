#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n; 
    ll m; 
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
    int cd = 0;     
    ll cs = 0;  
    for(int i = 0; i < m; i++) {
        ll l = b[i];
        while (cd < n && l > cs + a[cd]) {
            cs += a[cd]; 
            cd++;                
        }
        cout << cd + 1 << " " << l - cs << "\n";
    }

    return 0;
}
