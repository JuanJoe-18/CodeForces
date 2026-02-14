#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<char> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i] >> a[i];
        }
        int ans = 1;
        for (int i = 0; i < n; i++) {
            int lies = 0;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (c[i] == 'G') {
                        if (c[j] == 'L') {
                            if (a[j] < a[i]) {
                                lies++;
                            }
                        }
                    } else {
                        if (c[j] == 'G') {
                            if (a[j] > a[i]) {
                                lies++;
                            }
                        }
                    }
                }
            }
            ans = min(ans,lies);
        }

        cout << ans << endl;
    }








    return 0;
}
/*
8
3
G 10
G 10
L 20
2
G 10
L 5
2
G 10
L 10
3
G 10
G 20
L 5
4
G 5
G 5
L 3
L 3
3
G 10
L 10
L 5
2
G 1000000000
L 0
5
G 10
L 10
G 12
L 12
G 11*/
