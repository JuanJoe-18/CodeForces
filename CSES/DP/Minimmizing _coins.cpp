#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9+7;
int main() {
	int n, k; cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i<n; i++) cin >> a[i];
	
	vector<int> value(k + 1, INF);
	value[0] = 0;
	for (int x = 1; x <= k; x++) {
		for (auto c : a) {
			if (x - c >= 0) {
				value[x] = min(value[x], value[x-c] + 1);
			}
		}
	}
	
	cout << ((value[k]!=INF)? value[k] : -1);
	

	return 0;	
}
