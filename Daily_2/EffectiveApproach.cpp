#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    map<int, int> position;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        position[a[i]] = i + 1;
    }

    cin >> m;
    vector<int> q(m);
    ll ansvas = 0, anspey = 0; 
    for (int i = 0; i < m; ++i) {
        cin >> q[i];
        int pos = position[q[i]];
        ansvas += pos;
        anspey += (n - pos + 1);
    }

    cout << ansvas << " " << anspey << endl;
    return 0;
}
