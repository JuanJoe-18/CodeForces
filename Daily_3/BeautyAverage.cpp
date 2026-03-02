#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i <n ; i++){
		cin >> a[i];
	}

	vector<ll> p(n+1);
	p[0] = a[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i-1] + a[i];
	}
	auto it = lower_bound(a.begin(), a.end(),k);
	int ans = 0;
	if (it != a.end()){
		int idx = it- a.begin();
		int l = idx - 1, r = idx + 1;
		while (l >= 0 && r < n) {
			ll len = (r-l+1);
			ll sum = p[r] - p[l+1];
			if (sum == k*len) {
				ans = fmax(ans,len);
				cout << ans << endl;
			}
			r++;
			l--;
		}
	}
	

	
	
	return 0;
	
	
}
