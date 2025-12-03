#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> d_sizes(n);
    multiset<int> a_sizes;

    for (int i = 0; i < n; i++) cin >> d_sizes[i];
    for (int i = 0; i < m; i++) {
        int x; cin >> x;
        a_sizes.insert(x);
    }
    sort(d_sizes.begin(),d_sizes.end());

    int satisfied_aplicants = 0;
    for (int i = 0; i < n; i++) {
        auto it = a_sizes.lower_bound(d_sizes[i] - k);

        if (it != a_sizes.end() && *it <= d_sizes[i] + k) {
            satisfied_aplicants++;
            a_sizes.erase(it); 
        }
    }

    cout << satisfied_aplicants << endl;
    return 0;
}
