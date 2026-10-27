#include <bits/stdc++.h>
using namespace std;


int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    cpp_int s = 0;

    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        s+= cpp_int(1) << a;
    }

    if (n == 1) {
        cout << "N\n";
        return 0;
    }
    int cnt = 0;
    unsigned int lst = msb(s);

    for (unsigned int i = 0; i <= lst; i++) {
        if (bit_test(s,i)) ++cnt;
    }


    cout << (cnt <= 2 ? "Y" : "N") << "\n";


    return 0;
}
