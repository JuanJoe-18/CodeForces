#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;

ll modpow(ll a, ll b, ll m=MOD){
    ll res=1; a%=m;
    while(b>0){
        if(b&1) res=res*a % m;
        a=a*a % m;
        b >>= 1;
    }
    return res;
}


int main(){
	ll n;
	cin  >> n;
	cout << (modpow(2,n,MOD));
}


