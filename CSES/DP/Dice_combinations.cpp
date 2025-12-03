#include <iostream>
#include <vector>

// El módulo especificado en el problema
int MOD = 1e9 + 7;

// Arreglo para guardar los resultados ya calculados (memoización)
// Lo inicializamos con -1 para indicar que un estado no ha sido calculado.
std::vector<int> memo;

long long solve(int n) {
    // Caso base: Si la suma es 0, hay una manera (no lanzar más).
    if (n == 0) {
        return 1;
    }
    
    // Caso base: Si la suma es negativa, no es una solución válida.
    if (n < 0) {
        return 0;
    }

    // Paso de memoización: si ya hemos calculado este valor, lo retornamos.
    if (memo[n] != -1) {
        return memo[n];
    }

    // Paso recursivo: calcular el valor si no está en la memoria.
    long long count = 0;
    for (int i = 1; i <= 6; ++i) {
        count = (count + solve(n - i)) % MOD;
    }

    // Guardar el resultado en la memoria antes de retornarlo.
    memo[n] = count;
    return count;
}

int main() {
    // Optimiza la entrada/salida estándar
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    // Ajustamos el tamaño del vector de memoización y lo inicializamos.
    memo.assign(n + 1, -1);

    std::cout << solve(n) << std::endl;

    return 0;
}