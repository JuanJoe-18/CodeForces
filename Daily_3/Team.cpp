#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;  cin >> n;
    int ans = 0;
    while (n--) {
        int a,b,c; cin >>a >>b >>c;
        int s = a+b+c;
        if (s >= 2) ans++;
    }

    cout << ans << endl;



    return 0;
}
