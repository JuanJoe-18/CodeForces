#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> laptops(n);
    for (int i = 0; i < n; i++) {
        cin >> laptops[i].first >> laptops[i].second; 
    }
    
    sort(laptops.begin(), laptops.end());
    
    bool happy = false;
    for (int i = 1; i < n; i++) {
        if (laptops[i].second < laptops[i-1].second) {
            happy = true;
            break;
        }
    }

    if(happy) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;
    return 0;
}
