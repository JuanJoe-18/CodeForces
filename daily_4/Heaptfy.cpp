#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		int l =0, r = n-1;
		while (l < r) {
			if (a[l] >= a[r]) {
				swap(a[l],a[r]);
			}
			l++;
			r--;
		}
		bool stop = false;

		for (int i = 1; i<n; ++i){
			if (a[i] < a[i-1]) {
				stop = true;
			}
		}
		cout << (stop ? "no":"yes") << endl;
	}

	
	return 0;
}