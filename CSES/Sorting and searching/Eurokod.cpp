#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Codigo {
    int etiqueta;
    int votos;
    int puntosPresidente;
    int puntosMiembros;
    int puntosTotales;
};

bool comparar(const Codigo& a, const Codigo& b) {
    if (a.puntosTotales != b.puntosTotales)
        return a.puntosTotales > b.puntosTotales;
    return a.puntosMiembros > b.puntosMiembros;
}

int main() {
    int n;
    cin >> n;

    vector<int> ordenPresidente(n);
    for (int i = 0; i < n; ++i)
        cin >> ordenPresidente[i];

    vector<int> votos(n);
    for (int i = 0; i < n; ++i)
        cin >> votos[i];

    vector<Codigo> codigos(n);
    for (int i = 0; i < n; ++i) {
        codigos[i].etiqueta = i + 1;
        codigos[i].votos = votos[i];
        codigos[i].puntosPresidente = 0;
        codigos[i].puntosMiembros = 0;
        codigos[i].puntosTotales = 0;
    }

    for (int i = 0; i < n; ++i) {
        int etiqueta = ordenPresidente[i];
        codigos[etiqueta - 1].puntosPresidente = n - i;
    }

    vector<Codigo*> porVotos;
    for (int i = 0; i < n; ++i) {
        porVotos.push_back(&codigos[i]);
    }

    sort(porVotos.begin(), porVotos.end(), [](Codigo* a, Codigo* b) {
        return a->votos > b->votos;
    });

    for (int i = 0; i < n; ++i) {
        porVotos[i]->puntosMiembros = n - i;
    }

    for (int i = 0; i < n; ++i) {
        codigos[i].puntosTotales = codigos[i].puntosPresidente + codigos[i].puntosMiembros;
    }

    sort(codigos.begin(), codigos.end(), comparar);

    for (int i = 0; i < n; ++i) {
        cout << (i + 1) << ". Kod"
             << setw(2) << setfill('0') << codigos[i].etiqueta
             << " (" << codigos[i].puntosTotales << ")\n";
    }

    return 0;
}
