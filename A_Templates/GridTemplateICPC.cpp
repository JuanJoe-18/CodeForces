#include <bits/stdc++.h>
using namespace std;

using pii = pair<int, int>;

int nGrid, mGrid;
vector<string> grid;
vector<vector<int>> visGrid;

// Up, down, left, right.
const int dr4[] = {-1, 1, 0, 0};
const int dc4[] = {0, 0, -1, 1};

bool in_grid(int r, int c) {
    return 0 <= r && r < nGrid && 0 <= c && c < mGrid;
}

bool is_open(int r, int c, char blocked = '#') {
    return in_grid(r, c) && grid[r][c] != blocked;
}

int dfs_open_component(int r, int c, char blocked = '#') {
    if (!is_open(r, c, blocked) || visGrid[r][c]) return 0;

    visGrid[r][c] = 1;
    int size = 1;

    for (int dir = 0; dir < 4; ++dir) {
        int nr = r + dr4[dir];
        int nc = c + dc4[dir];
        size += dfs_open_component(nr, nc, blocked);
    }
    return size;
}

int count_open_components(char blocked = '#') {
    visGrid.assign(nGrid, vector<int>(mGrid, 0));
    int components = 0;

    for (int r = 0; r < nGrid; ++r) {
        for (int c = 0; c < mGrid; ++c) {
            if (is_open(r, c, blocked) && !visGrid[r][c]) {
                ++components;
                dfs_open_component(r, c, blocked);
            }
        }
    }
    return components;
}

int dfs_same_color_component(int r, int c, char color) {
    if (!in_grid(r, c) || visGrid[r][c] || grid[r][c] != color) return 0;

    visGrid[r][c] = 1;
    int size = 1;

    for (int dir = 0; dir < 4; ++dir) {
        int nr = r + dr4[dir];
        int nc = c + dc4[dir];
        size += dfs_same_color_component(nr, nc, color);
    }
    return size;
}

vector<vector<int>> bfs_distances(int sr, int sc, char blocked = '#') {
    vector<vector<int>> dist(nGrid, vector<int>(mGrid, -1));
    if (!is_open(sr, sc, blocked)) return dist;

    queue<pii> q;
    q.push({sr, sc});
    dist[sr][sc] = 0;

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        for (int dir = 0; dir < 4; ++dir) {
            int nr = r + dr4[dir];
            int nc = c + dc4[dir];

            if (is_open(nr, nc, blocked) && dist[nr][nc] == -1) {
                dist[nr][nc] = dist[r][c] + 1;
                q.push({nr, nc});
            }
        }
    }
    return dist;
}

bool dfs_same_color_cycle(int r, int c, int pr, int pc, char blocked = '#') {
    visGrid[r][c] = 1;

    for (int dir = 0; dir < 4; ++dir) {
        int nr = r + dr4[dir];
        int nc = c + dc4[dir];

        if (!in_grid(nr, nc) || grid[nr][nc] == blocked || grid[nr][nc] != grid[r][c]) continue;

        if (!visGrid[nr][nc]) {
            if (dfs_same_color_cycle(nr, nc, r, c, blocked)) return true;
        } else if (nr != pr || nc != pc) {
            return true;
        }
    }
    return false;
}

bool has_same_color_cycle(char blocked = '#') {
    visGrid.assign(nGrid, vector<int>(mGrid, 0));

    for (int r = 0; r < nGrid; ++r) {
        for (int c = 0; c < mGrid; ++c) {
            if (grid[r][c] != blocked && !visGrid[r][c] &&
                dfs_same_color_cycle(r, c, -1, -1, blocked)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n, m; cin >> n >> m;
    // nGrid = n; mGrid = m;
    // grid.resize(nGrid);
    // for (string& row : grid) cin >> row;

    return 0;
}
