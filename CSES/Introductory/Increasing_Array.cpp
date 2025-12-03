#include<bits/stdc++.h> 
#include <cmath>
#include <cstdlib>
#include <iostream>
#define ll long long
using namespace std;
int main(){
    int n = 0;
    cin >> n;
    vector<ll> a(n);
    ll operations = 0;
    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int i = 0; i<n; i++) {
        if(a[i] < max){
            operations += max-a[i];
            a[i] += max-a[i];
        }
        max = fmax(max, a[i]);
    }
    cout << operations;
    return 0;
}