#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);

    int x, y;
    cin >> x >> y;
    int x0 = x;
    int ans = 0;
    int k = 0;
    if (x < y){ // ->
        do {
            ll pos = (1 << k);
            if (k % 2) pos *= -1;
            pos = x0 + pos;
            ans += abs(x-pos);
            x = pos;
            k++;
        }while(x < y);
        ans -= x-y;  
    } else if (x > y){ // <-
        do {
            ll pos = (1 << k);
            if (k % 2) pos *= -1;
            pos = x0 + pos;
            ans += abs(x-pos);
            x = pos;
            k++;
        }while(x > y);
        ans -= y-x;
    } else ans = 0;
    cout << ans << endl;
    return 0;
}