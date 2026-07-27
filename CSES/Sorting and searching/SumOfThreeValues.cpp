#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
typedef long long ll;

pair<int,int> sotv(int x, int forbidden) {
    auto l = v.begin();
    auto r = prev(v.end());
    int L = -1, R = -1;
    while (l != r) {
        if (l->second == forbidden) {
            l++; continue;
        }
        if (r->second == forbidden) {
            r--; continue;
        }
        int sum = l->first + r->first;
        if (sum == x) {
            L = l->second;
            R = r->second;
            break;
        } else if (sum < x) {
            l++;
        } else {
            r--;
        }
    }
    pair<int,int> ret = {L,R};
    return ret;
}

int main () {
    int n, x; cin >> n >> x;
    vector<int> a( n + 1);
    for (int i = 1; i <= n; i++) {
        int val; cin >> val;
        a[i] = val;
        v.emplace_back(val,i);
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++) {
        auto res = sotv(x-a[i],i);
        if (res.first != -1 && res.second !=-1 && (a[res.first] + a[res.second] + a[i]) == x) {
            cout << i << " " << res.first << " " << res.second << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}