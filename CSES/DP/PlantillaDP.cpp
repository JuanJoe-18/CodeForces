#include <iostream>
#include <vector>
#include <cstring> // Para memset

using namespace std;
// --- CONFIGURACIÓN ---
// Define el tamaño máximo basado en las restricciones del problema
const int MAXN = 1005; 
long long memo[MAXN]; // Tabla para guardar resultados (memoización)

// --- FUNCIÓN DE PROGRAMACIÓN DINÁMICA (TOP-DOWN) ---
long long solve(int n) {
    // 1. Caso Base
    if (n <= 1) return n;

    // 2. Verificar si ya fue calculado (Memoización)
    if (memo[n] != -1) return memo[n];

    // 3. Calcular y guardar en la tabla
    // Ejemplo: Fibonacci -> return memo[n] = solve(n-1) + solve(n-2);
    return memo[n] = solve(n - 1) + solve(n - 2); 
}

int main() {
    int n;
    cin >> n;

    // Inicializar memo con -1 (indicando que no se ha calculado)
    memset(memo, -1, sizeof(memo));

    cout << "Resultado: " << solve(n) << endl;

    // --- OPCIONAL: ENFOQUE BOTTOM-UP (TABULACIÓN) ---
    /*
    vector<long long> dp(n + 1);
    dp[0] = 0; dp[1] = 1;
    for(int i = 2; i <= n; i++) dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n] << endl;
    */

    return 0;
}
