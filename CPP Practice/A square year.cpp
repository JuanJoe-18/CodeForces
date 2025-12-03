#include <iostream>
#include <string>
#include <cmath>
#include <vector>

// Función para resolver un solo caso de prueba
void solve() {
    std::string s;
    std::cin >> s;

    // 1. Convertir la cadena a entero
    int n = std::stoi(s);

    // 2. Calcular la raíz cuadrada y verificar si es un cuadrado perfecto
    int root = static_cast<int>(sqrt(n));

    if (root * root == n) {
        // 4. Si es un cuadrado perfecto, encontramos una solución
        // La solución más simple es a = root, b = 0
        std::cout << root << " " << 0 << std::endl;
    } else {
        // 5. Si no, es imposible
        std::cout << -1 << std::endl;
    }
}

int main() {
    // Optimización de E/S estándar en programación competitiva
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t; // Leer el número de casos de prueba
    while (t--) {
        solve();
    }

    return 0;
}