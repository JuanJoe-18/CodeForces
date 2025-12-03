#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> costo(m + 1, 0);
    vector<int> en_viaje(m + 1, -1);

    for (int i = 0; i < k; ++i) {
        int pier, card;
        cin >> pier >> card;

        if (en_viaje[card] == -1) {
            en_viaje[card] = pier; // comienza viaje
        } else {
            int start = en_viaje[card];
            if (start == pier)
                costo[card] += 100;
            else
                costo[card] += abs(pier - start);
            en_viaje[card] = -1; // termina viaje
        }
    }
    //no terminaron
    for (int i = 1; i <= m; ++i) {
        if (en_viaje[i] != -1) {
            costo[i] += 100;
        }
    }

    for (int i = 1; i <= m; ++i) {
        cout << costo[i];
        if (i < m) cout << " ";
    }
    cout << "\n";

    return 0;
}