#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long long C;
typedef complex<C> P;
#define X real()
#define Y imag()

int main() {
    ll x, y;
    cin >> x >> y; //separo los cuadrantes  ++ -+ -- +-
    ll sum = abs(x) + abs(y);
    P a{0,sum};
    P c{sum,0};

    if (x < 0 && y > 0) { //-+
        c.real(-sum);
    } else if (x < 0 && y < 0) {//--
        c.real(-sum); a.imag(-sum);
    } else if (x > 0 && y < 0){// +-
        a.imag(-sum);
    }

    vector<pair<ll,ll>> ac =   {{a.X,a.Y},{c.X,c.Y} };
    sort(ac.begin(),ac.end());
    for (auto p : ac) {
        cout << p.first << " " << p.second << " ";
    }




    return 0;
}
