#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

ll f(int p, int t) {
    return max((3*p)/30, p - ((t*p)/250));
}



int main() {
    int a,b,c,d; cin >> a >> b >> c >> d;

    ll M = 0; ll V = 0;
    M = f(a,c); V = f(b,d);


    if (M > V) cout << "Misha";
    else if (M == V) cout << "Tie";
    else cout << "Vasya";
    return 0;
}
