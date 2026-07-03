#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// ==========================================
// 🚀 ESTRUCTURA MAESTRA DE STRINGS (ICPC)
// ==========================================

namespace StringAlgo {

    /**
     * 1. KMP (Prefix Function / Pi Array) - O(N)
     * pi[i] = longitud del prefijo propio más largo que también es sufijo en s[0..i]
     */
    vector<int> prefix_function(const string& s) {
        int n = s.size();
        vector<int> pi(n, 0);
        for (int i = 1; i < n; i++) {
            int j = pi[i - 1];
            while (j > 0 && s[i] != s[j]) j = pi[j - 1];
            if (s[i] == s[j]) j++;
            pi[i] = j;
        }
        return pi;
    }

    /**
     * 2. Algoritmo Z (Z-Array) - O(N)
     * z[i] = longitud del prefijo más largo de s que coincide con el prefijo de s[i..N-1]
     */
    vector<int> z_function(const string& s) {
        int n = s.size(), l = 0, r = 0;
        vector<int> z(n, 0);
        for (int i = 1; i < n; i++) {
            if (i <= r) z[i] = min(r - i + 1, z[i - l]);
            while (i + z[i] < n && s[z[i]] == s[i + z[i]]) z[i]++;
            if (i + z[i] - 1 > r) { l = i; r = i + z[i] - 1; }
        }
        return z;
    }
}

/**
 * 3. Double Rolling Hash (O(N) build, O(1) query)
 * Ultra robusto contra "Anti-Hash tests" en Codeforces.
 */
struct StringHash {
    string s;
    int n;
    vector<ll> h1, h2, p1, p2;
    const ll MOD1 = 1e9 + 7, MOD2 = 1e9 + 9;
    const ll BASE1 = 31, BASE2 = 37;

    StringHash(const string& _s) : s(_s), n(s.size()) {
        h1.assign(n + 1, 0); h2.assign(n + 1, 0);
        p1.assign(n + 1, 1); p2.assign(n + 1, 1);
        for (int i = 0; i < n; i++) {
            // Asume que el string contiene minúsculas. Ajustar si hay mayúsculas o ASCII completo.
            h1[i + 1] = (h1[i] * BASE1 + (s[i] - 'a' + 1)) % MOD1;
            h2[i + 1] = (h2[i] * BASE2 + (s[i] - 'a' + 1)) % MOD2;
            p1[i + 1] = (p1[i] * BASE1) % MOD1;
            p2[i + 1] = (p2[i] * BASE2) % MOD2;
        }
    }

    // Devuelve el Hash del substring S[l..r] (0-indexed, inclusivo) en O(1)
    pair<ll, ll> get_hash(int l, int r) {
        ll hash1 = (h1[r + 1] - (h1[l] * p1[r - l + 1]) % MOD1 + MOD1) % MOD1;
        ll hash2 = (h2[r + 1] - (h2[l] * p2[r - l + 1]) % MOD2 + MOD2) % MOD2;
        return {hash1, hash2};
    }
};

/**
 * 4. Trie (Árbol de Prefijos)
 * Útil para diccionarios y conteo de prefijos. Usa vectores dinámicos (evita punteros lentos).
 */
struct Trie {
    struct Node {
        int next[26];
        bool is_end = false;
        int count = 0; // Cuántas palabras pasan por este nodo
        Node() { fill(next, next + 26, -1); }
    };
    
    vector<Node> t;
    
    Trie() { t.emplace_back(); }
    
    void insert(const string& s) {
        int v = 0;
        for (char ch : s) {
            int c = ch - 'a';
            if (t[v].next[c] == -1) {
                t[v].next[c] = t.size();
                t.emplace_back();
            }
            v = t[v].next[c];
            t[v].count++;
        }
        t[v].is_end = true;
    }
    
    bool search(const string& s) {
        int v = 0;
        for (char ch : s) {
            int c = ch - 'a';
            if (t[v].next[c] == -1) return false;
            v = t[v].next[c];
        }
        return t[v].is_end;
    }
};



int main () { //nota: solo tengo que eliminar t tantas veces hasta que no haya ninguna en s
    freopen("censor.in","r",stdin);
    freopen("censor.out","w",stdout);
    string s; cin >> s;
    string p; cin >> p;

    vector<int> pi_p = StringAlgo::prefix_function(p);

    string ans = "";
    vector<int> estado(s.size() + 1,0);

    for (char c : s) {
        ans.push_back(c);
        int j = estado[ans.size() - 1];
        while (j > 0 && p[j] != c) {
            j = pi_p[j - 1];
        }
        if (p[j] == c) j++;
        estado[ans.size()] = j;
        if (j == p.size()) ans.resize(ans.size() - p.size()); 
    }

    cout << ans << endl;
}