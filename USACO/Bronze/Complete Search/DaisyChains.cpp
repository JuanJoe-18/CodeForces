#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n;
    cin >> n;a

    vector<int> a(n);
    vector<int> p(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    p[0] = a[0];
    for (int i = 1; i < n; i++) {
        p[i] = p[i-1] + a[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++) {
            int sum = (i == 0) ? p[j] : p[j] - p[i-1];
            int len = (j - i + 1);

            if (sum % len == 0) {
                int target = sum / len;

                bool found = false;
                for (int k = i; k <= j; k++) {
                    if (a[k] == target) {
                        found = true;
                        break;
                    }
                }
                if (found) ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}