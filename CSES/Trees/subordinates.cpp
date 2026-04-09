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
            childs[c] += childs[s];
        }
    }
}


int main(){

   int n; cin >> n;
   vector<int> a(n);
   for(int i = 2; i <= n; i++) {
       int boss; cin >> boss;
       adj[boss].push_back(i);
   }
    dfs(1,0);

   for (int i = 1; i <= n; ++i) {
       cout <<  childs[i]-1<< " ";
   }
    cout << endl;

/*
5
1 1 2 3
*/


    return 0;
}



