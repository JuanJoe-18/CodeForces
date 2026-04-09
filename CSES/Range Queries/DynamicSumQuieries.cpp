#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n , q; cin >> n >> q;
    vector<int> v(n);
    vector<ll> s(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    s[0] = v[0];
    for (int i = 1; i < n; i++){
        s[i] = s[i-1] + v[i];
    }
    while (q--) {
        int t, a, b; //sean  x2 k o a y x3 u o b
        cin >> t >> a >> b;
        if ( t == 1) {
            v[a-1] = b;
        } else {
            if (a == 1) cout << s[b-1] << endl;
            else cout << s[b-1] - s[a-2]  << endl;
        }
    }

    
    
    
    
    
    
    
    //[1  2  3  4  5]
    // 1  2  3  4  5
    // 1  3  6  10 15       sum(2,3) = 6-1 = 5 -> p[b] -p[a-1]
    return 0;
}