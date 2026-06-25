#include<bits/stdc++.h>
using namespace std;


void hanoi(int n, int origen, int destino, int aux) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, origen, aux, destino);
    cout << origen << " " << destino << "\n";
    hanoi(n - 1, aux, destino, origen);
}






int main () {
    int n; cin >> n;
    cout << (1 << n) - 1 << endl;

    hanoi(n,1,3,2);

    return 0;
}