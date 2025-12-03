#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s[s.size()-1] == 's' && s[s.size()-2] =='u'){
			s.erase(s.size()-2,2);
		}
		cout << s << "i" << endl;	
	}
	return 0;
}
