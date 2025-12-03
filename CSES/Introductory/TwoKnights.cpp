#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll maxNoAt(ll n){
	if(n==1) return  1;
	else if (n==2) return 4;
	else if(n>=3) return  ceil((pow(n,2)/2)); 
	return 0;
}

	

int main(){
	ll n;
	cin >> n;
	for( int k = 1; k <= n; k++){
		if(k>1){
			//ll maxAt = (tgamma(pow(k,2) + 1) / (2*(tgamma((pow(k,2)-2)+1))));
		    ll w = maxNoAt(k);
		    //ll maxNoAtt = (tgamma((w+1) / (2*(tgamma(w-2)+1))));
		    cout << w << endl;
		} else cout << 0 << endl;
			
			
	}
	return 0;	
}
