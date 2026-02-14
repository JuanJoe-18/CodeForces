#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int> a(n); 
    for(int i = 0; i<n;i++) cin >> a[i];
    int ans = 0;
    int c = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] <= 2*a[i-1]){ 
            c++;
        }else{
            c=0;
        }
        ans = max(ans,c);
    }
    cout << ans + 1 << endl;
    return 0;    
}
