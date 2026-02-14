#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    set<int> u;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 0;
    ll c = 0;
    while (l < n) {
        while (r < n && !u.count(a[r])) {
            u.insert(a[r]);
            r++;
        }
        c += (r-l);
        u.erase(a[l]);
        l++;
    }

    cout << c << endl;
    return 0;
}