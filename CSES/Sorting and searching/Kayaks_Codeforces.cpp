#include <algorithm>
#include<bits/stdc++.h>
#include <cstdlib>
#include <set>
#include <tuple>
#include <vector>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int p = 2*n;
    vector<int> w(p);
    int minInestability = 0;
    for (int i = 0; i < p; i++) {
        cin >> w[i];
    }
    sort(w.begin(),w.end());
    vector<tuple<int,int,int>> t(n-1);
    for (int i = 1; i < p; i++) {
        t[i] = make_tuple(abs(w[i-1]-w[i]),i-1,i);
    }
    set<tuple<int,int,int>> S;
    unordered_set<int> usados;

    for (auto &[x,y,z] : t) {
        if (usados.count(y) || usados.count(z)) {
            // alguno de los elementos ya apareció → no insertamos
            continue;
        }
        S.insert({x,y,z});
        usados.insert(x);
        usados.insert(y);
        usados.insert(z);
    }

    sort(w.begin(), w.end(), [](auto &a, auto &b) {
    return get<0>(a) < get<0>(b);});


    


    





    cout << minInestability;
    return 0;
}