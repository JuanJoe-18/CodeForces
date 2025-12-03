#include<bits/stdc++.h> 
#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<int> great3(int n);
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    if (n <= 3 && n != 1) {
        cout << "NO SOLUTION\n";
    } else {
        vector<int> result = great3(n);
        for (int x : result) cout << x << " ";
    }
    return 0;
}

vector<int> great3(int n){
    vector<int> v;
    v.reserve(n);              // capacidad n, tamaño 0 (sin ceros)
    for (int i = 2; i <= n; i += 2) v.push_back(i);
    for (int i = 1; i <= n; i += 2) v.push_back(i);
    return v;
}