 #pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define all(v) v.begin() , v.end()
#define pb push_back
typedef long long ll;
typedef long double ld;

template <typename T> struct Point {
    T x,y;
    Point ( T x = 0, T y = 0) : x(x) , y(y) {}
    Point operator+(const Point& p) const { return Point(x + p.x, y + p.y);}
    Point operator-(const Point& p) const { return Point(x - p.x, y - p.y);}
    bool operator==(const Point& p) const { return x == p.x && y == p.y;}
    bool operator<(const Point& p) const { return x < p.x || (x == p.x && y < p.y);}

};

template <typename T> __int128 cross(Point<T> a , Point<T> b) {
    return (__int128)a.x * b.y - (__int128)a.y * b.x;
};


template <typename T>  __int128 cross(Point<ll> p,Point<T> a,Point<T> b) {
    return cross(a - p , b - p);
};

vector<Point<ll>> upper_hullt0 (vector<Point<ll>> pts) {
    sort(all(pts));
    vector<Point<ll>> h;
    h.reserve(pts.size());
    for (const auto & p: pts) {
        if (!h.empty() && h.back().x == p.x) h.pop_back();
        while (!h.empty() && h.back().y <= p.y) h.pop_back();
        while (h.size() >= 2 && cross(h[h.size() - 2] , h.back(), p) >= 0) h.pop_back();
        h.pb(p);
    }

    int start = 0;
    while (start + 1 < (int)h.size() && h[start].y <= h[start + 1].y) {
        start++;
    }
    return vector<Point<ll>>(h.begin() + start, h.end());
}

/*
*
4
0 0 10 10
0 0 10 10
10 10 -10 -10
10 0 -20 0
 */


inline ld intersect(Point<ll> a, Point<ll>b) {
    return (ld)(a.y - b.y) /(ld) (b.x - a.x);
};

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<Point<ll>> mxpts(n), mnxpts(n), mypts(n), mnypts(n);

    for (int i = 0; i < n; i++) {
        ll x, y, vx, vy;
        cin >> x >> y >> vx >> vy;

        mxpts[i] = {vx,x};
        mnxpts[i] = {-vx,-x};
        mypts[i] = {vy,y};
        mnypts[i] = {-vy,-y};
    }

    auto Hmx = upper_hullt0(move(mxpts));
    auto Hmnx = upper_hullt0(move(mnxpts));
    auto Hmy = upper_hullt0(move(mypts));
    auto Hmny = upper_hullt0(move(mnypts));

    vector<ld> events {0.0L};
    auto add_events =  [&](const vector<Point<ll>> & h) {
        for (ll i = 0; i + 1 < h.size(); i++ ) {
            events.pb(intersect(h[i], h[i+1]));
        }
    };
    add_events(Hmx);
    add_events(Hmnx);
    add_events(Hmy);
    add_events(Hmny);
    sort(all(events));


    ll imx = 0, imnx = 0, imy = 0, imny = 0;
    auto ev_area = [&](ld t, Point<ll> wx,Point<ll> wy) -> ld {
        ld w = max((ld)0.0, (ld)wx.x * t +(ld)wx.y);
        ld h = max((ld)0.0, (ld)wy.x * t + (ld)wy.y);
        return w * h;
    };

    Point<ll> cur_wx = Hmx[0] + Hmnx[0];
    Point<ll> cur_wy = Hmy[0] + Hmny[0];
    ld ans = ev_area(0.0L, cur_wx, cur_wy);

    for (ll k = 0; k < events.size(); k++) {
        ld tL = events[k];
        ld tR = (k + 1 < events.size()) ? events[k + 1] : -1.0L;
        while (imx + 1 < Hmx.size() && intersect(Hmx[imx], Hmx[imx + 1]) <= tL + 1e-13L) imx++;
        while (imnx + 1 < Hmnx.size() && intersect(Hmnx[imnx], Hmnx[imnx + 1])<= tL + 1e-13L) imnx++;
        while (imy + 1 < Hmy.size() && intersect(Hmy[imy], Hmy[imy + 1])<= tL + 1e-13L) imy++;
        while (imny + 1 < Hmny.size() && intersect(Hmny[imny], Hmny[imny + 1])<= tL + 1e-13L) imny++;

        Point<ll> wx = Hmx[imx] + Hmnx[imnx];
        Point<ll> wy = Hmy[imy] + Hmny[imny];

        ans = min(ans, ev_area(tL,wx,wy));
        if (tR > tL) {
            ans = min(ans, ev_area(tR,wx,wy));
        }


        ld A = (ld)wx.x * wy.x;
        ld B = (ld)wx.x * wy.y + (ld)wx.y * wy.x;
        if (abs(A) > 0) {
            ld t_opt = -B / (2.0L * A);
            if (t_opt >= tL  && (tR < 0 || t_opt <= tR)) {
                ans = min(ans, ev_area(t_opt,wx,wy));
            }
        }
    }

    cout << fixed << setprecision(15) << (double)ans << "\n";
    
    return 0;
}