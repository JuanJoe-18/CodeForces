#include <iostream>
#include <vector>
#include <tuple>
#include <map>
using namespace std;

using Ficha = vector<pair<bool, bool>>;

vector<Ficha> formas = {
    // Cuadrado
    {{1,1},{1,1}},
    // S
    {{1,0},{1,1},{0,1}},
    {{0,1},{1,1},{1,0}},
    // Esquina
    {{1,1},{1,0}},
    {{1,0},{1,1}},
    {{0,1},{1,1}},
    {{1,1},{0,1}}
};

vector<string> codigos = {
    "cuadrado", "s", "s", "esquina", "esquina", "esquina", "esquina"
};

bool colocar(int pos, vector<pair<bool,bool>>& grilla, const Ficha& f) {
    if (pos + f.size() > grilla.size()) return false;
    for (int i = 0; i < f.size(); ++i)
        if ((grilla[pos+i].first && f[i].first) || (grilla[pos+i].second && f[i].second))
            return false;
    for (int i = 0; i < f.size(); ++i) {
        grilla[pos+i].first |= f[i].first;
        grilla[pos+i].second |= f[i].second;
    }
    return true;
}

void quitar(int pos, vector<pair<bool,bool>>& grilla, const Ficha& f) {
    for (int i = 0; i < f.size(); ++i) {
        grilla[pos+i].first ^= f[i].first;
        grilla[pos+i].second ^= f[i].second;
    }
}

bool backtrack(vector<pair<bool,bool>>& grilla, int a, int b, int c) {
    bool lleno = true;
    for (auto& col : grilla)
        if (!(col.first && col.second)) { lleno = false; break; }
    if (lleno) return true;

    for (int i = 0; i < grilla.size(); ++i) {
        if (grilla[i].first && grilla[i].second) continue;
        for (int j = 0; j < formas.size(); ++j) {
            string tipo = codigos[j];
            if (tipo == "cuadrado" && a == 0) continue;
            if (tipo == "s" && b == 0) continue;
            if (tipo == "esquina" && c == 0) continue;
            if (colocar(i, grilla, formas[j])) {
                if (backtrack(grilla, a - (tipo=="cuadrado"), b - (tipo=="s"), c - (tipo=="esquina")))
                    return true;
                quitar(i, grilla, formas[j]);
            }
        }
        break;
    }
    return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int total = 4*a + 4*b + 3*c;
    for (int n = total/2; n >= 0; --n) {
        vector<pair<bool,bool>> grilla(n, {0,0});
        if (backtrack(grilla, a, b, c)) {
            cout << n << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
    return 0;
}
