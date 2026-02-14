#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


unordered_set<ll> sieve(int n){
    vector<int> primes;
    vector<bool> isPrime;
    unordered_set<ll> ans;
    isPrime.assign(n+1,true);
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=n;i++){
        if(isPrime[i]){
            primes.push_back(i);
            ans.insert(1ll*i*i);
            for(ll j=1LL*i*i;j<=n;j+=i) isPrime[j]=false;
        }
    }
    return ans;
}

int main(){
    int n; cin >> n;
    vector<ll> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    auto aw = sieve(1000000 + 1);

    for (size_t i = 0; i < n; i++) {
        if (aw.count(a[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    


    return 0;
}