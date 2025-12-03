#include<bits/stdc++.h>
#include <climits>
using namespace std;
typedef long long ll;
int main(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++) {
        count += abs(a[i]-(i+1));
    }
    cout << count << endl;

    return 0;
}
