#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map<int,int> f;      
        for (int i = 0; i < n; i++){
            int x; cin >> x;
            f[x]++;
        }
    
        int ans = 0;

        if ( f[-1] % 2 == 0 && f[-1] > 0){
            ans = f[0];
        } else if (f[-1] % 2 != 0){
            ans = 2 + f[0];
        } else{
            ans = f[0];
        }
    

        cout << ans << endl;
    }
    return 0;
}