#include<bits/stdc++.h>
#include <map>
using namespace std;
typedef long long ll;
int main(){
    int n,m;
    cin >> n >> m;
    map<int, int> classes;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int G_ij;
            cin >> G_ij;
            if(G_ij > classes[j]){
                classes[j] = G_ij;
            }
        }
    }
    ll sum = 0;
    for (auto const [C,E]: classes) {
        sum += classes[C];
    }
    cout << sum << endl;

    return 0;
}