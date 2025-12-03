#include <bits/stdc++.h>
#include <cmath>
#include <vector>
using namespace std;


string repetir(string &str, int veces) {
     string resultado;
    for (int i = 0; i < veces; ++i) {            resultado += str;
    }
    return resultado;
}

string a = "C.";
string b = ".C";

void par(int n){
    for (int i = 0; i < n; i++) {
        if( i%2 == 0) cout << repetir(a, n/2) << endl;
        else cout << repetir(b, n/2) << endl; 
    }

}

void impar(int n){
    for (int i = 0; i < n; i++) {
        if( i%2 == 0) cout << repetir(a, (n-1)/2) << "C" << endl;
        else cout << repetir(b, (n-1)/2) << "." << endl; 
    }

}
int main(){
    vector<vector<char>> board;
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout <<   (pow(n,2)/2) << endl;
        par(n);
    } else {
        cout <<  (pow(n-1,2)/2) + n  << endl;
        impar(n);
    }

    return 0;
}