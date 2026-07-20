#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main () {
    int n, x; cin >> n >> x;
    multimap<int,int> a;
    for (int i = 0; i < n; i++) {
        int v; cin >> v;
        a.insert({v, i + 1});
    }

    auto l = a.begin();
    auto r = prev(a.end());
    bool found = false;

    while (l != r) {
        int sum = l->first + r->first;
        if (sum == x) {
            cout << l->second << " " << r->second << "\n";
            found = true;
            break;
        } else if (sum < x) {
            l++;
        } else {
            r--;
        }
    }

    if (!found) cout << "IMPOSSIBLE\n";
    return 0;
}