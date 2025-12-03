#include<bits/stdc++.h>
using namespace std;
const int INF = INT_MAX;

vector<int> coins;
vector<bool> ready;
vector<int> values;

int solve(int x){
	if (x < 0) return INF;
	if(x == 0) return 0;
	if(ready[x]) return values[x];
	int best = INF;
	for (auto c : coins){
    int res = solve(x - c);
    if (res != INF) {             
        best = min(best, res + 1);
        }
}
	values[x] = best;
	ready[x] = true;
	return best;
}


int main(){
	int n, x;
	cin >> n >> x;
	int N = x+1;
	coins.resize(n);
	values.assign(N,0);
	ready.assign(N,false);
	for(int i = 0; i < n; i++){
		cin >> coins[i];
	}
	int ans = solve(x);
    if (ans == INF) cout << -1 << "\n";
    else cout << ans << "\n";
	
	return 0;
}
