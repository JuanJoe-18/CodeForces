#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    string vals;
    getline(cin,vals);

    stringstream ss(vals);       
    int x;
    while (ss >> x) {
        a.push_back(x);
    }
    int n;
    n = size(a);

    for (int i = 1; i < n; i++){
        if ( abs(a[i] - a[i-1]) < 1 || abs(a[i] - a[i-1]) > (n - 1)  ){
            cout << "Not Jolly" << endl;
            return 0;
        }
    }

    cout << "Jolly" << endl;
    
    
    

    return 0;
}