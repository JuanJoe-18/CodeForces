#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {

    int n;
    cin >> n;

    vector<int> v(n + 1);

    ll W = 0;

    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        W += v[i];
    }

    vector<bool> possible(W + 1, false);

    possible[0] = true;

    for (int k = 1; k <= n; k++) {
        for (int x = W; x >= 0; x--) {
            if (possible[x] && x + v[k] <= W)
                possible[x + v[k]] = true;
        }
    }
    int k = 0;
    for (int x = 1; x <= W; x++) {
        if (possible[x]) k++;
    }

    cout << k << endl;

    for (int x = 1; x <= W; x++) {
        if (possible[x])
            cout << x << " ";
    }

    cout << '\n';
}