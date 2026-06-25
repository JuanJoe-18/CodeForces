#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef complex<ll> P;
#define X real()
#define Y imag()

const P P_out = {1000000001,1000000007};

int sgn(ll x) {
    return (x > 0) - (x < 0);
}

//CP 2V
ll cross(P a, P b) {
    return (conj(a) * b).Y;
}

// Overload : PA y PB
ll cross(P p, P a, P b) {
    return cross(a - p, b - p);
}

// Verifica si el punto p está en el rectángulo delimitador de a y b
bool onSegment(P p, P a, P b) {
    return p.X >= min(a.X, b.X) && p.X <= max(a.X, b.X) &&
           p.Y >= min(a.Y, b.Y) && p.Y <= max(a.Y, b.Y);
}

bool intersect(P a, P b, P c, P d) {
    ll cp1 = cross(a, b, c); 
    ll cp2 = cross(a, b, d); 
    ll cp3 = cross(c, d, a); 
    ll cp4 = cross(c, d, b); 
    //C1
    if (sgn(cp1) != sgn(cp2) && sgn(cp3) != sgn(cp4)) {
        return true;
    }
    //C2
    if (cp1 == 0 && onSegment(c, a, b)) return true;
    if (cp2 == 0 && onSegment(d, a, b)) return true;
    if (cp3 == 0 && onSegment(a, c, d)) return true;
    if (cp4 == 0 && onSegment(b, c, d)) return true;

    //C3
    return false;
}





int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    vector<P> a;
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        a.push_back({x,y});
    }
    while (m--) {
        ll x, y; 
        cin >> x >> y;
        P p = {x, y};
        
        int intersects = 0;
        bool is_boundary = false;
        
        for (int i = 0; i < n; i++) {
            P v0 = a[i];
            P v1 = a[(i + 1) % n];
            if (cross(p, v0, v1) == 0 && onSegment(p, v0, v1)) {
                is_boundary = true;
                break; 
            }
            
            if (intersect(p, P_out, v0, v1)) {
                intersects++;
            }
        }
        
        if (is_boundary) {
            cout << "BOUNDARY" << endl;
        } else {
            cout << ((intersects % 2) ? "INSIDE" : "OUTSIDE");
            cout << endl;
        }
    }
    return 0;
}

