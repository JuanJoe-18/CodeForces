#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        bool is_1 = false, is_67 = false;
        while (n--){
            int x;cin >> x;
            if (x == 1) is_1 = true;
            if (x == 67) is_67 = true;
        }
        if (is_67) cout << "yes" << endl;
        else  cout << "no" << endl;
    
    }
    return 0;
}