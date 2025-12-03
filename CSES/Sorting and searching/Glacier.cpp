#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

typedef pair<double, double> Point;

double distancia(const Point& a, const Point& b) {
    double dx = a.first - b.first;
    double dy = a.second - b.second;
    return sqrt(dx*dx + dy*dy);
}

Point interpolar(const Point& a, const Point& b, double d) {
    double total = distancia(a, b);
    double f = d / total;
    return { a.first + f * (b.first - a.first), a.second + f * (b.second - a.second) };
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double s;
    int n;

    while (cin >> s >> n) {
        vector<Point> puntos(n);
        for (int i = 0; i < n; ++i)
            cin >> puntos[i].first >> puntos[i].second;

        vector<double> acum(n);
        for (int i = 1; i < n; ++i)
            acum[i] = acum[i-1] + distancia(puntos[i-1], puntos[i]);

        int j = 0;
        double res = 1e18;

        for (int i = 0; i < n; ++i) {
            double d = acum[i] - s;
            if (d < 0) continue;

            while (j + 1 < n && acum[j+1] < d) ++j;

            Point a = puntos[i];
            Point b;
            if (abs(acum[j] - d) < 1e-9) {
                b = puntos[j];
            } else {
                double restante = d - acum[j];
                b = interpolar(puntos[j], puntos[j+1], restante);
            }

            res = min(res, distancia(a, b));
        }

        cout << fixed << setprecision(10) << res << '\n';
    }

    return 0;
}
