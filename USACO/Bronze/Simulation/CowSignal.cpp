#include <algorithm>
#include <bits/stdc++.h>
#include <cstddef>
#include <string>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m,n,k;
    cin >> m >> n >> k;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        for (int i = 0; i < k; i++) {
            string enlarged;
            for (char c : s) {
            enlarged.append(k, c);
            }
            cout << enlarged << endl;
        } 
    }

    return 0;
}
