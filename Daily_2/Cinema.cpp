#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c25 = 0, c50 = 0, x;
    cin >> n;
    while (n--) {
        cin >> x;
        if (x == 25) c25++;
        else if (x == 50) {
            if (!c25) { cout << "NO" << endl; return; }
            c25--; c50++;
        } else {
            if (c50 && c25) c50--, c25--;
            else if (c25 >= 3) c25 -= 3;
            else { cout << "NO" << endl; return; }
        }
    }
    cout << "YES" << endl;
}

int main() {
    solve();
    return 0;
}
