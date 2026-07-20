#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll LINF = 1e18;

// ====================================================================
// 🚀 SWEEP LINE 1D (Intervalos, Horarios, Coberturas)
// ====================================================================
struct Event1D {
    ll x;       // Coordenada (tiempo, posición, etc.)
    int type;   // +1 para Inicio, -1 para Fin
    int id;     // Identificador del intervalo (opcional)

    // Ordenamiento clave para Sweep Line
    bool operator<(const Event1D& other) const {
        if (x != other.x) 
            return x < other.x; // Barrido de izquierda a derecha (o de menor a mayor tiempo)
        
        // ¡IMPORTANTE! Manejo de empates en la misma coordenada:
        // Si tocarse (ej: [1, 5] y [5, 10]) NO cuenta como intersección:
        // Primero procesa las salidas (-1) y luego las entradas (1)
        // return type < other.type; 
        
        // Si tocarse SÍ cuenta como intersección (max concurrencia simultánea):
        // Primero procesa las entradas (1) y luego las salidas (-1)
        return type > other.type;
    }
};

/**
 * Ejemplo clásico 1D: Máximo número de clientes simultáneos.
 * Dados N intervalos [L, R], encontrar el punto con máxima intersección.
 */
int max_concurrent_intervals(vector<pair<ll, ll>>& intervals) {
    vector<Event1D> events;
    for (int i = 0; i < intervals.size(); i++) {
        events.push_back({intervals[i].first, 1, i});
        events.push_back({intervals[i].second, -1, i});
    }
    
    sort(events.begin(), events.end());
    
    int current_active = 0, max_active = 0;
    for (auto& ev : events) {
        current_active += ev.type;
        max_active = max(max_active, current_active);
    }
    return max_active;
}


// ====================================================================
// 🚀 SWEEP LINE 2D (Geometría, Unión de Rectángulos)
// ====================================================================
struct Event2D {
    ll x;          // Coordenada donde ocurre el evento (eje de barrido X)
    int type;      // +1 para Borde Izquierdo (entrada), -1 para Borde Derecho (salida)
    ll y_bottom;   // Límite inferior del segmento en el eje Y
    ll y_top;      // Límite superior del segmento en el eje Y

    bool operator<(const Event2D& other) const {
        if (x != other.x) 
            return x < other.x;
        return type > other.type; // Si chocan, primero meter bordes nuevos
    }
};

/**
 * ESQUELETO 2D: Área de Unión de Rectángulos
 * Requiere un Segment Tree dinámico o con compresión de coordenadas en el eje Y.
 */
ll rectangle_union_area(vector<tuple<ll, ll, ll, ll>>& rects) {
    // rects = {x1, y1, x2, y2} donde (x1, y1) es inf-izq y (x2, y2) es sup-der
    vector<Event2D> events;
    for (auto [x1, y1, x2, y2] : rects) {
        events.push_back({x1, 1, y1, y2});
        events.push_back({x2, -1, y1, y2});
    }
    
    sort(events.begin(), events.end());
    
    ll total_area = 0;
    ll last_x = events[0].x;
    
    // Aquí inicializarías tu Segment Tree (st) que maneje el eje Y
    // st.build(rango_y);

    for (auto& ev : events) {
        ll current_x = ev.x;
        ll dx = current_x - last_x;
        
        // Sumar al área total el ancho (dx) multiplicado por la altura activa actual
        // total_area += dx * st.get_active_length();
        
        // Actualizar el Segment Tree: 
        // Si es borde izquierdo (+1), sumamos 1 a la cobertura en el rango [y_bottom, y_top]
        // Si es borde derecho (-1), restamos 1 a la cobertura en el rango [y_bottom, y_top]
        // st.update(ev.y_bottom, ev.y_top, ev.type);
        
        last_x = current_x;
    }
    
    return total_area;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    return 0;
}
