#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Estructura para el simulador de Caché L1 (Direct Mapped)
const int BLOCK_SIZE = 16;
const int CACHE_SIZE = 64;
const int NUM_LINES = CACHE_SIZE / BLOCK_SIZE; // 4 líneas

int cache[NUM_LINES] = {-1, -1, -1, -1};
int total_misses = 0;
int total_hits = 0;

// Direcciones base de las matrices (en decimal)
// 0x170 = 368. Cada matriz 3x3 de floats (4 bytes) pesa 36 bytes.
const int START_A = 368;
const int START_B = 368 + 36; // 404
const int START_C = 404 + 36; // 440

// Función de hardware: Retorna true si es Hit, false si es Miss
bool access_memory(int address) {
    int block_index = address / BLOCK_SIZE;
    int cache_line = block_index % NUM_LINES;
    
    if (cache[cache_line] == block_index) {
        total_hits++;
        return true; // HIT
    } else {
        total_misses++;
        cache[cache_line] = block_index; // Desalojo / Actualización
        return false; // MISS
    }
}

int main() {
    int step = 1;
    
    // Matrices para guardar el historial de pasos de cada celda
    vector<int> A_acc[3][3], B_acc[3][3], C_acc[3][3];

    // =========================================================
    // EJECUCIÓN DE LA VERSIÓN 2 (ikj)
    // =========================================================
    for (int i = 0; i < 3; ++i) {
        for (int k = 0; k < 3; ++k) {
            
            // 1. LECTURA DE A[i][k]
            A_acc[i][k].push_back(step++);
            access_memory(START_A + (i * 3 + k) * 4); 

            for (int j = 0; j < 3; ++j) {
                // 2. LECTURA DE B[k][j]
                B_acc[k][j].push_back(step++);
                access_memory(START_B + (k * 3 + j) * 4);
                
                // 3. LECTURA DE C[i][j] (Por el operador +=)
                C_acc[i][j].push_back(step++);
                access_memory(START_C + (i * 3 + j) * 4);
                
                // 4. ESCRITURA DE C[i][j] (Resultado de la suma)
                C_acc[i][j].push_back(step++);
                access_memory(START_C + (i * 3 + j) * 4);
            }
        }
    }

    // =========================================================
    // IMPRESIÓN DE RESULTADOS
    // =========================================================
    auto print_matrix = [](const string& name, vector<int> mat[3][3]) {
        cout << "--- ORDEN DE ACCESOS: MATRIZ " << name << " ---" << endl;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << "[";
                for (size_t x = 0; x < mat[i][j].size(); ++x) {
                    cout << mat[i][j][x] << (x < mat[i][j].size() - 1 ? "," : "");
                }
                cout << "]\t";
                if (name == "C" || name == "B") { // Ajuste de tabulación para visualización
                   if (mat[i][j].size() < 4) cout << "\t";
                }
            }
            cout << "\n\n";
        }
    };

    cout << "=======================================\n";
    cout << "  VERIFICADOR DE ARQUITECTURA (V2 ikj) \n";
    cout << "=======================================\n\n";
    
    print_matrix("A", A_acc);
    print_matrix("B", B_acc);
    print_matrix("C", C_acc);

    cout << "=======================================\n";
    cout << "  REPORTE DE HARDWARE (CACHÉ L1)\n";
    cout << "=======================================\n";
    cout << "Total de Accesos a Memoria : " << step - 1 << endl;
    cout << "Total de Misses (Fallos)   : " << total_misses << endl;
    cout << "Total de Hits (Aciertos)   : " << total_hits << endl;
    cout << "Miss Rate                  : " << fixed << setprecision(2) 
         << (float)total_misses / (step - 1) * 100 << "%" << endl;
    cout << "=======================================\n";

    return 0;
}