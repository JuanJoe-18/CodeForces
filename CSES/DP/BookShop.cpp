typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n >> x;
    vector<int> prices(n);
    vector<int> pages(n);
    for(int i = 0; i < n; i++){
        int a; cin >> a; prices[i] = a;
    }

    for(int i = 0; i < n; i++){
        int a; cin >> a; pages[i] = a;
    }


    vector<int> dp(x + 1, 0);
    for (int i = 0; i < n; i++) { 
        int p = prices[i]; int pag = pages[i];
        
        for (int j = x; j >= p; j--) {
            dp[j] = max(dp[j], dp[j - p] + pag);
        }
    }
    cout << dp[x] << "\n";

    return 0;
}