#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    while (n--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a == b &&  c == d && b == c) cout << "yes" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

