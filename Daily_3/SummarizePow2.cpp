#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n; cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> a(n);
    map<int,int> f;
    for (int i = 0; i<n; i++) {
        cin >> a[i];
        f[a[i]]++;
    }
    auto it = max_element(a.begin(), a.end());
    int mx = *it;
    vector<ll> pows;
    ll p = 2;
    while (p <= 2E9){
        pows.push_back(p);
        p = p << 1;
    }
    int finds = 0;
    bool find;
    for(int x: a){
        find = false;
        for( ll p : pows){
            ll y = p-x;
            if(f.count(y)){
                if(x!=y){
                    find = true;
                    break;
                }else if(y == x && f[x] >= 2){
                    find = true;
                    break;
                }
            }
        }
        if (find) finds++;
    }

    cout << n-finds << endl;
    





    return 0;
}