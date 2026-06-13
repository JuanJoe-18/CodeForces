#include <bits/stdc++.h>
using namespace std;

int f(int x, int y) {
    return (x > y) - (y > x);
}

int main () {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c, d; 
        cin >> a >> b >> c >> d;
        int ans = 0;
        
        
        if (f(a, c) + f(b, d) > 0) {
            ans += 2;
        }
        
        if (f(a, d) + f(b, c) > 0) {
            ans += 2;
        }
        
        cout << ans << "\n";
    }

    return 0;
}