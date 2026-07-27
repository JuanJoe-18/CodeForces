#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF = 1e9+7;
int main() {
    int A, B; cin >> A >> B;

    vector<vector<int>> dp(A + 1, vector<int>(B + 1));
    for ( int a = 1; a <= A; a++ ) {
        for ( int b = 1; b <= B; b++ ) {
            if (a == b) dp[a][b] = 0;
            else {
                dp[a][b] = INF;
                for (int i = 1; i < a; i++) {
                    dp[a][b] = min(dp[a][b],1 + dp[i][b] + dp[a - i][b]);
                }
                for (int j = 1; j < b; j++) {
                    dp[a][b] = min(dp[a][b],1 + dp[a][j] + dp[a][b-j]);
                }
            }
        }
    }

    cout << dp[A][B] << endl;


    return 0;
}