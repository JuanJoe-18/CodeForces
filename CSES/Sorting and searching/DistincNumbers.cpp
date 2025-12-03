#include <algorithm>
#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int distinctNumbers = 0;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
         cin >> a[i];
    }
    sort(a.begin(),a.end()); //esta es la manera de hacer un arreglo de ocurrencias vector<int> f(n-1); for(int x:a) f[x]++;
    a.push_back(-1);
    for (int i = 0; i < n; i++) {
        if (a[i]!=a[i+1]) {
          distinctNumbers++; // No se porque se inicializo en 1
        }else if (a[i+1]==-1) {
             break;
        }else { 
            if (a[i] != a[i+1]) {
                distinctNumbers++;
            }
        }
    }
    cout<<distinctNumbers;
    return 0;
}