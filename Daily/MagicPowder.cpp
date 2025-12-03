#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

bool check(int x, int k) {
    int need = 0;
    for (int i = 0; i < n; i++) {
        need += max(0, x * a[i] - b[i]);
    }
    return need <= k;
}

int main() {
    int k;
    cin >> n >> k;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int x = 0;
    while (check(x, k)) x++;

    int ans = x - 1;
    cout << ans << endl;

    return 0;
}
