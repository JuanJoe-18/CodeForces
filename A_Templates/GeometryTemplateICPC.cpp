/**
 * @file GeometryTemplateICPC.cpp
 * @brief Plantilla Integral de Geometría Computacional (ICPC / CSES)
 * @details Soporta operaciones con enteros (evita problemas de precisión), 
 * Intersección de Segmentos, Área de Polígonos, Point in Polygon, 
 * Puntos del Retículo (Pick's Theorem), Convex Hull, Distancia Mínima (Closest Pair),
 * y estructuras para Sweep Line 1D y 2D.
 */
//   ____ ___  ____  _____   ____  _   _
//  / ___/ _ \|  _ \| ____| / ___|| | | |
// | |  | | | | | | |  _|   \___ \| | | |
// | |__| |_| | |_| | |___   ___) | |_| |
//  \____\___/|____/|_____| |____/ \___/
//
//                  GEOMETRY TEMPLATE (CSES Supported)

#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// ====================================================================
// 1. ESTRUCTURAS BÁSICAS (Point)
// ====================================================================
template<typename T>
struct Point {
    T x, y;
    Point() : x(0), y(0) {}
    Point(T x, T y) : x(x), y(y) {}
    
    Point operator+(const Point& p) const { return Point(x + p.x, y + p.y); }
    Point operator-(const Point& p) const { return Point(x - p.x, y - p.y); }
    Point operator*(T c) const { return Point(x * c, y * c); }
    Point operator/(T c) const { return Point(x / c, y / c); }
    
    bool operator==(const Point& p) const { return x == p.x && y == p.y; }
    bool operator!=(const Point& p) const { return !(*this == p); }
    // Ordenamiento lexicográfico (Sweep Line, Convex Hull)
    bool operator<(const Point& p) const { return x < p.x || (x == p.x && y < p.y); }
};

template<typename T>
T dot(Point<T> a, Point<T> b) { return a.x * b.x + a.y * b.y; }

template<typename T>
T cross(Point<T> a, Point<T> b) { return a.x * b.y - a.y * b.x; }

// Producto cruz entre vectores AP y BP. 
// >0 antihorario (izquierda), <0 horario (derecha), 0 colineales.
template<typename T>
T cross(Point<T> p, Point<T> a, Point<T> b) { return cross(a - p, b - p); }

template<typename T>
T norm2(Point<T> p) { return dot(p, p); }

template<typename T>
long double norm(Point<T> p) { return sqrtl(norm2(p)); }

template<typename T>
int sgn(T val) { return (T(0) < val) - (val < T(0)); }

// ====================================================================
// 2. INTERSECCIÓN DE SEGMENTOS Y PUNTO-SEGMENTO
// ====================================================================
template<typename T>
int orient(Point<T> a, Point<T> b, Point<T> c) { return sgn(cross(a, b, c)); }

template<typename T>
bool on_segment(Point<T> p, Point<T> a, Point<T> b) {
    return orient(a, b, p) == 0 && 
           min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x) && 
           min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

// Verifica si los segmentos AB y CD se intersectan (incluyendo colinealidad)
template<typename T>
bool segment_intersect(Point<T> a, Point<T> b, Point<T> c, Point<T> d) {
    int o1 = orient(a, b, c), o2 = orient(a, b, d);
    int o3 = orient(c, d, a), o4 = orient(c, d, b);
    
    // Intersección propia
    if (o1 != o2 && o3 != o4) return true;
    
    // Casos colineales y extremos
    if (o1 == 0 && on_segment(c, a, b)) return true;
    if (o2 == 0 && on_segment(d, a, b)) return true;
    if (o3 == 0 && on_segment(a, c, d)) return true;
    if (o4 == 0 && on_segment(b, c, d)) return true;
    
    return false;
}

// ====================================================================
// 3. POLÍGONOS (Área, Puntos en el Retículo, Punto dentro de Polígono)
// ====================================================================
// Retorna el DOBLE del área (Shoelace formula). Útil para evitar float.
template<typename T>
T polygon_area_2(const vector<Point<T>>& p) {
    T area = 0;
    int n = p.size();
    for (int i = 0; i < n; i++) {
        area += cross(p[i], p[(i + 1) % n]);
    }
    return abs(area);
}

// Pick's Theorem: Área = Interiores + Borde/2 - 1
// -> 2*Área = 2*Interiores + Borde - 2
// Esta función calcula los puntos del límite (borde)
long long boundary_points(const vector<Point<long long>>& poly) {
    long long b = 0;
    int n = poly.size();
    for (int i = 0; i < n; i++) {
        Point<long long> p1 = poly[i], p2 = poly[(i + 1) % n];
        b += std::gcd(abs(p1.x - p2.x), abs(p1.y - p2.y));
    }
    return b;
}

// Verifica si el punto p está dentro de un polígono.
// Retorna: 0 = afuera, 1 = en el borde, 2 = adentro.
template<typename T>
int point_in_polygon(const vector<Point<T>>& poly, Point<T> p) {
    int n = poly.size();
    int hits = 0;
    for (int i = 0; i < n; i++) {
        Point<T> a = poly[i], b = poly[(i + 1) % n];
        if (on_segment(p, a, b)) return 1;
        if (a.y > b.y) swap(a, b);
        if (p.y >= a.y && p.y < b.y && cross(p, a, b) > 0) hits++;
    }
    return (hits % 2 != 0) ? 2 : 0;
}

// ====================================================================
// 4. CONVEX HULL (Monotone Chain)
// ====================================================================
// Retorna la envoltura convexa del conjunto de puntos (en orden antihorario)
template<typename T>
vector<Point<T>> convex_hull(vector<Point<T>> pts) {
    int n = pts.size(), k = 0;
    if (n <= 2) return pts;
    
    vector<Point<T>> h(2 * n);
    sort(pts.begin(), pts.end());
    
    // Mitad inferior
    for (int i = 0; i < n; i++) {
        // Cambiar <= a < si se quieren incluir los puntos colineales en el borde
        while (k >= 2 && cross(h[k - 2], h[k - 1], pts[i]) <= 0) k--;
        h[k++] = pts[i];
    }
    // Mitad superior
    for (int i = n - 2, t = k + 1; i >= 0; i--) {
        while (k >= t && cross(h[k - 2], h[k - 1], pts[i]) <= 0) k--;
        h[k++] = pts[i];
    }
    
    h.resize(k - 1);
    return h;
}

// ====================================================================
// 5. DISTANCIA MÍNIMA (CLOSEST PAIR) - O(N log N)
// ====================================================================
// Retorna la distancia euclidiana AL CUADRADO entre los 2 puntos más cercanos.
long long closest_pair(vector<Point<long long>> pts) {
    int n = pts.size();
    if (n < 2) return 8e18; // Evitar RTE
    
    sort(pts.begin(), pts.end());
    set<pair<long long, long long>> active; // {y, x}
    long long best_dist2 = 8e18; // Infinito seguro
    int left = 0;
    
    for (int i = 0; i < n; i++) {
        long long d = ceil(sqrt(best_dist2));
        while (left < i && pts[i].x - pts[left].x >= d) {
            active.erase({pts[left].y, pts[left].x});
            left++;
        }
        auto it1 = active.lower_bound({pts[i].y - d, -8e18});
        auto it2 = active.upper_bound({pts[i].y + d, 8e18});
        for (auto it = it1; it != it2; ++it) {
            long long dy = pts[i].y - it->first;
            long long dx = pts[i].x - it->second;
            best_dist2 = min(best_dist2, dx * dx + dy * dy);
        }
        active.insert({pts[i].y, pts[i].x});
    }
    return best_dist2;
}

// ====================================================================
// 6. ESTRUCTURAS SWEEP LINE (1D y 2D)
// ====================================================================
struct Event1D {
    long long x;
    int type; // +1 Inicio, -1 Fin
    int id;
    
    bool operator<(const Event1D& o) const {
        if (x != o.x) return x < o.x;
        return type > o.type; // Ajustar (type > o.type) = procesa Entradas primero
    }
};

struct Event2D {
    long long x;
    int type; // +1 Borde Izquierdo, -1 Borde Derecho
    long long y1, y2;
    
    bool operator<(const Event2D& o) const {
        if (x != o.x) return x < o.x;
        return type > o.type; 
    }
};
// Nota para Union de Rectángulos / Area: requiere un Segment Tree
// que maneje Range Sum (Active Length) con la compresión de coordenadas Y.
// ====================================================================
// ====================================================================
// 7. GEOMETRÍA CIRCULAR (Área de Intersección Círculo-Polígono)
// ====================================================================
// Área dirigida de la intersección entre el círculo x^2+y^2=r^2 y el triángulo (0,0)-a-b
double circle_triangle_area(Point<double> a, Point<double> b, double r) {
    auto cross = [](Point<double> p1, Point<double> p2) { return p1.x * p2.y - p1.y * p2.x; };
    auto dot = [](Point<double> p1, Point<double> p2) { return p1.x * p2.x + p1.y * p2.y; };
    auto norm2 = [&](Point<double> p) { return dot(p, p); };
    double d = cross(a, b);
    if (abs(d) < 1e-9) return 0.0;
    Point<double> dV(b.x - a.x, b.y - a.y);
    double A = norm2(dV);
    double B = 2.0 * dot(a, dV);
    double C = norm2(a) - r * r;
    double delta = B * B - 4.0 * A * C;
    vector<double> t;
    if (delta >= 0) {
        double sq = sqrt(delta);
        double t1 = (-B - sq) / (2.0 * A);
        double t2 = (-B + sq) / (2.0 * A);
        if (t1 > 1e-9 && t1 < 1.0 - 1e-9) t.push_back(t1);
        if (t2 > 1e-9 && t2 < 1.0 - 1e-9) t.push_back(t2);
    }
    if (t.empty()) {
        if (norm2(a) <= r * r + 1e-9 && norm2(b) <= r * r + 1e-9) {
            return d / 2.0;
        }
        double angle = atan2(cross(a, b), dot(a, b));
        return r * r * angle / 2.0;
    }

    t.push_back(0.0);
    t.push_back(1.0);
    sort(t.begin(), t.end());

    double ans = 0;
    for (size_t i = 0; i < t.size() - 1; i++) {
        Point<double> p1(a.x + dV.x * t[i], a.y + dV.y * t[i]);
        Point<double> p2(a.x + dV.x * t[i+1], a.y + dV.y * t[i+1]);
        ans += circle_triangle_area(p1, p2, r);
    }
    return ans;
}

double circle_polygon_area(const vector<Point<double>>& poly, Point<double> c, double r) {
    double ans = 0;
    int n = poly.size();
    for (int i = 0; i < n; i++) {
        Point<double> a = poly[i] - c;
        Point<double> b = poly[(i + 1) % n] - c;
        ans += circle_triangle_area(a, b, r);
    }
    return abs(ans);
}

int main() {
    fastio
    
    
    return 0;
}
