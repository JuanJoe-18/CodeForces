#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t; cin >> t;
    while (t--) {
        string ans = "";
        for (int i = 0; i<3;i++) {
            string val; cin >> val;
            ans.push_back(val[0]);
        }
        cout << ans << endl;
    }





    return 0;
}
