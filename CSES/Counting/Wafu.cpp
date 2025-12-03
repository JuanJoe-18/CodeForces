#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
        int n=0;
        int k=0;
        cin >> n >> k;
        multiset<int> s;
        vector<int> soluciones;
        for (int i = 0; i < n; i++) { 
            int val;
            cin >> val;
            s.insert(val);
        }
        int f = 0;
        while (s.size() != 1 || f != k) {
            auto it = s.begin();
            s.erase(*it);
            soluciones.push_back(*it);
            if(*it != 1){
                for (int i = *it; i > 1 ; i--) {
                    s.insert(i);
                    soluciones.push_back(*it);
                }
            }
            
        }
        int h = soluciones.size();
        for (int i = 0; i < h; i++) {
            cout << soluciones[i];            
        }

    return 0;
}
