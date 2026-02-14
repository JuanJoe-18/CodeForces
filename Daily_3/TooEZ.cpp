#include<bits/stdc++.h>
using namespace std;
int main(){
    int g, c, l;
    cin >> g >> c >> l;
    vector<int> a = {g,c,l};
    sort(a.begin(), a.end());
     int M = *max_element(a.begin(),a.end());
     int m = *min_element(a.begin(),a.end());
     if(abs(M-m) >= 10) cout << "check again" << endl;
     else cout << "final " << a[1] << endl;
    return 0;
}