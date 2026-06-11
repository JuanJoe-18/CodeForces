#include<bits/stdc++.h>
using namespace std;
int main () {

    int t; cin >> t; 
    while (t--) {
        int n; cin >>n;
        for (int i = 1 , k = 1; i < n+1; i++, k+=2){
            cout << (k * (k+2)) << " ";
        }
        cout << endl;
    }

    return 0;
}