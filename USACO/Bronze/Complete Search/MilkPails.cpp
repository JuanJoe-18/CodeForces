#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m; 
    cin >> x >> y >> m;

    int ans = 0;
    for (int i = 0; i * x <= m; i++) {
        for (int j = 0; i * x + j * y <= m; j++) {
            ans = max(ans, i * x + j * y);
        }
    }

    cout << ans << '\n';
    return 0;
}