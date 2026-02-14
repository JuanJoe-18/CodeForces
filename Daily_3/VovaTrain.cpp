#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,v,l,r;
        cin >> n >> v >> l >> r;
        int k = n/v;
        double x = 1.0*(l/v);
        int pi = (l + v - 1) / v;
        int pj = (r/v);
        int w = pj - pi + 1;
        int ans = k-w;
        cout << ans << endl;
    }
    
    return 0;
}