#include <bits/stdc++.h>
using namespace std;

constexpr double PI = 3.14159265358979323846;
constexpr double PI_180 = PI / 180.0;

double maxArea = 0;

struct __attribute__((packed)) Point {
    double x, y;
    Point() = default;
    Point(double rad) noexcept : x(__builtin_cos(rad)), y(__builtin_sin(rad)) {}
};

__attribute__((always_inline))
inline double cross(const Point& a, const Point& b) noexcept {
    return a.x * b.y - b.x * a.y;
}

__attribute__((always_inline))
inline double calcArea(const Point* __restrict poly, int n) noexcept {
    double area = 0;
    const Point* __restrict p = poly;
    for (int i = 0; i < n; ++i) {
        area += cross(p[i], p[(i + 1) % n]);
    }
    return __builtin_fabs(area) * 0.5;
}

void __attribute__((hot)) backtrack(const Point* __restrict points, int n, int p, 
                                   Point* __restrict current, int pos, int start) {
    if (__builtin_expect(pos == p, 0)) {
        double area = calcArea(current, p);
        maxArea = max(maxArea, area);
        return;
    }
    
    int remaining = p - pos;
    int limit = n - remaining + 1;
    
    for (int i = start; i < limit; ++i) {
        current[pos] = points[i];
        backtrack(points, n, p, current, pos + 1, i + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, p;
    cin >> n >> p;
    
    alignas(32) Point points[20];
    alignas(32) Point current[20];
    
    double temp;
    for (int i = 0; i < n; ++i) {
        cin >> temp;
        points[i] = Point(temp * PI_180);
    }
    
    backtrack(points, n, p, current, 0, 0);
    
    printf("%.6f\n", maxArea * 1000000.0);
    
    return 0;
}