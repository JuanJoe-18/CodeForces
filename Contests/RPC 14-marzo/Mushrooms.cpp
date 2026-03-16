#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {
    long long r, c;
    cin >> r >> c;
    if (c == 1) cout << 1 << endl;
    else if (r == 1) cout << (c + 2) / 3 << endl;
    else if (r == 2) cout << (c + 1) / 2 << endl;
    else cout << -1 << endl;

    return 0;
}