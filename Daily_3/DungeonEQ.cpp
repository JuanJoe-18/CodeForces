#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        map<int,int> f;
        
        for (int i = 0; i < n; i++){
            cin >> a[i];
            f[a[i]]++;
        }
        int ans = 0;
        for (auto v : f) {
            if(v.second < v.first){
                ans+=v.second;
            }else if (v.second > v.first) {
                ans+= v.second-v.first;

            }
        }
        cout << ans << endl;
    }
    return 0;
}