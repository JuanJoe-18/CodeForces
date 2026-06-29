#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int N, H, W;
    cin >> N >> H >> W;

    for (int i = 0; i < N; ++i) {
        char t1, t2;
        cin >> t1 >> t2;
        char res1, res2;
        if (t1 == 'Y' || W == 0) {
            res1 = 'Y';
            H--;
            W++;
        } else {
            res1 = 'N';
        }

        if (t2 == 'Y' || H == 0) {
            res2 = 'Y';
            W--;
            H++;
        } else {
            res2 = 'N';
        }
        cout << res1 << " " << res2 << "\n";
    }
    

    return 0;
}