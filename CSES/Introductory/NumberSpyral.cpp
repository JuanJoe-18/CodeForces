#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
 
int main(){
	
	ll t; cin>>t;
	
	while(t--){
		ll f,c;
		cin >> f >> c;
		if(f > c){
			if (f % 2 != 0) {
				cout << ((f-1)*(f-1)) + c << endl;
			} else cout << (f*f) - c + 1 << endl; 
		} else {
			if (c % 2 == 0) {
				cout << ((c-1)*(c-1)) + f << endl;
			} else cout << (c*c) - f + 1 << endl;
		}	
	}
	return 0;
}
