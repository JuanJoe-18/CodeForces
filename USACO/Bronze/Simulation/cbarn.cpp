#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("cbarn.in","r",stdin);
    freopen("cbarn.out","w",stdout);

    int n; cin >> n;
    vector<int> r(n);
    for (int i = 0; i<n; i++) cin >> r[i];

    int ans = 1e9; int res;
    for (size_t k = 0; k < n; k++) {
        res = 0;
        for (int i = 0; i < n; i++) {
            //cout << i << " " << r[i] << endl;
            res += r[(i+k)%n]*i;
            //printf(" idx: %d  -> %d\n",((i+k)%n),r[((i+k)%n)]);
        }
        ans = min(res,ans);
    }

    cout << ans << endl;
    
        
        
    
   
    








    return 0;
}