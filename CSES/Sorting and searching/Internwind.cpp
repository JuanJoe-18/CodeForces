#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Pillar {
    int index;
    double x, y;
};

const double EPS = 1e-9;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    double d;
    
    // Leer entrada estándar
    if (!(cin >> n >> d)) {
        return 0; // Fin de entrada
    }
    
    vector<Pillar> pillars(n);
    for (int i = 0; i < n; i++) {
        if (!(cin >> pillars[i].x >> pillars[i].y)) {
            return 0; // Fin de entrada
        }
        pillars[i].index = i + 1;
    }

    double cx = 0, cy = 0; // Centro actual de rotación
    double rope = d;

    while (true) {
        Pillar* next = nullptr;
        double best_angle = 1e9;

        for (auto& p : pillars) {
            double dx = p.x - cx;
            double dy = p.y - cy;
            double dist = sqrt(dx * dx + dy * dy);
            if (dist >= rope - EPS) continue;

            double angle = atan2(dy, dx);
            if (angle < -EPS) angle += 2 * M_PI;

            if (angle < best_angle - EPS || 
                (abs(angle - best_angle) < EPS && dist < sqrt((p.x - cx)*(p.x - cx) + (p.y - cy)*(p.y - cy))))
            {
                best_angle = angle;
                next = &p;
            }
        }

        if (!next) {
            cout << "-1\n";
            break;
        }

        double dx = next->x - cx;
        double dy = next->y - cy;
        double dist = sqrt(dx * dx + dy * dy);

        rope -= dist;
        cx = next->x;
        cy = next->y;

        // Verificamos si ya no puede continuar
        bool can_continue = false;
        for (auto& p : pillars) {
            if (p.x == cx && p.y == cy) continue;
            double dx2 = p.x - cx;
            double dy2 = p.y - cy;
            double dist2 = sqrt(dx2 * dx2 + dy2 * dy2);
            if (dist2 < rope - EPS) {
                can_continue = true;
                break;
            }
        }

        if (!can_continue) {
            cout << next->index << "\n";
            break;
        }
    }

    return 0;
}