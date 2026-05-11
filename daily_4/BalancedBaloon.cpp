#include<bits/stdc++.h>
using namespace std;
int main () {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(),a.end());
    int l = 0, r = 0;
    long long ans = 0;
    while (l < n) {
        while (r < n && (a[r] -a[l] <= 5 )) {
            r++;
            //printf("l:%d  r:%d \n",l,r);
        }
        ans = fmax(ans, r - l); 
        l++;
    }   


    cout << ans << endl;
    return 0;
}