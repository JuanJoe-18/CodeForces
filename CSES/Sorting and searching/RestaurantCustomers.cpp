


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Event {
    ll x;       // Coordenada (tiempo, posición, etc.)
    int type;   // 1 para INICIO, -1 para FIN (o 0 para puntos específicos)
    int id;     // Útil si necesitas saber de qué intervalo vino
    
    // El operador '<' es el corazón del Sweep Line
    bool operator<(const Event& other) const {
        if (x != other.x) 
            return x < other.x; // Ordenar de izquierda a derecha
        
        // Si chocan en el mismo punto, el orden depende del problema:
        // - Si tocarse cuenta como solapamiento: procesas inicios (1) ANTES que finales (-1).
        // - Si tocarse NO cuenta como solapamiento: procesas finales (-1) ANTES que inicios (1).
        return type > other.type; 
    }
};




int main() {
    int n; cin >> n;
     vector<Event> events;
     for (int i = 0; i < n; i++) {
         int L, R; cin >> L >> R;
         events.push_back({L, 1, i});
         events.push_back({R, -1, i});
     }
    sort(events.begin(), events.end());
    ll ans = 0;
    ll c = 0;
    for (auto e: events) {
        c += e.type;
        ans = max(ans,c);
    }
    cout << ans << endl;
    
    return 0;
}
