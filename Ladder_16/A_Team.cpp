#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int solve = 0;
    vector<vector<int>>  matrix(n,vector<int>(n));
    for (int i = 0; i < n ; i++) {
        for (int j = 0; i < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << solve << endl;
    return 0;


}