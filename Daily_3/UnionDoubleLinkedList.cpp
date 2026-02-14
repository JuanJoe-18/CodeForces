#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> L(n + 1), R(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> L[i] >> R[i];
    }

    vector<int> cabezas;
    for (int i = 1; i <= n; i++) {
        if (L[i] == 0) {
            cabezas.push_back(i);
        }
    }

    for (size_t i = 0; i < cabezas.size() - 1; i++) {
        int cabezaActual = cabezas[i];
        int siguienteCabeza = cabezas[i + 1];

        int colaActual = cabezaActual;
        while (R[colaActual] != 0) {
            colaActual = R[colaActual];
        }

        R[colaActual] = siguienteCabeza;
        L[siguienteCabeza] = colaActual;
    }

    for (int i = 1; i <= n; i++) {
        cout << L[i] << " " << R[i] << "\n";
    }

    return 0;
}