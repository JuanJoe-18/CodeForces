#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Estado {
    int r, c; 
    int type; 
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    
    vector<vector<vector<bool>>> visitado(n, vector<vector<bool>>(n, vector<bool>(2, false)));

    
    queue<Estado> q;

    
    visitado[0][0][0] = true;
    q.push({0, 0, 0});

    
    visitado[0][0][1] = true;
    q.push({0, 0, 1});

    
    while (!q.empty()) {
        Estado current = q.front();
        q.pop();

        int move_dx, move_dy;
        
        if (current.type == 0) {
            move_dx = a;
            move_dy = b;
        } else {
            move_dx = c;
            move_dy = d;
        }

        int siguiente_tipo_mov = 1 - current.type;

        int dr[] = {move_dx, move_dx, -move_dx, -move_dx, move_dy, move_dy, -move_dy, -move_dy};
        int dc[] = {move_dy, -move_dy, move_dy, -move_dy, move_dx, -move_dx, move_dx, -move_dx};

        for (int i = 0; i < 8; ++i) {
            int next_r = current.r + dr[i];
            int next_c = current.c + dc[i];

            if (next_r >= 0 && next_r < n && next_c >= 0 && next_c < n) {
                if (!visitado[next_r][next_c][siguiente_tipo_mov]) {
                    visitado[next_r][next_c][siguiente_tipo_mov] = true;
                    q.push({next_r, next_c, siguiente_tipo_mov});
                }
            }
        }
    }
    int tiles_alcanzables = 0;
    for (int r = 0; r < n; ++r) {
        for (int c = 0; c < n; ++c) {
            if (visitado[r][c][0] || visitado[r][c][1]) {
                tiles_alcanzables++;
            }
        }
    }

    cout << tiles_alcanzables << endl;

    return 0;
}
