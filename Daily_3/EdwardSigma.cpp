#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n,k; cin >> n >> k;
	vector<int> a(n);
	for(int i = 0; i <n ; i++){
		cin >> a[i];
		a[i] -= k;
	}
	
	int l = 0, r = 0;
	long long ans = 0, sum = 0;
	while (l < n) {
    	while (r < n && sum + a[r] < 0) {
        	sum += a[r];
        	r++;
   	 	}
		if (sum == 0){
			ans = fmax(ans, r - l + 1);
		}
    	sum -= a[l];
    	l++;

	}
	cout << ans << endl;
	return 0;
}


/*
10 4
3 4 5 6 7 8 10 10 11 11

10 6
3 4 5 6 7 8 10 10 11 11

10 3
3 4 5 6 7 8 10 10 11 11

10 10
3 4 5 6 7 8 10 10 11 11



*/