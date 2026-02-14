#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::multiset;
using namespace std;



multiset<int> leer_numeros(int n) {
    multiset<int> nums;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        nums.insert(val);
    }
    return nums;
}

void imprimir_expresion_de_unos(int n) {
    if (n == 1) {
        cout << "1" << endl;
        return;
    }

    int num_threes = 0;
    int num_twos = 0;

    if (n % 3 == 0) {
        num_threes = n / 3;
    } else if (n % 3 == 1) {
        num_threes = n / 3 - 1;
        num_twos = 2;
    } else {
        num_threes = n / 3;
        num_twos = 1;
    }

    bool es_primer_termino = true;
    for (int i = 0; i < num_threes; ++i) {
        if (!es_primer_termino) cout << "*";
        cout << "(1+1+1)";
        es_primer_termino = false;
    }
    for (int i = 0; i < num_twos; ++i) {
        if (!es_primer_termino) cout << "*";
        cout << "(1+1)";
        es_primer_termino = false;
    }
    cout << endl;
}

void imprimir_expresion_mixta(int cantidad_de_unos, multiset<int>& numeros_grandes) {
    int grande_mas_pequeno = *numeros_grandes.begin();
    numeros_grandes.erase(numeros_grandes.begin());

    bool es_primer_termino = true;
    for (auto it = numeros_grandes.rbegin(); it != numeros_grandes.rend(); ++it) {
        if (!es_primer_termino) cout << "*";
        cout << *it;
        es_primer_termino = false;
    }

    if (!es_primer_termino) cout << "*";
    
    cout << "(";
    for (int i = 0; i < cantidad_de_unos; ++i) {
        cout << "1+";
    }
    cout << grande_mas_pequeno << ")";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    multiset<int> numeros = leer_numeros(n);

    int cantidad_de_unos = numeros.count(1);
    numeros.erase(1);

    if (numeros.empty()) {
        imprimir_expresion_de_unos(cantidad_de_unos);
    } else {
        imprimir_expresion_mixta(cantidad_de_unos, numeros);
    }

    return 0;
}
