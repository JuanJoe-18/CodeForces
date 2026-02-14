#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

int main() {
    int n, m;
    cin >> n;
    vector<pair<ll, char>> ab;
    for (int i = 0; i < n; ++i) {
        ll val;
        cin >> val;
        ab.push_back({val, 'a'});
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        ll val;
        cin >> val;
        ab.emplace_back(val, 'b');
    }

    sort(ab.begin(), ab.end());

    ll ansA = 3LL * n, ansB = 3LL * m;
    ll diff = ansA - ansB;

    int a2 = 0, a3 = n, b2 = 0, b3 = m;

    for (auto p : ab) {
        if (p.second == 'a') {
            a2++;
            a3--;
        } else {
            b2++;
            b3--;
        }
        ll a = 2LL * a2 + 3LL * a3;
        ll b = 2LL * b2 + 3LL * b3;

        if (a - b > diff) {
            diff = a - b;
            ansA = a;
            ansB = b;
        } else if (a - b == diff && a > ansA) {
            ansA = a;
            ansB = b;
        }
    }

    cout <<ansA<<":"<<ansB << endl;
    return 0;
}