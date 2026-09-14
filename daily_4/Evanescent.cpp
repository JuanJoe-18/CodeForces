#include <bits/stdc++.h>
using namespace std;

string f(string s) {
    auto nuevo_final = std::unique(s.begin(), s.end());
    s.erase(nuevo_final, s.end());
    return s;
}

string solve(string s) {
    int n = s.size();
    if (n <= 1) return "";

    int mxl = 1;
    int cl = 1;
    int max_end = 0;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            cl++;
        } else {
            cl = 1;
        }
        if (cl > mxl) {
            mxl = cl;
            max_end = i;
        }
    }

    int max_start = max_end - mxl + 1;
    s.erase(max_start, mxl);
    return s;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            int n; cin >> n;
            string s; cin >> s;
            string a = solve(s);
            cout << f(a).size() << "\n";
        }
    }
    return 0;
}
