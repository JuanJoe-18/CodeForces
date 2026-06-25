#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


vector<int> a;

ll apples(ll i, ll s1, ll s2) {
    if (i == a.size()) return abs(s1-s2);
    return min(apples(i+1,s1+a[i],s2) ,apples(i+1,s1,s2+a[i]));
}



int main() {
    int n;
    cin >> n;
    while (n--){
        int x; cin >> x;
        a.push_back(x);
    }
    ll ans = apples(0,0,0);
    cout << ans << endl;

    
    
    


    return 0;
}