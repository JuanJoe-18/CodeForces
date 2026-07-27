#include <bits/stdc++.h>
using namespace std;

int gana(int bessie, int fj) {
    if (bessie == 0 && fj == 2) return 1;
    if (bessie == 1 && fj == 0) return 1; 
    if (bessie == 2 && fj == 1) return 1; 
    return 0;
}

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n; cin >> n;
    vector<char> a(n + 1);
    for (int i = 1; i <= n; i++) {
        char g; cin >> g;
        if (g == 'H') a[i] = 0;
        else if (g == 'P') a[i] = 1;
        else  a[i] = 2;
    }

    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
    for (int partida = 1; partida <= n; partida++) {
        int fj = a[partida]; 
        for (int cambio = 0; cambio < 2; cambio++) {
            for (int gesto = 0; gesto < 3; gesto++) {
            
                int vic = gana(gesto, fj); 

                if (cambio == 0) {
                    dp[partida][cambio][gesto] = dp[partida - 1][cambio][gesto] + vic;
                } else {
                    int max_otros = max(dp[partida - 1][0][(gesto + 1) % 3], dp[partida - 1][0][(gesto + 2) % 3]);
                
                    dp[partida][cambio][gesto] = max(dp[partida - 1][cambio][gesto], max_otros) + vic;
                }
            }
        } 
    }
    cout << max(max({dp[n][0][0], dp[n][0][1], dp[n][0][2]}), max({dp[n][1][0], dp[n][1][1], dp[n][1][2]})) << "\n";
    return 0;
}