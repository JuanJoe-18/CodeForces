#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> g;
vector<vector<char>> steps(1005, vector<char>(1005, 0));

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char dir_chars[] = {'U', 'R', 'D', 'L'};

bool isValid(int r, int c) {
    return (r >= 0 && r < n && c >= 0 && c < m && g[r][c] != '#');
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    if (!(cin >> n >> m)) return 0;
    
    g.resize(n);
    int sr = -1, sc = -1, dr = -1, dc = -1;

    for (int i = 0; i < n; i++) {
        cin >> g[i];
        for (int j = 0; j < m; j++) {
            if (g[i][j] == 'A') { sr = i; sc = j; }
            else if (g[i][j] == 'B') { dr = i; dc = j; }
        }
    }

    queue<pair<int, int>> q;
    q.push({sr, sc});
    g[sr][sc] = '#'; 
    bool found = false;

    //BFS mod
    while (!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if (r == dr && c == dc) {
            found = true;
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = r + dx[i];
            int ny = c + dy[i];

            if (isValid(nx, ny)) {
                steps[nx][ny] = dir_chars[i]; 
                g[nx][ny] = '#';              
                q.push({nx, ny});
            }
        }
    }

    if (found) {
        cout << "YES\n";
        string ans = "";
        int r = dr, c = dc;
        
        while (r != sr || c != sc) {
            char ch = steps[r][c];
            ans += ch;
            
            if (ch == 'U') r++;
            else if (ch == 'D') r--;
            else if (ch == 'L') c++;
            else if (ch == 'R') c--;
        }
        
        reverse(ans.begin(), ans.end());
        cout << ans.size() << "\n" << ans << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}