#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x,n;
        cin >> x >> n;
        cout << (n % 2 == 0 ? 0:x) << endl;
    }
    
    return 0;
}