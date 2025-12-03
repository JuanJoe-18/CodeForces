#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<set<char>> rows(3);
    vector<set<char>> cols(3);
    vector<set<char>> diags(2);

    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 3; j++) {
            rows[i].insert(s[j]);// insertar la fila
            cols[j].insert(s[j]);
            if(i == j){
                diags[0].insert(s[j]);
            }
            if ((i==0 && j == 2) || (i==1 && j==1) || (i == 2 && j==0)) {
                diags[1].insert(s[j]);
            }
        }
    }
    int groups = 0;
    int individuals = 0;
    for (int i = 0; i < 3; i++) {
        if(rows[i].size() == 2){
            groups++;
        }else if (rows[i].size() == 1) {
            individuals++;
        }
        
        if(cols[i].size() == 2){
            groups++;
        }else if (cols[i].size() == 1) {
            individuals++;
        }
    
    }
    for (int i = 0; i < 2; i++) {
        if(diags[i].size() == 2){
            groups++;
        }else if (diags[i].size() == 1) {
            individuals++;
        }
    }

    cout << individuals << endl;
    cout << groups << endl;

    return 0;
}