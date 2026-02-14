#include<bits/stdc++.h>
using namespace std;

class StringManager {
private:
    std::string texto;

public:
    // Constructor
    StringManager(const std::string& str = "") : texto(str) {}
    
    // Métodos básicos
    void setTexto(const std::string& str) {
        texto = str;
    }
    
    std::string getTexto() const {
        return texto;
    }
    
    size_t longitud() const {
        return texto.length();
    }
    
    bool estaVacio() const {
        return texto.empty();
    }
    
    // Manipulación de strings
    void convertirMayusculas() {
        std::transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    }
    
    void convertirMinusculas() {
        std::transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    }
    
    void capitalizar() {
        if (!texto.empty()) {
            texto[0] = std::toupper(texto[0]);
            for (size_t i = 1; i < texto.length(); ++i) {
                texto[i] = std::tolower(texto[i]);
            }
        }
    }
    
    void invertir() {
        std::reverse(texto.begin(), texto.end());
    }
    
    void eliminarEspacios() {
        texto.erase(std::remove_if(texto.begin(), texto.end(), ::isspace), texto.end());
    }
    
    void trim() {
        // Eliminar espacios al inicio
        texto.erase(texto.begin(), std::find_if(texto.begin(), texto.end(), 
            [](unsigned char ch) { return !std::isspace(ch); }));
        
        // Eliminar espacios al final
        texto.erase(std::find_if(texto.rbegin(), texto.rend(), 
            [](unsigned char ch) { return !std::isspace(ch); }).base(), texto.end());
    }
    
    // Búsqueda y reemplazo
    bool contiene(const std::string& subcadena) const {
        return texto.find(subcadena) != std::string::npos;
    }

    //Ocurrencias no solapadas
    size_t contarOcurrencias(const std::string& subcadena) const {
        size_t count = 0;
        size_t pos = 0;
        while ((pos = texto.find(subcadena, pos)) != std::string::npos) {
            ++count;
            pos += subcadena.length();
        }
        return count;
    }

    // Encontrar Ocurrencias con solapamiento incluido
    vector<int> rabin_karp(string const& s, string const& t) {
        const int p = 31;
        const int m = 1e9 + 9;
        int S = s.size(), T = t.size();

        vector<long long> p_pow(max(S, T));
        p_pow[0] = 1;
        for (int i = 1; i < (int)p_pow.size(); i++)
            p_pow[i] = (p_pow[i-1] * p) % m;

        vector<long long> h(T + 1, 0);
        for (int i = 0; i < T; i++)
            h[i+1] = (h[i] + (t[i] - 'a' + 1) * p_pow[i]) % m;
        long long h_s = 0;
        for (int i = 0; i < S; i++)
            h_s = (h_s + (s[i] - 'a' + 1) * p_pow[i]) % m;

        vector<int> occurrences;
        for (int i = 0; i + S - 1 < T; i++) {
            long long cur_h = (h[i+S] + m - h[i]) % m;
            if (cur_h == h_s * p_pow[i] % m)
                occurrences.push_back(i);
        }
        return occurrences;
    }
    
    void reemplazar(const std::string& viejo, const std::string& nuevo) {
        size_t pos = 0;
        while ((pos = texto.find(viejo, pos)) != std::string::npos) {
            texto.replace(pos, viejo.length(), nuevo);
            pos += nuevo.length();
        }
    }
    
    // División y unión
    std::vector<std::string> dividir(const std::string& delimitador) const {
        std::vector<std::string> partes;
        size_t inicio = 0;
        size_t fin = texto.find(delimitador);
        
        while (fin != std::string::npos) {
            partes.push_back(texto.substr(inicio, fin - inicio));
            inicio = fin + delimitador.length();
            fin = texto.find(delimitador, inicio);
        }
        partes.push_back(texto.substr(inicio));
        
        return partes;
    }
    
    static std::string unir(const std::vector<std::string>& partes, const std::string& separador) {
        std::string resultado;
        for (size_t i = 0; i < partes.size(); ++i) {
            resultado += partes[i];
            if (i < partes.size() - 1) {
                resultado += separador;
            }
        }
        return resultado;
    }

    // Sección extra de splits
    // Divide el texto actual por espacios (múltiples espacios se ignoran)
    std::vector<std::string> dividirPorEspacios() const {
        std::istringstream iss(texto);
        std::vector<std::string> partes;
        std::string palabra;
        while (iss >> palabra) {
            partes.push_back(palabra);
        }
        return partes;
    }

    // Divide cualquier string por un solo carácter delimitador
    static vector<std::string> split(const std::string& str, char delimitador) {
        vector<std::string> partes;
        string actual;
        istringstream iss(str);
        while (getline(iss, actual, delimitador)) {
            partes.push_back(actual);
        }
        return partes;
    }
    
    // Validaciones
    bool esNumero() const {
        if (texto.empty()) return false;
        
        bool tienePunto = false;
        for (char c : texto) {
            if (!std::isdigit(c)) {
                if (c == '.' && !tienePunto) {
                    tienePunto = true;
                } else if (c == '-' || c == '+') {
                    continue;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool esAlfabetico() const {
        if (texto.empty()) return false;
        for (char c : texto) {
            if (!std::isalpha(c) && !std::isspace(c)) {
                return false;
            }
        }
        return true;
    }
    
    // Conversiones
    int aEntero() const {
        return std::stoi(texto);
    }
    
    double aDouble() const {
        return std::stod(texto);
    }
    
    // Métodos estáticos útiles
    static std::string repetir(const std::string& str, int veces) {
        std::string resultado;
        for (int i = 0; i < veces; ++i) {
            resultado += str;
        }
        return resultado;
    }

    


    
    static std::string rellenarIzquierda(const std::string& str, size_t longitud, char caracter = ' ') {
        if (str.length() >= longitud) return str;
        return std::string(longitud - str.length(), caracter) + str;
    }
    
    static std::string rellenarDerecha(const std::string& str, size_t longitud, char caracter = ' ') {
        if (str.length() >= longitud) return str;
        return str + std::string(longitud - str.length(), caracter);
    }
};

// Función de ejemplo de uso
int main() {
    StringManager sm("   Hola Mundo!   ");
    
    std::cout << "Texto original: '" << sm.getTexto() << "'" << std::endl;
    
    sm.trim();
    std::cout << "Después de trim: '" << sm.getTexto() << "'" << std::endl;
    
    sm.convertirMayusculas();
    std::cout << "En mayúsculas: '" << sm.getTexto() << "'" << std::endl;
    
    std::cout << "Contiene 'MUNDO': " << std::boolalpha << sm.contiene("MUNDO") << std::endl;
    
    // Ejemplo de división
    StringManager sm2("manzana,pera,uva,banana");
    auto frutas = sm2.dividir(",");
    std::cout << "Frutas divididas: ";
    for (const auto& fruta : frutas) {
        std::cout << fruta << " ";
    }
    std::cout << std::endl;
    
    return 0;
}