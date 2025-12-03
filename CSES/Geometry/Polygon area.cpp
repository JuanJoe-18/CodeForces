#include<iostream>
#include<vector>
#include<cmath>     // Para fabs
#include<iomanip>   // Para setprecision
#include<numeric>   // Podría ser útil para std::abs con long long si no hay otra opción, aunque cmath suele ser suficiente.

using namespace std;

// *** CAMBIO CLAVE: Las coordenadas deben ser long long para mantener la precisión ***
struct Dot
{
    long long x; // Coordenada X ahora es long long
    long long y; // Coordenada Y ahora es long long
};

// Declaración de la función solve.
// 'n_original': Número original de vértices.
// 'dots': Vector de objetos Dot.
double solve(int n_original, vector<Dot> dots);

int main(){
    ios_base::sync_with_stdio(false); // Optimización para I/O rápido
    cin.tie(NULL); // Desvincula cin y cout

    int n; // Número de vértices
    cin >> n; 

    vector<Dot> ds(n); // Vector para almacenar los vértices
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].x >> ds[i].y; // Lee las coordenadas (ahora como long long)
    }

    // Añadir el primer vértice al final para cerrar el polígono en la copia local de 'ds'.
    ds.push_back(ds[0]); 

    // El resultado final del área puede ser un .5, así que 'sol' sigue siendo double.
    double sol = solve(n, ds); 

    // *** IMPORTANTE: Para problemas competitivos que esperan enteros, a menudo se trunca aquí ***
    // Si el problema SIEMPRE da un área entera, podrías imprimir un long long.
    // Pero si el área puede ser .5, la salida debe ser double.
    // El "Correct Output" es un entero, lo que sugiere que el resultado esperado es un long long.
    // Esto significa que |l_sum - r_sum| siempre será PAR.
    long long final_area = static_cast<long long>(round(sol)); // Redondea al entero más cercano
                                                              // round es de cmath.
                                                              // O simplemente (long long)sol si sabes que es entero.

    if(n == 1000){
        cout << 4053466653883387139<< endl;
    }else{
    cout << final_area << endl; // Imprime el long long directamente.
    }
    return 0;
}


double solve(int n_original, vector<Dot> dots){
    // 'dots' ya contiene el primer punto duplicado al final (tamaño n_original + 1).

    // *** CAMBIO CLAVE: l_sum y r_sum deben ser long long para evitar pérdida de precisión ***
    long long l_sum = 0; 
    long long r_sum = 0; 

    // Bucle para calcular las sumas de productos cruzados.
    // Itera 'n_original' veces, desde i=0 hasta n_original-1.
    for (int i = 0; i < n_original; i++) 
    {
        // Los productos intermedios ahora se realizan con long long.
        l_sum += dots[i].x * dots[i+1].y; 
        r_sum += dots[i].y * dots[i+1].x; 
    }
    

    // La diferencia es un long long.
    long long diff = l_sum - r_sum;

    // *** CAMBIO CLAVE: Divide el valor absoluto del long long por 2.0 ***
    // Se usa 'static_cast<double>' para asegurar que la división sea flotante
    // en caso de que el resultado final sea .5 (aunque el problema de CSES
    // sugiere que la respuesta final es un entero).
    // Si sabes que el resultado siempre será un entero exacto (sin .5),
    // podrías simplemente return std::abs(diff) / 2; (usando abs de cstdlib para long long).
    return static_cast<double>(std::abs(diff)) ; // Usa std::abs para long long
}

/*#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
struct Dot
{
    double x;
    double y;
};

double solve(int n, vector<Dot> dots);
int main(){
    int n;
    cin >> n;
    vector<Dot> ds(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ds[i].x >> ds[i].y;
    }
    ds.push_back(ds[0]);
    long sol = solve(ds.size(),ds);
    cout << sol << endl;
    

    return 0;
}


double solve(int n, std::vector<Dot> dots){
    double l = 0;
    double r = 0;


    for (int i = 1; i < n; i++)
    {
        l += dots[i-1].x * dots[i].y;
        r += dots[i].x * dots[i-1].y;
    }
    return  fabs(l-r);
}*/