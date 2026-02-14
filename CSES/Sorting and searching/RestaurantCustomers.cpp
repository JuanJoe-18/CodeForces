#include<bits/stdc++.h>
using namespace std;
int main (){
    int n; cin >> n;
    map<int,int> d; 
    while (n--) {
        int l , r;
        cin >> l >> r;
        d[l]++;
        d[r+1]--;
    }
    int ans = 0;
    int c = 0;
    for (auto p : d) {
        c += p.second;
        ans = max(ans, c);
    }
    for(auto p: d){
        printf(" %d, %d\n", p.first, p.second);
    }

    cout << ans << endl;











    return 0;
}