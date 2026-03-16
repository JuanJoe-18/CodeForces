#include <bits/stdc++.h>
using namespace std;
int main() {
    float pagoxingreso = 0.1718750f;
    float PagoTotal = 0;
    float CapacidadEstadio = 48712;
    float DineroAcumulado = 0;
    int numeroMaxAsistentes = 50 * 48712; //=2435600
    int ConteoAsistentes = 0;

    while (ConteoAsistentes <= numeroMaxAsistentes) {
        ConteoAsistentes++;
        DineroAcumulado = DineroAcumulado + pagoxingreso;
    }

    cout << "Girar Cheque por:" << DineroAcumulado << ""
                                                      "; ";

    cout << "Pago que deberia haber sido:" << numeroMaxAsistentes * pagoxingreso;

    return 0;
}