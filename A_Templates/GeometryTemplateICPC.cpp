/**
 * @file GeometryTemplateICPC.cpp
 * @brief Plantilla de tecnicas geometricas y sweep line.
 * @details Incluye eventos 1D y el esqueleto para union de rectangulos 2D.
 * @note Completa el Segment Tree antes de usar la version 2D.
 */
//   ____ ___  ____  _____   ____  _   _
//  / ___/ _ \|  _ \| ____| / ___|| | | |
// | |  | | | | | | |  _|   \___ \| | | |
// | |__| |_| | |_| | |___   ___) | |_| |
//  \____\___/|____/|_____| |____/ \___/
//
//                  GEOMETRY TEMPLATE

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef long double ld;

const ld EPS = 1e-9;

int sgn(ld x) {
    if (fabsl(x) < EPS) return 0;
    return x < 0 ? -1 : 1;
}

struct Point {
    ll x, y;
    bool operator<(const Point& other) const {
        if (y != other.y) return y < other.y;
        return x < other.x;
    }
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

struct PointD {
    ld x, y;
    PointD() : x(0), y(0) {}
    PointD(ld _x, ld _y) : x(_x), y(_y) {}
    PointD operator + (const PointD& other) const { return PointD(x + other.x, y + other.y); }
    PointD operator - (const PointD& other) const { return PointD(x - other.x, y - other.y); }
    PointD operator * (ld k) const { return PointD(x * k, y * k); }
};

ld dot(PointD a, PointD b) { return a.x * b.x + a.y * b.y; }
ld cross(PointD a, PointD b) { return a.x * b.y - a.y * b.x; }
ld norm2(PointD a) { return dot(a, a); }
ld dist2(PointD a, PointD b) { return norm2(a - b); }

struct Line {
    ld a, b, c;
    Line() : a(0), b(0), c(0) {}
    Line(PointD p, PointD q) {w
        a = p.y - q.y;
        b = q.x - p.x;
        c = -(a * p.x + b * p.y);
    }
    ld eval(PointD p) const { return a * p.x + b * p.y + c; }
};

ld orient(PointD a, PointD b, PointD c) {
    return cross(b - a, c - a);
}

bool on_segment(PointD a, PointD b, PointD p) {
    if (sgn(orient(a, b, p)) != 0) return false;
    return min(a.x, b.x) - EPS <= p.x && p.x <= max(a.x, b.x) + EPS &&
           min(a.y, b.y) - EPS <= p.y && p.y <= max(a.y, b.y) + EPS;
}

PointD reflect_point_vertical(PointD p, ld x0) {
    return PointD(2.0L * x0 - p.x, p.y);
}

bool same_x_sum_for_pairs(vector<Point>& a, vector<Point>& b) {
    if (a.size() != b.size()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < (int)a.size(); ++i) {
        if (a[i].y != b[i].y) return false;
    }
    ll sum = a[0].x + b[0].x;
    for (int i = 1; i < (int)a.size(); ++i) {
        if (a[i].x + b[i].x != sum) return false;
    }
    return true;
}

/*leer n

leer los n puntos de Mia
leer los n puntos de Mark

crear un mapa MiaPorY   // y -> lista de x
crear un mapa MarkPorY  // y -> lista de x

para cada punto (x, y) de Mia:
    agregar x a MiaPorY[y]

para cada punto (x, y) de Mark:
    agregar x a MarkPorY[y]

si las llaves de MiaPorY y MarkPorY no son iguales:
    imprimir "impossible"
    terminar

mirrorSum = "no definido"

para cada y en las llaves:
    ordenar MiaPorY[y] de menor a mayor
    ordenar MarkPorY[y] de menor a mayor

    si tamaño de MiaPorY[y] != tamaño de MarkPorY[y]:
        imprimir "impossible"
        terminar

    m = tamaño de MiaPorY[y]

    para i desde 0 hasta m-1:
        currentSum = MiaPorY[y][i] + MarkPorY[y][m-1-i]

        si mirrorSum no está definido:
            mirrorSum = currentSum
        si currentSum != mirrorSum:
            imprimir "impossible"
            terminar

imprimir "possible"*/

int main() {
    fastio
    int n; cin >> n;
    vector<Point> Mia(n), Mark(n);
    map<int, vector<int>> MiaPorY, MarkPorY;

    for (int i = 0; i < n; i++) {
        cin >> Mia[i].x >> Mia[i].y;
        MiaPorY[Mia[i].y].push_back(Mia[i].x);
    }

    for (int i = 0; i < n; i++) {
        cin >> Mark[i].x >> Mark[i].y;
        MarkPorY[Mark[i].y].push_back(Mark[i].x);
    }

    if (MiaPorY.keys() != MarkPorY.keys()) {
        cout << "impossible" << endl;
    }

     bool mirrorSum = 0;

    for (auto& [y, MiaX]: MiaPorY) {
        sort(MiaX.begin(), MiaX.end());
        sort(MarkPorY[y].begin(), MarkPorY[y].end());

        if (MiaX.size() != MarkPorY[y].size()) {
            cout << "impossible" << endl;
        }

        for (int i = 0; i < MiaX.size(); i++) {
            int currentSum = MiaX[i] + MarkPorY[y][MarkPorY[y].size() - 1 - i];
            if (!mirrorSum) {
                mirrorSum = currentSum;
            } else if (currentSum != mirrorSum) {
                cout << "impossible" << endl;
            }
        }
    }



    return 0;
}
