#include<bits/stdc++.h>
#include <cstdlib>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n , m;
    cin >> n >> m;
    vector<vector<int>> a(n,vector<int>(m));
    int totalPot = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int p = 0; p < n; p++) {
        for (int c = 0; c < m; c++) {
            totalPot+=abs(a[p][c] - a[p+1][c]);
        }
    }
    
    cout << totalPot;
    return 0;
}