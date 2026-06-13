#include <bits/stdc++.h>
using namespace std;
int main () {
    int t; cin >> t;
    while (t--) {
        int n, k;
        cin >> n >>k;
        string s; cin >> s;
        int mxc = 0;
        
        
    int c = 0;
    for (int i = 0; i < n; ++i) { 
        if (s[i] == '1') {
            c++;
            mxc = max(mxc, c);
        } else {
        c = 0; 
    }
}

        
        if (mxc >= k) {
            cout << "NO" << endl;
            continue;
        }
        vector<int> ans(n,0);
        int j0 = 0;
        int j1 = 1;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                ans[i] = n-j0;
                j0++;
            } else {
                ans[i] = j1;
                j1++;
            }
        }
        cout << "yes" << endl;
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}