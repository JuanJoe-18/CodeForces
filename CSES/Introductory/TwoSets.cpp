#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> sum (n);
	sum[0] = a[0]; 
	for(int i = 1; i<=n ; i++) a.push_back(i);

	for(int i = 1; i<n ; i++) sum[i] = sum[i-1] + a[i];
	for(int i = 0; i<n ; i++) cout << a[i] << endl;
	return 0;
}
