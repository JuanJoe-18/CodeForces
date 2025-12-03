#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ,count = 0;
	cin >> n;
	for(int i=0;i<n;i++){
		string val;
		cin >> val;
		for(int j=0;j<n;j++){
			if(val[j] == '#') count++;
		}
	}
	
	if(count % 5 == 0) {
		cout << "YES" << endl;
	}else cout << "NO" << endl;

	return 0;
}
