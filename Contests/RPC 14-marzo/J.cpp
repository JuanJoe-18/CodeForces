#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    
    int n;
    cin >> n;

    vector<int> count(10, 0);
    for (int i = 0; i < n; i++) {
        int d; cin >> d;
        count[d]++;
    }

    if (count[1] || count[3] || count[7]) {
        cout << 1 << endl;
    } 
    else if (count[5]) {
        if (count[2] || count[6] || count[8]) {
            cout << 1 << endl;
        } 
        else if (count[4]) {
            cout << count[0] + 1 << endl;
        } 
        else {
            cout << n << endl;
        }
    } 
    else {
        cout << n << endl;
    }

    return 0;
}