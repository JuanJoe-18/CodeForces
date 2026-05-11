#include<bits/stdc++.h>
using namespace std;
const int MXN = 200005;
vector<int> adj[MXN];
int childs[MXN];

void dfs(int c, int p) {
    childs[c] = 1;
    for (auto s : adj[c]) {
        if (s != p) {
            dfs(s, c);
            //process node childs[c] += childs[s];
        }
    }
}

int main() {
    //int t; cin >> t;
    int n; cin >>n;
    //while (n--){
   // }
    while (n--){
        // nodos a y b y el arbol esta arraigado en 1
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }
    dfs(1,0);


    /*
    5
    1 2
    2 3
    1 5
    5 4
     */

    








    return 0;
}