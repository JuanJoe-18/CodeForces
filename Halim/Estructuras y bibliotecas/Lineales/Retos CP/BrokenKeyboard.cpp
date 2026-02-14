#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while (cin >> s) {
        list<char> lista;
        auto it = lista.begin();
        for (char c : s) {
            if (c == '[') {
                it = lista.begin();
            } else if (c == ']') {
                it = lista.end();
            } else {

                lista.insert(it, c);
            }
        }

        for (char c : lista) cout << c;
        cout << "\n";
    }
    return 0;
}