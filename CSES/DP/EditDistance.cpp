#include <bits/stdc++.h>

using namespace std;

int editDistance(const string& a, const string& b) {
    int n = a.size();
    int m = b.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1));

    // Casos base
    for (int i = 0; i <= n; i++) {
        dp[i][0] = i; // Eliminar i caracteres
    }

    for (int j = 0; j <= m; j++) {
        dp[0][j] = j; // Insertar j caracteres
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                int eliminar = dp[i - 1][j];
                int insertar = dp[i][j - 1];
                int reemplazar = dp[i - 1][j - 1];

                dp[i][j] = 1 + min({
                    eliminar,
                    insertar,
                    reemplazar
                });
            }
        }
    }

    return dp[n][m];
}

int main() {
    string a, b;

    cin >> a >> b;


    cout << editDistance(a, b) << '\n';



    return 0;
}