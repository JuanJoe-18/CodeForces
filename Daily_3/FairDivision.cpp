#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int cnt1=0;
        int cnt2=0;
        auto sum = 0;
        for (size_t i = 0; i < n; i++) {
            int a; cin >> a;
            if (a == 1)cnt1++;
            else cnt2++;
        }
        int s = cnt1 + 2*cnt2;
        if(s % 2 == 1) cout << "no" << endl;
        else if ((s/2) % 2 == 1 && !cnt1){
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
      
    } 

    return 0;
}