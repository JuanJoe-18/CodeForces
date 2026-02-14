#include <bits/stdc++.h>
using namespace std;
//Necesario , posiblemente para muchos problemas de geometría
typedef long long ll;
typedef long long C;
typedef complex<C> P;
#define X real()
#define Y imag()

ll cross(P a, P b) { // dos vectores
    return (conj(a) * b).Y;
}

bool onSegment(P p, P a, P b) {
    return p.X >= min(a.X, b.X) && p.X <= max(a.X, b.X) &&
           p.Y >= min(a.Y, b.Y) && p.Y <= max(a.Y, b.Y);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t;cin >> t;
    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        P a = {x1,y1} ; P b = {x2,y2};
        P c = {x3,y3} ; P d = {x4,y4};
        // necesitamos seis vectores 3 ac -> u (ab) -> v y ad -> w y lo mismo desde la otra perspectiva
        //  mirando desde AB
        ll cp1 = cross(b-a, c-a); ll cp2 = cross(b-a, d-a);
        // mirando desde CD
        ll cp3 = cross(d-c, a-c); ll cp4 = cross(d-c, b-c);

        if ( ( (cp1 > 0 && cp2 < 0) || (cp1 < 0 && cp2 > 0) ) &&
             ( (cp3 > 0 && cp4 < 0) || (cp3 < 0 && cp4 > 0) ) ) {
            cout << "YES" << endl;
            } else if (cp1 == 0 && onSegment(c, a, b)) { cout << "YES" << endl; }
            else if (cp2 == 0 && onSegment(d, a, b)) { cout << "YES" << endl; }
            else if (cp3 == 0 && onSegment(a, c, d)) { cout << "YES" << endl; }
            else if (cp4 == 0 && onSegment(b, c, d)) { cout << "YES" << endl; }
        // 3. NO SE TOCAN
            else {
                cout << "NO" << endl;
            }
    }

     return 0;
}
