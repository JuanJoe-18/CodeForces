#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string board[8];
bool col[8];
bool diag_secundaria[15];
bool diag_principal[15];
int ans = 0;

void solve(int f) {
    if (f == 8) {
        ans++;
        return;
    }

    for (int c = 0; c < 8; c++) {
        if (board[f][c] == '.' && !col[c] && !diag_secundaria[f + c] && !diag_principal[f - c + 7]) {
            col[c] = true;
            diag_secundaria[f + c] = true;
            diag_principal[f - c + 7] = true;
            solve(f + 1);
            col[c] = false;
            diag_secundaria[f + c] = false;
            diag_principal[f - c + 7] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 8; i++) {
        cin >> board[i];
    }

    solve(0);

    cout << ans << "\n";

    return 0;
}