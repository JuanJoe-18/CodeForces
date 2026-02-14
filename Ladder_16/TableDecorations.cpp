#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    ll r, g, b;
    cin >> r >> g >> b;
    vector<long long> a = {r, g, b};
    sort(a.begin(), a.end());

    if (a[2] >= 2 * (a[0] + a[1])) {
        cout << a[0] + a[1] << endl;
    } 
    else {
        cout << (a[0] + a[1] + a[2]) / 3 << endl;
    }

    return 0;
}