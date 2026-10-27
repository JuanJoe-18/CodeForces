#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, m; cin >> n >> m;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) cin >> grid[i];
    vector<vector<int>> R(n,vector<int>(m,1));
    for (int i = 0;  i < n; i++) {
        for (int j = m - 2; j >= 0; j--) {
            if (grid[i][j] == grid[i][j+1] ) R[i][j] = 1 + R[i][j+1];
            else R[i][j] = 1;
        }
    }
    vector<vector<int>> dp (n,vector<int>(m,1));
    int mk = 1;
    for ( int j = 0 ; j  < m; j++) {
        for (int i = 0; i < n; i++) {
            while ( i + mk < n) {
                int tar = mk + 1; bool ys = true;
                for (int r = i; r < i + tar; r++) {
                    if (R[r][j] < tar) {
                        ys = false;
                        break;
                    }
                    if (ys) mk++;
                    else break;
                }
            }

        }
    }
    cout << mk * mk << "\n";
    return 0;
}