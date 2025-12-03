#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    int blocks = 1;
    for(int i=0; i<m; i++) cin >> a[i];
    for(int i=1; i<m; i++) {
        if(a[i] < a[i-1]) blocks++;
    }
    ll ans = 1ll*(blocks-1)*n + a[m-1]-1;
    cout << ans << "\n";
    
    return 0;
}
