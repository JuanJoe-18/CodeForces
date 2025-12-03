#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        vector<int> cnt(10, 0);
        for (char c : s) cnt[c - '0']++;

        string res = "";
        for (int i = 0; i < 10; i++) {
            int d = 9 - i;
            if (cnt[d] == 0) {
                res = "";
                break;
            }
            res += char('0' + d);
            cnt[d]--;
        }
        for (int d = 0; d < 10; d++) {
            while (cnt[d]--) res += char('0' + d);
        }
        cout << res << endl;
    }
    return 0;
}
