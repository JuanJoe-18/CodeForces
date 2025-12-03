#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll n;
vector<ll> a, b;


bool check(ll x, ll k) {
    ll need = 0;
    for (int i = 0; i < n; i++) {//tambien hay que forzar la conversion al ll para 
        need += max(0ll, 1ll*x * a[i] - b[i]);
    }
    return need <= k;
}

int main() {
    ll k;
    cin >> n >> k;

    a.resize(n);
    b.resize(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    // La BS
    /*ll izq = 0, der = 2000000000, ans = 0;
    while (izq <= der) {// toca usar el nuevo mid para evitar el overflofw
        ll mid = izq + (der-izq)/2;
        if (check(mid, k)) {
            ans = mid;        
            izq = mid + 1;
        } else {
            der = mid - 1;      
        }
    }*/
    
    // busqyda binaria alternativa template
    
    ll l = 0, r =  2000000000;
    //assert(check(a[l],k) == false);//no incluiedos invariantes left siempre false y right true
    //assert(check(a[r],k) == true);
    while((r-l) > 1){
		ll mid = l  + (r - l)/2;
		if(check(mid,k)) l = mid;
		else r = mid;
	}
    
    cout << l << endl;
    return 0;
}
