#include<bits/stdc++.h>
#define fastio
typedef long long ll;
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        int c = 0;
        while ((a[0] != a[1]) && (a[0] != a[2]) && (a[1] != a[2])){
            sort(a.begin(), a.end());
            if (a[2] > a[1]) {
                a[2]--; a[0]++;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}