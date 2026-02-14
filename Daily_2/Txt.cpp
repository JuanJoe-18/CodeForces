#include <iostream>
using namespace std;

int main() {
    int numero;
    int suma = 0;

    cout << "Ingresa numeros (o una letra para terminar): ";

    // El bucle continuará mientras cin pueda leer un entero con éxito
    while (cin >> numero) {
        suma += numero;
    }

    cout << "La suma total es: " << suma << endl;
    return 0;
}