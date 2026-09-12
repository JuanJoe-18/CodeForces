#include <bits/stdc++.h>
using namespace std;

typedef uint64_t ull;

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


int R, C, snake_len;
int target_r, target_c;


struct State {
    int r, c;
    ull body;

    ull hash() const {
        return ((ull) r << 40) | ((ull)c << 35) | body;
    }
    bool collision(int nr, int nc) const {
        if (nr < 0 || nr >= R || nc < 0 || nc >= C) return true;

        int curr_r = r, curr_c = c;
        ull temp_body = body;
        for (int i = 0; i < snake_len - 1; i++) {
            if (nr == curr_r && nc == curr_c) return true;
            int dir = temp_body & 3;
            curr_r += dx[dir];
            curr_c += dy[dir];
            temp_body >>= 2;
        }
        return false;
    }
    State move(int d, int nr, int nc) const {
        int inv_d = d ^ 1;
        ull mask = (1ULL << (2 * (snake_len - 1))) - 1;
        ull next_body = ((body << 2) & mask) | inv_d;
        return {nr, nc, next_body};
    }
};

void solve() {
    cin >> R >> C;
    vector<string> grid(R);
    vector<pair<int, int>> pos(16);
    snake_len = 0;

    for (int i = 0; i < R; i++) {
        cin >> grid[i];
        for (int j = 0; j < C; j++) {
            if (grid[i][j] == 'A') {
                target_r = i; target_c = j;
            } else if (grid[i][j] != '.') {
                int val = (grid[i][j] >= 'a') ? (grid[i][j] - 'a' + 10) : (grid[i][j] - '0');
                pos[val] = {i, j};
                snake_len = max(snake_len, val + 1);
            }
        }
    }
    ull initial_body = 0;
    for (int i = 0; i < snake_len - 1; i++) {
        for (int d = 0; d < 4; d++) {
            if (pos[i].first + dx[d] == pos[i+1].first && pos[i].second + dy[d] == pos[i+1].second) {
                initial_body |= ((ull) d << (2 * i));
                break;
            }
        }
    }
    State start = {pos[0].first, pos[0].second, initial_body};
    unordered_set<ull> vis;
    queue<State> q;

    q.push(start);
    vis.insert(start.hash());

    while (!q.empty()) {
        State curr = q.front(); q.pop();

        if (curr.r == target_r && curr.c == target_c) {
            cout << "1\n";
            return;
        }

        for (int d = 0; d < 4; d++) {
            int nr = curr.r + dx[d];
            int nc = curr.c + dy[d];

            if (curr.collision(nr, nc)) continue;

            State next_state = curr.move(d, nr, nc);
            ull h = next_state.hash();

            if (vis.find(h) == vis.end()) {
                vis.insert(h);
                q.push(next_state);
            }
        }
    }
    cout << "0\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}