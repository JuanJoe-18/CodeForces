#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> pos(n+1);
    for (size_t i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int ans = 1;

    for (size_t i = 1; i < n ; i++) {
        if (pos[i + 1] < pos [i]){
            ans++;
        }
        
    }

    cout << ans << endl;


    
    return 0;
}