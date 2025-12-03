#include<bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;
int main(){
	ll n, m; cin >> n >> m;
	vector<ll> a(n);
	vector<ll> b(m);
	map<ll,int> d;
	vector<ll> p(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < m; i++) cin >> b[i];
	
	p[0] = a[0];
	d[a[0]] = 1;
	
	for(int i = 1; i < n; i++){
		p[i] =  p[i-1] + a[i];
		d[p[i]] = i+1;
	}
	
	
	for(int i = 0; i < m; i++){
        auto it = d.lower_bound(b[i]);
        ll prevk = 0;
        if (it != d.begin()) {
            prevk = prev(it)->first; 
        }
        ll dor = it->second;
        ll cuar = b[i] - prevk;
        cout << dor << " " << cuar << endl;
		//printf("%lld %lld %lld %lld\n", dor, cuar, b[i], prevk);

    }
	
	return 0;
}

/*	/10/15/12/
	1:[10] 2:[25] 3:[37]
	*/
/*in:
	3 6
	10 15 12
	1 9 12 23 26 37
 * out:
	1 1
	1 9
	2 2
	2 13
	3 1
	3 12
 * */
