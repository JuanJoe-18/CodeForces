#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t; 
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int ac = 0; int bc = 0;
        for (int i = 0; i < n; i++) {
        if (a[i] != b[i] && a[i] + b[i] >= -1 && a[i] + b[i] <= 1) {
                if (a[i] > b[i]) ac+= a[i]; else bc+= b[i];
            }
        } 

        for (int i = 0; i < n; i++) {
            if (a[i] == 1 && 1 == b[i]) {
                if (ac < bc) ac++; else bc++;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == -1 && -1 == b[i]) {
                if (ac > bc) ac--; else bc--;
            }
        }// podria hacer menos pasadas pero es un 1400
        cout << min(ac,bc) << endl;
    }
    return 0;
}