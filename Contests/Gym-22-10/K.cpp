#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin() , v.end()
#define pb push_back
typedef long long ll;
typedef long double ld;


const int INF = 1e9;
bool is_vowel(char c) {
    return c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y';
}


int main () {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> dp = {0,INF,INF};

    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        int lim = min((int)s.size(),3);
        vector<int> next = {INF,INF,INF};
        for (int c = 0; c < 3; c++) {
            if (dp[c] == INF) continue;
            int curr = c;
            for (int len = 1; len <= lim; len++) {
                curr = is_vowel(s[len - 1]) ? 0:curr + 1;
                if (curr > 2) break;
                next[curr] = min(next[curr], dp[c] + len);
            }
        }
        dp = next;
    }

    int ans = min({dp[0], dp[1], dp[2]});
    if (ans >= INF) cout << "*\n";
    else cout << ans << "\n";


    return 0;
}