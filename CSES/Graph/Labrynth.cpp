#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

vector<vi> adj;
vi visited;
const int MAXN = 200005;




int main () {
    adj.reserve(5000);

    int n,m;
    cin >> n >> m;

    vector<string> in(n);
    for (size_t i = 0; i < n; i++) cin >> in[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; i < m; j++) {
            if(in[i][j] == 'A') { // aqui comienza todo
                if ( j >= 0 &&  in[i][j-1]  == '.') {//izquierda

                }else if ( j < n &&  in[i][j+1]  == '.') {//derecha
                    
                }else if ( i < n &&  in[i][j-1]  == '.') {//abajo
                    
                }else if ( i >= 0 &&  in[i][j-1]  == '.') {//arriba
                    
                }

                
            }
            

        }
        
    }
    

    
    
    


    return 0;
}