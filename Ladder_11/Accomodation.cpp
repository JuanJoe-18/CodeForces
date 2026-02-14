#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    int rooms = 0;
    while (n--) {
        int p,q;
        cin >> p >> q;
        if (q - p >= 2) rooms++;
    }

    cout << rooms << endl;
    
    
    


    
    return 0;
}