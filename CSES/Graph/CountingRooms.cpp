#include <bits/stdc++.h>
using namespace std;
int n,m;

vector<string> g(1005);
//bool vis[1005][1005];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};


bool isValid(int r, int c) {
	return (r >= 0 && r < n && c >= 0 && c < m && g[r][c] == '.');
}

void dfsG(int r, int c) {
	g[r][c] = '#';
	for (size_t i = 0; i < 4; i++) {
		int nx = r + dx[i];
		int ny = c + dy[i];
		if (isValid(nx,ny)) {
			dfsG(nx,ny);
		}
	}
}

int main(){
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> g[i];
	}
	int ans = 0;
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < m; j++) {
			if (g[i][j] == '.'){
				dfsG(i,j);
				ans++;
			}
		}		
	}
	cout << ans << endl;
    return 0;
}

/*
||Tambien como plantilla base esta el armado del grafo grid||:
int n, m;
int grid[1005][1005];
bool vis[1005][1005];

// Direction vectors for moving Up, Down, Left, Right
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

bool isValid(int r, int c) {
	return (r >= 0 && r < n && c >= 0 && c < m && !vis[r][c]);
}

void dfs_grid(int r, int c) {
	vis[r][c] = true;

	for (int i = 0; i < 4; ++i) {
		int nx = r + dx[i];
		int ny = c + dy[i];
		if (isValid(nx, ny)) {
			dfs_grid(nx, ny);
		}
	}
}
 */