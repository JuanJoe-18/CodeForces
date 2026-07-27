#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> grid(n);
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    string ans = "";
    ans += grid[0][0];

    vector<pair<int, int>> frontier;
    frontier.push_back({0, 0});

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    visited[0][0] = true;

    for (int step = 0; step < 2 * n - 2; ++step) {
        char best = 'z' + 1;
        vector<pair<int, int>> next_candidates;

        for (auto& p : frontier) {
            int r = p.first;
            int c = p.second;


            if (r + 1 < n) {
                best = min(best, grid[r + 1][c]);
                next_candidates.push_back({r + 1, c});
            }

            if (c + 1 < n) {
                best = min(best, grid[r][c + 1]);
                next_candidates.push_back({r, c + 1});
            }
        }
        vector<pair<int, int>> nextFrontier;
        for (auto& p : next_candidates) {
            int r = p.first;
            int c = p.second;
            if (grid[r][c] == best && !visited[r][c]) {
                visited[r][c] = true;
                nextFrontier.push_back({r, c});
            }
        }

        frontier = nextFrontier;
        ans += best;
    }

    cout << ans << "\n";

    return 0;
}

