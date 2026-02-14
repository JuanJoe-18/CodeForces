#include <bits/stdc++.h>
using namespace  std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << (n/4) +1 << endl;
        } else cout << 0 << endl;
    }

    return 0;
}