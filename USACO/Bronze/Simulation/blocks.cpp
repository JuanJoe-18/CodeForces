#include<bits/stdc++.h>
using namespace std;
int main() {
    freopen("blocks.in","r",stdin);
    freopen("blocks.out","w",stdout);
    
    vector<int> ans(200);
    int n; cin >> n;
    while (n--) {
        vector<int> v1(200);
        vector<int> v2(200);
        string a, b; cin >> a >> b;
        for (char c : a) {
            v1[c]++;
        }
        for (char c : b) {
            v2[c]++;
        }
        for (int i = 97; i<= 122; i++)  ans[i] += max(v1[i],v2[i]);
    }
    
    
    
    for (int i = 97; i<= 122; i++) cout << ans[i] << endl;

    return 0;
}